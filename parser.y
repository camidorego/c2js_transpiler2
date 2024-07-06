%{
// #include "tokens.h"
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int yylex(void);
int yyerror(char *message);
extern int yylineno;

typedef struct {
    char str;
    int num;
    int data_type;
} YYSTYPE;

#define YYSTYPE YYSTYPE
%}

%start program
%union {
    char *str;
    int num;
    int data_type;
}

%token <str> IDENTIFIER
%token <num> NUMBER_LITERAL
%token <data_type> KEYWORD_INT KEYWORD_CONST KEYWORD_CHAR KEYWORD_FLOAT KEYWORD_DOUBLE 
%token ASSIGNMENT_OP SEMICOLON COMMA LPAREN RPAREN LBRACE RBRACE LSQBRAQ RSQBRAQ
%token PLUS_OP MINUS_OP MULTIPLY_OP DIVIDE_OP EQ_OP NEQ_OP GT_OP LT_OP GE_OP LE_OP
%token LAND LOR LNOT
%token MAIN VOID PRINTF

%type <str> program statements statement variable_declaration constant_declaration assignment
%type <str> expression
%type <data_type> type

%left PLUS_OP MINUS_OP
%left MULTIPLY_OP DIVIDE_OP
%left EQ_OP NEQ_OP GT_OP LT_OP GE_OP LE_OP

%%

program:
    { printf("Comenzando a traducir a JavaScript\n"); create_output_file(); }
    statements
    { close_output_file(); }
    ;

statements:
    statement {printf("Entro en statement")}
    | statements statement
    ;

statement:
    variable_declaration SEMICOLON { printf("Reconocida una declaración\n"); write_declaration($1); free($1); }
    | constant_declaration SEMICOLON { printf("Reconocida una declaración de constante\n"); write_declaration($1); free($1); }
    | assignment SEMICOLON { printf("Reconocida una asignación\n"); write_declaration($1); free($1); }
    ;

variable_declaration:
    type IDENTIFIER { 
        append_in_jsFile("let ");append_in_jsFile( yylval.str);
    }
    | type IDENTIFIER ASSIGNMENT_OP expression { 
        append_in_jsFile("let ");append_in_jsFile( yylval.str);append_in_jsFile(" = ");
    }
    ;

constant_declaration:
    KEYWORD_CONST IDENTIFIER ASSIGNMENT_OP expression { 
        $$ = (char *) malloc(50); 
        sprintf($$, "const %s = %s", $2, $4); 
        free($4);
    }
    ;

assignment:
    IDENTIFIER ASSIGNMENT_OP expression { 
        $$ = (char *) malloc(50); 
        sprintf($$, "%s = %s", $1, $3); 
        free($3);
    }
    ;

type: 
    KEYWORD_INT 		{ printf("int");  }
	| KEYWORD_CHAR  	{ printf("char");	}
	| KEYWORD_FLOAT 	{ printf("float");	}
	| KEYWORD_DOUBLE 	{ printf("double");	}
	;

expression:
    IDENTIFIER { $$ = strdup($1); }
    | NUMBER_LITERAL {append_in_jsFile($1)}
    | expression PLUS_OP expression { 
        $$ = (char *) malloc(50); 
        sprintf($$, "%s + %s", $1, $3); 
        free($1); 
        free($3); 
    }
    | expression MINUS_OP expression { 
        $$ = (char *) malloc(50); 
        sprintf($$, "%s - %s", $1, $3); 
        free($1); 
        free($3); 
    }
    | expression MULTIPLY_OP expression { 
        $$ = (char *) malloc(50); 
        sprintf($$, "%s * %s", $1, $3); 
        free($1); 
        free($3); 
    }
    | expression DIVIDE_OP expression { 
        $$ = (char *) malloc(50); 
        sprintf($$, "%s / %s", $1, $3); 
        free($1); 
        free($3); 
    }
    | LPAREN expression RPAREN { 
        $$ = (char *) malloc(50); 
        sprintf($$, "(%s)", $2); 
        free($2); 
    }
    ;

%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la linea %d\n", message, yylineno);
    return -1;
}
