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

%token IDENTIFIER NUMBER_LITERAL STRING_LITERAL QUOTED_CHAR NUMBER_LITERAL_DEC
%token LE_OP GE_OP EQ_OP NE_OP GT_OP LT_OP
%token AND_OP OR_OP LNOT
%token CHAR SHORT INT FLOAT DOUBLE CONST VOID
%token WHILE IF ELSE RETURN
%token ASSIGNMENT_OP SEMICOLON COMMA LPAREN RPAREN LBRACE RBRACE LSQBRAQ RSQBRAQ 
%token PLUS_OP MINUS_OP MULTIPLY_OP DIVIDE_OP MOD_OP
%token IF ELSE WHILE RETURN

%%
terminal
    : IDENTIFIER
    | NUMBER_LITERAL
    | STRING_LITERAL
    | '(' {append_in_jsFile("( ");} expression ')' {append_in_jsFile(" )");}
    ;

extended_expression
    : terminal
    | extended_expression '[' {append_in_jsFile("[ ");} expression ']' {append_in_jsFile(" ]");}
    | extended_expression '(' ')' {append_in_jsFile("()");}
    | extended_expression '(' {append_in_jsFile("( ");} argument_expression_list ')' {append_in_jsFile(" )");}
    ;

argument_expression_list
    : assignment_expression
    | argument_expression_list ',' {append_in_jsFile(", ");} assignment_expression
    ;

cast_expression
    : extended_expression
    | '(' {append_in_jsFile("( ");} type_name ')' {append_in_jsFile(" )");} cast_expression
    ;

multiplicative_expression
    : cast_expression
    | multiplicative_expression '*' {append_in_jsFile(" * ");} cast_expression
    | multiplicative_expression '/' {append_in_jsFile(" / ");} cast_expression
    | multiplicative_expression '%' {append_in_jsFile(" % ");} cast_expression
    ;

additive_expression
    : multiplicative_expression
    | additive_expression '+' {append_in_jsFile(" + ");} multiplicative_expression
    | additive_expression '-' {append_in_jsFile(" - ");} multiplicative_expression
    ;

relational_expression
    : additive_expression
    | relational_expression '<' {append_in_jsFile(" < ");} additive_expression
    | relational_expression '>' {append_in_jsFile(" > ");} additive_expression
    | relational_expression LE_OP {append_in_jsFile(" <= ");} additive_expression
    | relational_expression GE_OP {append_in_jsFile(" >= ");} additive_expression
    ;

equality_expression
    : relational_expression
    | equality_expression EQ_OP {append_in_jsFile(" == ");} relational_expression
    | equality_expression NE_OP {append_in_jsFile(" != ");} relational_expression
    ;

logical_and_expression
    : equality_expression
    | logical_and_expression AND_OP {append_in_jsFile(" && ");} equality_expression
    ;

logical_or_expression
    : logical_and_expression
    | logical_or_expression OR_OP {append_in_jsFile(" || ");} logical_and_expression
    ;

conditional_expression
    : logical_or_expression
    | logical_or_expression '?' {append_in_jsFile(" ? ");} expression ':' {append_in_jsFile(":");} conditional_expression
    ;

assignment_expression
    : conditional_expression
    | extended_expression '=' {append_in_jsFile(" = ");} assignment_expression
    ;

constant_expression
    : conditional_expression
    ;

expression
    : assignment_expression
    | expression ',' {append_in_jsFile(", ");} assignment_expression
    ;

declaration
    : declaration_specifiers init_declarator_list ';' {append_in_jsFile("\n");}
    ;

declaration_specifiers
    : type_specifier declaration_specifiers
    | type_specifier
    | CONST declaration_specifiers
    | CONST
    ;

init_declarator_list
    : init_declarator
    | init_declarator_list ',' {append_in_jsFile(", ");} init_declarator
    ;

init_declarator
    : declarator
    | declarator '=' {append_in_jsFile(" = ");} initializer
    ;

type_specifier
    : VOID
    | CHAR
    | INT
    | DOUBLE
    ;

