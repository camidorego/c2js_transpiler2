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

%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
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

postfix_expression
	: primary_expression 
	| postfix_expression '[' {append_in_jsFile("[");} expression ']' {append_in_jsFile("]");}
	| postfix_expression '(' {append_in_jsFile("(");} argument_expression_list ')' {append_in_jsFile(")");}
	| postfix_expression '.' {append_in_jsFile(".");} IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' {append_in_jsFile(", ");} assignment_expression
	|
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&' {append_in_jsFile("&");}
	| '*' {append_in_jsFile("*");}
	| '+' {append_in_jsFile("+");}
	| '-' {append_in_jsFile("-");}
	| '~' {append_in_jsFile("~");}
	| '!' {append_in_jsFile("!");}
	;

cast_expression
	: unary_expression
	| '(' {append_in_jsFile("(");} type_name ')' {append_in_jsFile(")");} cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' {append_in_jsFile("*");} cast_expression
	| multiplicative_expression '/' {append_in_jsFile("/");} cast_expression
	| multiplicative_expression '%' {append_in_jsFile("%");} cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' {append_in_jsFile("+");} multiplicative_expression
	| additive_expression '-' {append_in_jsFile("-");} multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' {append_in_jsFile("<");} shift_expression
	| relational_expression '>' {append_in_jsFile(">");} shift_expression
	| relational_expression LE_OP {append_in_jsFile("<=");} shift_expression
	| relational_expression GE_OP {append_in_jsFile(">=");} shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP {append_in_jsFile("==");} relational_expression
	| equality_expression NE_OP {append_in_jsFile("!=");} relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' {append_in_jsFile("&");} equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' {append_in_jsFile("|");} exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP {append_in_jsFile("&&");} inclusive_or_expression
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
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '=' {append_in_jsFile("=");}
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
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
	: type_qualifier declaration_specifiers init_declarator_list
	| declaration_specifiers init_declarator_list ';' {append_in_jsFile("\n");}
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier 
	| type_qualifier declaration_specifiers
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

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR 
	| SHORT 
	| INT 
	| LONG 
	| FLOAT 
	| DOUBLE 
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST {append_in_jsFile("const ");}
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator {append_in_jsFile("let ");}
	;

direct_declarator
	: IDENTIFIER
	| '(' {append_in_jsFile("(");} declarator ')' {append_in_jsFile(")");}
	| direct_declarator '[' {append_in_jsFile("[");} constant_expression ']' {append_in_jsFile("]");}
	| direct_declarator '(' {append_in_jsFile("(");} parameter_type_list ')' {append_in_jsFile(")");}
	| direct_declarator '(' {append_in_jsFile("(");} identifier_list ')' {append_in_jsFile(")");}
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	|
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
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
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' {append_in_jsFile("{ \n");} compound_statement_helper '}' {append_in_jsFile("\n }");}
	;

compound_statement_helper
    : statement_list
    | declaration_list
    | declaration_list statement_list
    |
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
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' {append_in_jsFile("if(");} expression ')' {append_in_jsFile(")");} statement else_statement
	| SWITCH '(' expression ')' statement
	;

else_statement
    : ELSE {append_in_jsFile("else");} statement
    |
    ;

iteration_statement
	: WHILE '(' {append_in_jsFile("while(");} expression ')' {append_in_jsFile(")");} statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';' {append_in_jsFile("\nreturn \n");}
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
