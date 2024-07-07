%{

#include "parser.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

%}

%option noyywrap
%option yylineno


%%
"int"   { yylval.data_type = 0; return KEYWORD_INT; }
"char"  { yylval.data_type = 1; return KEYWORD_CHAR; }
"float" { yylval.data_type = 2; return KEYWORD_FLOAT; }
"double" { yylval.data_type = 3; return KEYWORD_DOUBLE; }

"="     { return ASSIGNMENT_OP; }
";"     { return SEMICOLON; }

\"[^"]*\"            {yylval.str = strdup(yytext); return QUOTED_STRING;}
'[^']*'              {yylval.str = strdup(yytext); return QUOTED_CHAR;}

[a-zA-Z_][a-zA-Z0-9_]* { yylval.str = strdup(yytext); return IDENTIFIER; }
[0-9]+"."[0-9]+ { yylval.num_dec = strtod(yytext, NULL); return NUMBER_LITERAL_DEC; }
[0-9]+          { yylval.num = atoi(yytext); return NUMBER_LITERAL; }

[ \t\n]+        ;  // Ignora espacios en blanco
.       { return yytext[0]; }  // Cualquier otro carácter

%%