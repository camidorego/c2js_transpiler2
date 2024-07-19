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
%token<num_dec>DOUBLE_NUM
%token<str>INT CHAR DOUBLE
%token<str>IDENTIFIER STRING

%token<str> INC_OP DEC_OP INC_OP_LEFT INC_OP_RIGHT DEC_OP_LEFT DEC_OP_RIGHT GE_OP LE_OP EQ_OP NE_OP AND_OP OR_OP
%token<str>DECLARE DECLARE_ARRAY ARRAY
%token<str> FOR WHILE BREAK CONTINUE IF ELSE RETURN PRINTF STRLEN
%token <str> '-' '+' '>' '<' '*' '/' '}' '{' '(' ')' '[' ']' '=' ',' ':' '!' ';' '.' '%'

%type <str> program functionList function parameterList parameter typeName statementList statement exprList expr terminal

%%

program:
        { printf("Comenzando a traducir a JavaScript\n"); create_output_file(); }
        functionList  
        { close_output_file(); }                                                              
       ;

functionList:
        function                                                                    
       |function functionList                                                       
       ;

function:
        typeName IDENTIFIER '(' parameterList ')' '{' statementList '}'             
       |typeName IDENTIFIER '(' ')' '{' statementList '}'                            
       ;

parameterList:
        parameter                                                                   
       |parameter ',' parameterList                                                 
       ;

parameter:
        typeName IDENTIFIER                                                         
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
        WHILE '(' expr ')' '{' statementList '}'                                                                                               
       |IF {append_in_jsFile("\nif(");} '(' expr ')' {append_in_jsFile("){ \n");} '{' statementList '}' {append_in_jsFile("\n} \n");}  elseStatement                                
       |RETURN expr ';'                                                             
       |PRINTF '(' {append_in_jsFile("\nconsole.log(");} exprList ')' ';'  {append_in_jsFile(") \n");}                                               
       |IDENTIFIER '(' exprList ')' ';'                                             
       |IDENTIFIER '=' expr ';'                                                     
       |IDENTIFIER '[' expr ']' '=' expr ';'                                     
       |typeName IDENTIFIER '=' expr ';' {append_in_jsFile("let "); append_in_jsFile($2);append_in_jsFile(" = "); append_in_jsFile($4);}                              
       |typeName IDENTIFIER '[' ']' '=' expr ';'                           
       |typeName IDENTIFIER '[' ']' '=' '{' exprList '}' ';'      
       |typeName IDENTIFIER '[' INTEGER ']' ';'                                 
       |typeName IDENTIFIER '[' INTEGER ']' '=' expr ';'                           
       |typeName IDENTIFIER ';'                                  
       |INC_OP expr ';'                                      
       |DEC_OP expr ';'                                      
       |expr INC_OP ';'                                       
       |expr DEC_OP ';'                                       
       ;
elseStatement:
        ELSE '{' {append_in_jsFile("\nelse{ \n");}  statementList '}' {append_in_jsFile("\n} \n");} 
        |
        ;
exprList:
        expr                                   
       |expr ',' exprList                                                         
       ;

expr:
        terminal  {append_in_jsFile($1);}                                       
       |'-' expr                                   
       |STRLEN '(' IDENTIFIER ')'                                    
       |IDENTIFIER '(' exprList ')'                                         
       |IDENTIFIER '[' expr ']'                                      
       |expr '+' expr                                           
       |expr '-' expr                                           
       |expr '*' expr                                                               
       |expr '/' expr                                                              
       |expr '<' expr                                                               
       |expr '>' expr                                                               
       |expr NE_OP expr                                                            
       |expr EQ_OP expr {append_in_jsFile($1); append_in_jsFile("=="); append_in_jsFile($3);}                                                            
       |expr OR_OP expr                                                             
       |expr AND_OP expr                                                            
       |expr LE_OP expr                                                             
       |expr GE_OP expr                                                             
       |'!' expr                                                                    
       |'(' expr ')'                                                               
       |INC_OP expr                                                                 
       |DEC_OP expr                                                                
       |expr INC_OP                                                                 
       |expr DEC_OP                                                                 
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
       |DOUBLE 

%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la línea %d\n", message, yylineno);
    return -1;
}
