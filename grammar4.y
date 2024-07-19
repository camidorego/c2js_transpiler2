%{
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
int yyerror(char *message);
extern int yylineno;
%}

%start program

%union {
    char *str;
    int num;
    float num_dec;
    int data_type;
    char var_name[30];
}

%token<num>INTEGER
%token<num_dec>FLOAT
%token<str>INT CHAR DOUBLE
%token<str>IDENTIFIER STRING CONST

%token<str> INC_OP DEC_OP INC_OP_LEFT INC_OP_RIGHT DEC_OP_LEFT DEC_OP_RIGHT GE_OP LE_OP EQ_OP NE_OP AND_OP OR_OP
%token<str>DECLARE DECLARE_ARRAY ARRAY
%token<str> FOR WHILE BREAK CONTINUE IF ELSE RETURN PRINTF STRLEN
%token <str> '-' '+' '>' '<' '*' '/' '}' '{' '(' ')' '[' ']' '=' ',' ':' '!' ';' '.' '%'

%type <str> program functionList function parameterList parameter typeName statementList statement exprList expr terminal array_expr array_exprList

%%

program:
        { printf("Comenzando a traducir a JavaScript\n"); create_output_file(); }
        functionList  
        { append_in_jsFile("main()");close_output_file(); } // se agrega main() al final del programa js                                                             
       ;

functionList:
        function                                                                    
       |function functionList                                                       
       ;

function:
        typeName IDENTIFIER '(' {append_in_jsFile("function "); append_in_jsFile($2); append_in_jsFile("(");} parameterList ')' '{' {append_in_jsFile("){ \n");} statementList '}' {append_in_jsFile("\n} \n");}            
       |typeName IDENTIFIER '(' ')' '{'{append_in_jsFile("function "); append_in_jsFile($2); append_in_jsFile("(){ \n");} statementList '}' {append_in_jsFile("\n} \n");}                          
       ;

parameterList:
        parameter                                                                  
       |parameter ','{append_in_jsFile(", ");} parameterList                                                 
       ;

parameter:
        typeName IDENTIFIER {append_in_jsFile($2);}                                                          
       |typeName IDENTIFIER '[' ']'                                                
       ;

typeName:
        INT                                                                         
       |CHAR                                                                        
       |DOUBLE                                                                      
       ;

statementList:
        statement                                                                   
       |statement statementList                                                     
       ;

