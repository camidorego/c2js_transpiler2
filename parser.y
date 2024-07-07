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

%token <str> IDENTIFIER
%token <num> NUMBER_LITERAL
%token <num_dec> NUMBER_LITERAL_DEC
%token <str> KEYWORD_INT KEYWORD_CONST KEYWORD_CHAR KEYWORD_FLOAT KEYWORD_DOUBLE 
%token ASSIGNMENT_OP SEMICOLON
%token <str> QUOTED_CHAR QUOTED_STRING

%type <str> program statements statement variable_declaration
%type <str> type
%type <str> terminal

%%

program:
    { printf("Comenzando a traducir a JavaScript\n"); create_output_file(); }
    statements
    { close_output_file(); }
    ;

statements:
    statement
    | statements statement
    ;

statement:
    type variable_declaration SEMICOLON
    ;

variable_declaration:
    IDENTIFIER
    {
        append_in_jsFile("let ");
        append_in_jsFile(yylval.str);
    }
    | IDENTIFIER ASSIGNMENT_OP terminal
    {
        append_in_jsFile("let ");
        append_in_jsFile($1);
        append_in_jsFile(" = ");
        append_in_jsFile($3);
        append_in_jsFile(";\n");
    }
    ;

type:
    KEYWORD_INT { printf("Se reconoció un int\n"); $$ = strdup("int"); }
    | KEYWORD_CHAR { printf("Se reconoció un char\n"); $$ = strdup("char"); }
    | KEYWORD_FLOAT { printf("Se reconoció un float\n"); $$ = strdup("float"); }
    | KEYWORD_DOUBLE { printf("Se reconoció un double\n"); $$ = strdup("double"); }
    ;

terminal:
    NUMBER_LITERAL
    {
        char num_str[20];
        snprintf(num_str, sizeof(num_str), "%d", $1);
        $$ = strdup(num_str);
    }
    | NUMBER_LITERAL_DEC
    {
        char num_str[20];
        snprintf(num_str, sizeof(num_str), "%f", $1);
        $$ = strdup(num_str);
    }
    | QUOTED_CHAR
    {
        char char_str[4];
        snprintf(char_str, sizeof(char_str), "'%c'", $1[1]);
        $$ = strdup(char_str);
    }
    | QUOTED_STRING
    {
        $$ = strdup($1); // Se asegura de duplicar la cadena
    }
    ;
    ;
    

%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la línea %d\n", message, yylineno);
    return -1;
}
