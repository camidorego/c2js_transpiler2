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
    int data_type;
    char var_name[30];
}

%token <str> IDENTIFIER
%token <num> NUMBER_LITERAL
%token <data_type> KEYWORD_INT KEYWORD_CONST KEYWORD_CHAR KEYWORD_FLOAT KEYWORD_DOUBLE 
%token ASSIGNMENT_OP SEMICOLON

%type <str> program statements statement variable_declaration

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
    variable_declaration SEMICOLON
    ;

variable_declaration:
    IDENTIFIER
    {
        append_in_jsFile("let ");
        append_in_jsFile(yylval.str);
    }
    | KEYWORD_INT IDENTIFIER ASSIGNMENT_OP NUMBER_LITERAL
    {
        append_in_jsFile("let ");
        append_in_jsFile($2);
        append_in_jsFile(" = ");
        char num_str[20];
        snprintf(num_str, sizeof(num_str), "%d", $4);
        append_in_jsFile(num_str);
    }
    ;

%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la línea %d\n", message, yylineno);
    return -1;
}