declarator
    : IDENTIFIER
    | '(' {append_in_jsFile("(");} declarator ')' {append_in_jsFile(")");}
    | declarator '[' {append_in_jsFile("[");} constant_expression ']' {append_in_jsFile("]");}
    | declarator '[' ']' {append_in_jsFile("[]");}
    | declarator '[' {append_in_jsFile("[");} constant_expression ']' {append_in_jsFile("]");} '[' {append_in_jsFile("[");} constant_expression ']' {append_in_jsFile("]");}
    | declarator '[' {append_in_jsFile("[");} ']' {append_in_jsFile("]");} '[' {append_in_jsFile("[");} constant_expression ']' {append_in_jsFile("]");}
    | declarator '[' {append_in_jsFile("[");} ']' {append_in_jsFile("]");} '[' {append_in_jsFile("[");} ']' {append_in_jsFile("]");}
    | declarator '(' {append_in_jsFile("(");} parameter_list ')' {append_in_jsFile(")");}
    | declarator '(' {append_in_jsFile("(");} identifier_list ')' {append_in_jsFile(")");}
    | declarator '(' ')' {append_in_jsFile("()");}
    ;

parameter_list
    : parameter_declaration
    | parameter_list ',' {append_in_jsFile(", ");} parameter_declaration
    ;

parameter_declaration
    : declaration_specifiers declarator
    | declaration_specifiers
    ;

identifier_list
    : IDENTIFIER
    | identifier_list ',' {append_in_jsFile(", ");} IDENTIFIER
    ;

type_name
    : specifier_qualifier_list
    | specifier_qualifier_list abstract_declarator
    ;

specifier_qualifier_list
    : type_specifier specifier_qualifier_list
    | type_specifier
    | CONST specifier_qualifier_list
    | CONST
    ;

abstract_declarator
    : '(' {append_in_jsFile("(");} abstract_declarator ')' {append_in_jsFile(")");}
    | '[' ']' {append_in_jsFile("[]");}
    | '[' {append_in_jsFile("[");} constant_expression ']' {append_in_jsFile("]");}
    | abstract_declarator '[' ']' {append_in_jsFile("[]");}
    | abstract_declarator '[' {append_in_jsFile("[");} constant_expression ']' {append_in_jsFile("]");}
    | '(' ')' {append_in_jsFile("()");}
    | '(' {append_in_jsFile("(");} parameter_list ')' {append_in_jsFile(")");}
    | abstract_declarator '(' ')' {append_in_jsFile("()");}
    | abstract_declarator '(' {append_in_jsFile("(");} parameter_list ')' {append_in_jsFile(")");}
    ;

initializer
    : assignment_expression
    | '{' {append_in_jsFile("{");} initializer_list '}' {append_in_jsFile("}");}
    | '{' {append_in_jsFile("{");} initializer_list ',' '}' {append_in_jsFile(", }");}
    ;

initializer_list
    : initializer
    | initializer_list ',' {append_in_jsFile(", ");} initializer
    ;

statement
    : compound_statement
    | expression_statement
    | selection_statement
    | loop_statement
    | jump_statement
    ;

compound_statement
    : '{' '}' {append_in_jsFile("{}");}
    | '{' {append_in_jsFile("{ ");} statement_list '}' {append_in_jsFile(" }");}
    | '{' {append_in_jsFile("{ ");} declaration_list '}' {append_in_jsFile(" }");}
    | '{' {append_in_jsFile("{ ");} declaration_list statement_list '}' {append_in_jsFile(" }");}
    ;

declaration_list
    : declaration
    | declaration_list declaration
    ;

statement_list
    : statement
    | statement_list statement
    ;

expression_statement
    : ';' {append_in_jsFile("\n");}
    | expression ';' {append_in_jsFile("\n");}
    ;

selection_statement
    : IF '(' {append_in_jsFile("if(");} expression ')' {append_in_jsFile(")");} statement
    | IF '(' {append_in_jsFile("if(");} expression ')' {append_in_jsFile(")");} statement ELSE {append_in_jsFile("else");} statement
    ;

loop_statement
    : WHILE {append_in_jsFile("while( ");} '(' expression ')' {append_in_jsFile(") ");} statement
    ;

jump_statement
    : RETURN ';' {append_in_jsFile("return");}
    | RETURN {append_in_jsFile("return ");} expression ';' 
    ;

translation_unit
    : external_declaration
    | translation_unit external_declaration
    ;

external_declaration
    : function_definition
    | declaration
    ;

function_definition
    : declaration_specifiers declarator declaration_list compound_statement
    | declaration_specifiers declarator compound_statement
    | declarator declaration_list compound_statement
    | declarator compound_statement
    ;

program
    : { printf("Comenzando a traducir a JavaScript\n"); create_output_file(); } translation_unit { close_output_file(); }
    ;
%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la línea %d\n", message, yylineno);
    return -1;
}
