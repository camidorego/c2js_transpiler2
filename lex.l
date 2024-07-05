
%{
/* Sección de declaraciones de C */
%}

/* Definiciones de patrones y opciones */
%option noyywrap

%%
/* Sección de reglas */

"int"   { return KEYWORD_INT; }
"const" { return KEYWORD_CONST; }
"char"  { return KEYWORD_CHAR; }
"float" { return KEYWORD_FLOAT; }
"double"    { return KEYWORD_DOUBLE}
"for"   { return KEYWORD_FOR; }
"while" { return KEYWORD_WHILE; }
"if"    { return KEYWORD_IF; }
"else"  { return KEYWORD_ELSE; }
"function"  { return KEYWORD_FUNCTION; }
"return"    { return KEYWORD_RETURN; }
[a-zA-Z_][a-zA-Z0-9_]* { yylval.str = strdup(yytext); return IDENTIFIER; }
[0-9]+  { yylval.num = atoi(yytext); return NUMBER_LITERAL; }
"="     { return ASSIGNMENT_OP; }
";"     { return SEMICOLON; }
","     { return COMMA; }
"("     { return LPAREN; }
")"     { return RPAREN; }
"{"     { return LBRACE; }
"}"     { return RBRACE; }
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
[ \t\n]+        ;  // Ignora espacios en blanco
.       { return yytext[0]; }  // Cualquier otro carácter

%%

/* Sección de código C auxiliar */
