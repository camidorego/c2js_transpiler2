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
%token <str> KEYWORD_INT KEYWORD_CONST KEYWORD_CHAR KEYWORD_FLOAT KEYWORD_DOUBLE KEYWORD_WHILE
%token <str> ASSIGNMENT_OP SEMICOLON RBRACE LBRACE RPAREN LPAREN
%token <str> PLUS_OP MINUS_OP MULTIPLY_OP DIVIDE_OP MOD_OP
%token <str> GT_OP LT_OP GE_OP LE_OP EQ_OP NEQ_OP
%token <str> LAND LOR LNOT
%token <str> QUOTED_CHAR QUOTED_STRING

%type <str> program statements statement variable_declaration constant_declaration expression while_loop
%type <str> relational_expression logical_expression aritmethic_expression
%type <str> type
%type <str> terminal operator

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
    | constant_declaration SEMICOLON
    | expression SEMICOLON
    ;

variable_declaration:
    type IDENTIFIER
    {
        append_in_jsFile("let ");
        append_in_jsFile(yylval.str);
    }
    | type IDENTIFIER ASSIGNMENT_OP terminal
    {
        append_in_jsFile("let ");
        append_in_jsFile($1);
        append_in_jsFile(" = ");
        append_in_jsFile($3);
        append_in_jsFile(";\n");
    }
    | type IDENTIFIER ASSIGNMENT_OP expression
    ;

constant_declaration:
    KEYWORD_CONST type IDENTIFIER ASSIGNMENT_OP terminal
    {
        append_in_jsFile("const ");
        append_in_jsFile($3);
        append_in_jsFile(" = ");
        append_in_jsFile($5);
        append_in_jsFile(";\n");
    }
    ;

expression:
    aritmethic_expression
    | relational_expression
    | logical_expression
    | LPAREN expression RPAREN
    {
        append_in_jsFile("(");
        append_in_jsFile($2);
        append_in_jsFile(")");
    }
    | while_loop
    ;

aritmethic_expression:
    terminal operator terminal
    ;

relational_expression:
    terminal EQ_OP terminal
    {
        append_in_jsFile($1);
        append_in_jsFile(" === ");
        append_in_jsFile($3);
        append_in_jsFile(";\n");
    }
    | terminal NEQ_OP terminal
    {
        append_in_jsFile($1);
        append_in_jsFile(" !== ");
        append_in_jsFile($3);
        append_in_jsFile(";\n");
    }
    | terminal GT_OP terminal
    {
        append_in_jsFile($1);
        append_in_jsFile(" > ");
        append_in_jsFile($3);
        append_in_jsFile(";\n");
    }
    | terminal GE_OP terminal
    {
        append_in_jsFile($1);
        append_in_jsFile(" < ");
        append_in_jsFile($3);
        append_in_jsFile(";\n");
    }
    | terminal LT_OP terminal
    {
        append_in_jsFile($1);
        append_in_jsFile(" >= ");
        append_in_jsFile($3);
        append_in_jsFile(";\n");
    }
    | terminal LE_OP terminal
    {
        append_in_jsFile($1);
        append_in_jsFile(" <= ");
        append_in_jsFile($3);
        append_in_jsFile(";\n");
    }
    ;

logical_expression:
    terminal LAND terminal
    {
        append_in_jsFile($1);
        append_in_jsFile(" && ");
        append_in_jsFile($3);
        append_in_jsFile(";\n");
    }
    | terminal LOR terminal
    {
        append_in_jsFile($1);
        append_in_jsFile(" || ");
        append_in_jsFile($3);
        append_in_jsFile(";\n");
    }
    | LNOT terminal
    {
        append_in_jsFile("!");
        append_in_jsFile($2);
        append_in_jsFile(";\n");
    }
    ;

while_loop:
    KEYWORD_WHILE
    {
        append_in_jsFile("while");
        
        append_in_jsFile(";\n");
    }
    ;

type:
    KEYWORD_INT { printf("Se reconoció un int\n"); $$ = strdup("int"); }
    | KEYWORD_CHAR { printf("Se reconoció un char\n"); $$ = strdup("char"); }
    | KEYWORD_FLOAT { printf("Se reconoció un float\n"); $$ = strdup("float"); }
    | KEYWORD_DOUBLE { printf("Se reconoció un double\n"); $$ = strdup("double"); }
    ;

operator:
    PLUS_OP
    {
        append_in_jsFile(" + ");
    }
    | MINUS_OP
    {
        append_in_jsFile(" - ");
    }
    | MULTIPLY_OP
    {
        append_in_jsFile(" * ");
    }
    | DIVIDE_OP
    {
        append_in_jsFile(" / ");
    }
    | MOD_OP
    {
        append_in_jsFile(" % ");
    }
    ;

terminal:
    IDENTIFIER
    {
        $$ = strdup($1);
    }
    | NUMBER_LITERAL
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

%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la línea %d\n", message, yylineno);
    return -1;
}
