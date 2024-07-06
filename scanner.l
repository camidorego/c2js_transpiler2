%{
// #include "tokens.h"
#include "parser.tab.h" // Incluye el archivo generado por Bison
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Declarar yylval externamente */
extern YYSTYPE yylval;
%}

%option noyywrap
%option yylineno

%%
"int"   { yylval.data_type=0; return KEYWORD_INT; }
"char"  { yylval.data_type=1; return KEYWORD_CHAR; }
"float" { yylval.data_type=2; return KEYWORD_FLOAT; }
"double" { yylval.data_type=3; return KEYWORD_DOUBLE; }

"="     { return ASSIGNMENT_OP; }
";"     { return SEMICOLON; }
","     { return COMMA; }
"("     { return LPAREN; }
")"     { return RPAREN; }
"{"     { return LBRACE; }
"}"     { return RBRACE; }
"["     { return LSQBRAQ; }
"]"     { return RSQBRAQ; }

"+"     { return PLUS_OP; }
"-"     { return MINUS_OP; }
"*"     { return MULTIPLY_OP; }
"/"     { return DIVIDE_OP; }

[a-zA-Z_][a-zA-Z0-9_]* { yylval.str = strdup(yytext); return IDENTIFIER; }
[0-9]+  { yylval.num = atoi(yytext); return NUMBER_LITERAL; }
[ \t\n]+        ;  // Ignora espacios en blanco
.       { return yytext[0]; }  // Cualquier otro carácter

%%

let function = hola()

