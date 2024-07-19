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
%token <num> CONSTANT
%token <str> STRING_LITERAL

%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS
%token PRINTF

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit
%%

primary_expression
	: IDENTIFIER {append_in_jsFile(yylval.str);}
	| CONSTANT 
	| STRING_LITERAL {append_in_jsFile(yylval.var_name);}
	| '(' {append_in_jsFile("(");} expression ')' {append_in_jsFile(")");}
	;

postfix_expression:
    primary_expression
    | postfix_expression '[' {append_in_jsFile("[");} expression ']' {append_in_jsFile("]");}
	| postfix_expression '(' {append_in_jsFile("(");} argument_expression_list ')' {append_in_jsFile(")");}
    ;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' {append_in_jsFile(", ");} assignment_expression
	|
	;

multiplicative_expression
	: postfix_expression
	| multiplicative_expression '*' {append_in_jsFile("*");} postfix_expression
	| multiplicative_expression '/' {append_in_jsFile("/");} postfix_expression
	| multiplicative_expression '%' {append_in_jsFile("%");} postfix_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' {append_in_jsFile("+");} multiplicative_expression
	| additive_expression '-' {append_in_jsFile("-");} multiplicative_expression
	;

relational_expression
	: additive_expression
	| relational_expression '<' {append_in_jsFile("<");} additive_expression
	| relational_expression '>' {append_in_jsFile(">");} additive_expression
	| relational_expression LE_OP {append_in_jsFile("<=");} additive_expression
	| relational_expression GE_OP {append_in_jsFile(">=");} additive_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP {append_in_jsFile("==");} relational_expression
	| equality_expression NE_OP {append_in_jsFile("!=");} relational_expression
	;

logical_and_expression
	: equality_expression
	| logical_and_expression AND_OP {append_in_jsFile("&&");} equality_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression  {append_in_jsFile("||");} logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| postfix_expression '=' {append_in_jsFile("=");} assignment_expression
	;

expression
	: assignment_expression
	| expression ',' {append_in_jsFile(", ");} assignment_expression
	| PRINTF {append_in_jsFile("console.log");} postfix_expression
	;

constant_expression
	: conditional_expression
	|
	;

declaration
	: CONST declaration_specifiers init_declarator_list
	| declaration_specifiers init_declarator_list ';' {append_in_jsFile("\n");}
	;

declaration_specifiers
	: type_specifier {append_in_jsFile("let ");} declaration_specifiers
	| CONST declaration_specifiers
    |
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' {append_in_jsFile(", ");} init_declarator
	|
	;

init_declarator
	: declarator
	| declarator '=' {append_in_jsFile("=");} initializer
	;

type_specifier
	: VOID
	| CHAR 
	| INT 
	| FLOAT 
	| DOUBLE
	;

declarator
	: IDENTIFIER
	| '(' {append_in_jsFile("(");} declarator ')' {append_in_jsFile(")");}
	| declarator '[' {append_in_jsFile("[");} constant_expression ']' {append_in_jsFile("]");}
	| declarator '(' {append_in_jsFile("(");} parameter_list ')' {append_in_jsFile(")");}
	;


parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
    | identifier_list
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

initializer
	: assignment_expression
	| '{' {append_in_jsFile("{ \n");} initializer_list '}' {append_in_jsFile("\n }");}
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	|
	;

statement
	: IDENTIFIER ':' statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

compound_statement
	: '{' {append_in_jsFile("{ \n");} compound_statement_helper '}' {append_in_jsFile("\n }");}
	;

compound_statement_helper
    : statement_list
    | declaration_list
    | declaration_list statement_list
    
    ;

declaration_list
	: declaration
	| declaration_list declaration
    |
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' {append_in_jsFile("\nif(");} expression ')' {append_in_jsFile(")");} statement else_statement
	;

else_statement
    : ELSE {append_in_jsFile("else");} statement
    |
    ;

iteration_statement
	: WHILE '(' {append_in_jsFile("while(");} expression ')' {append_in_jsFile(")");} statement
	;

jump_statement
	: RETURN ';' {append_in_jsFile("\nreturn \n");}
	| RETURN {append_in_jsFile("\nreturn ");} expression ';' {append_in_jsFile("\n");}
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
    : declaration_specifiers IDENTIFIER '(' {append_in_jsFile("= function (");}  parameter_list ')'{ append_in_jsFile(") {\n");} declaration_list compound_statement {append_in_jsFile("\n } \n");}
	| IDENTIFIER '(' {append_in_jsFile("= function (){ \n");} declaration_list compound_statement {append_in_jsFile("\n } \n");}
    | declaration_specifiers '(' {append_in_jsFile("= function (");}  parameter_list ')'{ append_in_jsFile(") {\n");} declaration_list compound_statement {append_in_jsFile("\n } \n");}
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
