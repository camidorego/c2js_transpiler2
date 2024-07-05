
%{
/* Sección de declaraciones de C */
%}

/* Definiciones de patrones y opciones */
%option noyywrap

/* Sección de reglas */
%%
"main"      {return MAIN;}
"void"      {return VOID;}
"printf"    {return PRINTF;}
"const"     { return KEYWORD_CONST; }

"int"   { yylval.data_type=0; return KEYWORD_INT; }
"char"  { yylval.data_type=1; return KEYWORD_CHAR; }
"float" { yylval.data_type=2; return KEYWORD_FLOAT; }
"double"    { yylval.data_type=3; return KEYWORD_DOUBLE}

"for"   { return KEYWORD_FOR; }
"while" { return KEYWORD_WHILE; }

"if"    { return KEYWORD_IF; }
"else"  { return KEYWORD_ELSE; }

"function"  { return KEYWORD_FUNCTION; }
"return"    { return KEYWORD_RETURN; }

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

"=="    { return EQ_OP; }
"!="    { return NEQ_OP; }
">"     { return GT_OP; }
"<"     { return LT_OP; }
">="    { return GE_OP; }
"<="    { return LE_OP; }

"&&"    { return LAND; }
"||"    { return LOR; }
"!"     { return LNOT; }

[a-zA-Z_][a-zA-Z0-9_]* { yylval.str = strdup(yytext); return IDENTIFIER; }
[0-9]+  { yylval.num = atoi(yytext); return NUMBER_LITERAL; }
[ \t\n]+        ;  // Ignora espacios en blanco
.       { return yytext[0]; }  // Cualquier otro carácter

%%

/* Sección de código C auxiliar */

int yywrap() {
    return 1;  // Flex necesita esta función para indicar el fin de entrada
}
