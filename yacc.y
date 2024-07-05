%{
#include "tokens.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
void yyerror(const char *s);

typedef struct {
    char *str;
    int num;
} YYSTYPE;

#define YYSTYPE YYSTYPE
%}

%union {
    char *str;
    int num;
    int data_type;
}

%token <str> IDENTIFIER
%token <num> NUMBER_LITERAL
%token KEYWORD_INT KEYWORD_CONST KEYWORD_FOR KEYWORD_WHILE KEYWORD_IF KEYWORD_ELSE
%token KEYWORD_FUNCTION KEYWORD_RETURN
%token ASSIGNMENT_OP SEMICOLON COMMA LPAREN RPAREN LBRACE RBRACE LSQBRAQ RSQBRAQ
%token PLUS_OP MINUS_OP MULTIPLY_OP DIVIDE_OP EQ_OP NEQ_OP GT_OP LT_OP GE_OP LE_OP
%token LAND LOR LNOT
%token MAIN VOID PRINTF

%type <str> program statements statement variable_declaration constant_declaration assignment
%type <str> loop_statement conditional_statement function_definition
%type <str> expression

%left PLUS_OP MINUS_OP
%left MULTIPLY_OP DIVIDE_OP
%left EQ_OP NEQ_OP GT_OP LT_OP GE_OP LE_OP

%%

program:
    statements
    ;

statements:
    statement
    | statements statement
    ;

statement:
    variable_declaration SEMICOLON  { printf("%s;\n", $1); }
    | constant_declaration SEMICOLON { printf("%s;\n", $1); }
    | assignment SEMICOLON { printf("%s;\n", $1); }
    | loop_statement { printf("%s\n", $1); }
    | conditional_statement { printf("%s\n", $1); }
    | function_definition { printf("%s\n", $1); }
    | KEYWORD_RETURN expression SEMICOLON { printf("return %s;\n", $2); }
    ;

variable_declaration:
    KEYWORD_INT IDENTIFIER { $$ = strdup($2); }
    | KEYWORD_INT IDENTIFIER ASSIGNMENT_OP expression { $$ = (char *) malloc(50); sprintf($$, "let %s = %s", $2, $4); }
    ;

constant_declaration:
    KEYWORD_CONST IDENTIFIER ASSIGNMENT_OP expression { $$ = (char *) malloc(50); sprintf($$, "const %s = %s", $2, $4); }
    ;

assignment:
    IDENTIFIER ASSIGNMENT_OP expression { $$ = (char *) malloc(50); sprintf($$, "%s = %s", $1, $3); }
    ;

loop_statement:
    KEYWORD_FOR LPAREN assignment SEMICOLON expression SEMICOLON assignment RPAREN LBRACE statements RBRACE
    { $$ = (char *) malloc(200); sprintf($$, "for (%s; %s; %s) {\n%s\n}", $3, $5, $7, $10); }
    | KEYWORD_WHILE LPAREN expression RPAREN LBRACE statements RBRACE
    { $$ = (char *) malloc(150); sprintf($$, "while (%s) {\n%s\n}", $3, $6); }
    ;

conditional_statement:
    KEYWORD_IF LPAREN expression RPAREN LBRACE statements RBRACE
    { $$ = (char *) malloc(150); sprintf($$, "if (%s) {\n%s\n}", $3, $6); }
    | KEYWORD_IF LPAREN expression RPAREN LBRACE statements RBRACE KEYWORD_ELSE LBRACE statements RBRACE
    { $$ = (char *) malloc(200); sprintf($$, "if (%s) {\n%s\n} else {\n%s\n}", $3, $6, $10); }
    ;

function_definition:
    KEYWORD_FUNCTION IDENTIFIER LPAREN RPAREN LBRACE statements RBRACE
    { $$ = (char *) malloc(150); sprintf($$, "function %s() {\n%s\n}", $2, $6); }
    ;

expression:
    IDENTIFIER { $$ = strdup($1); }
    | NUMBER_LITERAL { $$ = (char *) malloc(20); sprintf($$, "%d", $1); }
    | expression PLUS_OP expression { $$ = (char *) malloc(50); sprintf($$, "%s + %s", $1, $3); }
    | expression MINUS_OP expression { $$ = (char *) malloc(50); sprintf($$, "%s - %s", $1, $3); }
    | expression MULTIPLY_OP expression { $$ = (char *) malloc(50); sprintf($$, "%s * %s", $1, $3); }
    | expression DIVIDE_OP expression { $$ = (char *) malloc(50); sprintf($$, "%s / %s", $1, $3); }
    | expression EQ_OP expression { $$ = (char *) malloc(50); sprintf($$, "%s == %s", $1, $3); }
    | expression NEQ_OP expression { $$ = (char *) malloc(50); sprintf($$, "%s != %s", $1, $3); }
    | expression GT_OP expression { $$ = (char *) malloc(50); sprintf($$, "%s > %s", $1, $3); }
    | expression LT_OP expression { $$ = (char *) malloc(50); sprintf($$, "%s < %s", $1, $3); }
    | expression GE_OP expression { $$ = (char *) malloc(50); sprintf($$, "%s >= %s", $1, $3); }
    | expression LE_OP expression { $$ = (char *) malloc(50); sprintf($$, "%s <= %s", $1, $3); }
    | LPAREN expression RPAREN { $$ = (char *) malloc(50); sprintf($$, "(%s)", $2); }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