statement:
        WHILE {append_in_jsFile("while(");} '(' expr ')' '{' {append_in_jsFile("){ \n");} statementList '}' {append_in_jsFile("\n} \n");}                                                                                               
       |IF {append_in_jsFile("if(");} '(' expr ')' {append_in_jsFile("){ \n");} '{' statementList '}' {append_in_jsFile("\n} \n");}  elseStatement                                
       |RETURN {append_in_jsFile("return ");}expr ';' {append_in_jsFile("\n");}                                                           
       |PRINTF '(' {append_in_jsFile("console.log(");} exprList ')' ';'  {append_in_jsFile(") \n");}                                               
       |IDENTIFIER '(' {append_in_jsFile($1); append_in_jsFile("("); } exprList ')' {append_in_jsFile(")");} ';' {append_in_jsFile("\n");}                                            
       |IDENTIFIER '=' {append_in_jsFile($1);append_in_jsFile(" = ");} expr ';' {append_in_jsFile("\n");}                                                     
       |IDENTIFIER '[' expr ']' '=' expr ';'                                     
       |typeName IDENTIFIER '=' {append_in_jsFile("let "); append_in_jsFile($2);append_in_jsFile(" = ");} expr ';'  {append_in_jsFile("\n");} // definicion de variable                          
       |CONST typeName IDENTIFIER '=' {append_in_jsFile("const "); append_in_jsFile($3);append_in_jsFile(" = ");} expr ';'  {append_in_jsFile("\n");} //definicion de constante
       |typeName IDENTIFIER '[' ']' '=' {append_in_jsFile("let "); append_in_jsFile($2);append_in_jsFile(" = ");} expr ';' {append_in_jsFile("\n");} // strings                             
       |typeName IDENTIFIER '[' ']' '=' '{' {append_in_jsFile("let "); append_in_jsFile($2);append_in_jsFile(" = [");} exprList '}' ';' { append_in_jsFile("]\n");} // arrays 
       |typeName IDENTIFIER '[' INTEGER ']' '[' INTEGER ']' '=' '{' '{' {append_in_jsFile("let "); append_in_jsFile($2);append_in_jsFile(" = [[");} exprList '}' ',' '{' {append_in_jsFile("], [");} exprList '}' '}' ';' { append_in_jsFile("]]\n");} // arrays     
       |typeName IDENTIFIER '[' INTEGER ']' ';' {append_in_jsFile("let "); append_in_jsFile($2);append_in_jsFile("= new Array("); char num_str[20]; snprintf(num_str, sizeof(num_str), "%d", $4);append_in_jsFile(strdup(num_str));append_in_jsFile(") \n");}                               
       |typeName IDENTIFIER '[' INTEGER ']' '=' '{' {append_in_jsFile("let "); append_in_jsFile($2);append_in_jsFile("= [");}  exprList '}' ';' {append_in_jsFile("]\n");}                         
       |typeName IDENTIFIER ';' {append_in_jsFile("let "); append_in_jsFile($2);append_in_jsFile("\n");}                                 
       |inc_operadores expr ';' {append_in_jsFile("\n");}                                                                                                             
       |expr inc_operadores ';' {append_in_jsFile("\n");}                                      
       ;
inc_operadores:
        INC_OP {append_in_jsFile("++");}
        | DEC_OP {append_in_jsFile("--");}
        ;
elseStatement:
        ELSE '{' {append_in_jsFile("else{ \n");}  statementList '}' {append_in_jsFile("\n} \n");} 
        |
        ;
exprList:
        expr                                   
       |expr ',' {append_in_jsFile(", ");} exprList                                                         
       ;

expr:
        terminal  {append_in_jsFile($1);}                                       
       |'-' expr                                   
       |STRLEN '(' IDENTIFIER ')'                                    
       |IDENTIFIER '(' {append_in_jsFile($1); append_in_jsFile("("); } exprList ')' {append_in_jsFile(")");}                                       
       |IDENTIFIER {append_in_jsFile($1); } array_exprList                                     
       |expr operator expr                                                                                                       
       |'!' {append_in_jsFile("!");} expr                                                                  
       |'('{append_in_jsFile("(");} expr ')' {append_in_jsFile(")\n");}                                                                                                                             
       ;

array_exprList
        : array_expr
        | array_expr array_exprList
        ;

array_expr
        : '[' {append_in_jsFile("["); } expr ']' {append_in_jsFile("]");}
        ;

operator:
        '+' {append_in_jsFile("+");}
        | '-' {append_in_jsFile("-");}
        | '*' {append_in_jsFile("*");}
        | '/' {append_in_jsFile("/");}
        | '<' {append_in_jsFile("<");}
        | '>' {append_in_jsFile(">");}
        | EQ_OP {append_in_jsFile("==");}
        | NE_OP {append_in_jsFile("!=");}
        | OR_OP {append_in_jsFile("||");}
        | AND_OP {append_in_jsFile("&&");}
        | LE_OP {append_in_jsFile("<=");}
        | GE_OP {append_in_jsFile(">=");}
        ;

terminal:
        INTEGER {char num_str[20]; snprintf(num_str, sizeof(num_str), "%d", $1); $$ = strdup(num_str);}                                      
       |STRING   {$$ = strdup($1);}                                        
       |IDENTIFIER {$$ = strdup($1);}                                   
       |FLOAT {char num_str[20]; snprintf(num_str, sizeof(num_str), "%f", $1); $$ = strdup(num_str);}

%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la línea %d\n", message, yylineno);
    return -1;
}
