%{
#include <stdio.h>
#include "grammar4.tab.h"
%}

L	        ([_A-Za-z])
D		    ([0-9])
integer		({D}+)
identifier	({L}({L}|{D})*)
blank   	([ \f\r\n\t\v ])
string      ('(\\.|[^\\'])+'|\"(\\.|[^\\"])*\")

%%
#include([^\n])*                    {}

"for"                               {return(FOR);}
"while"                             {return(WHILE);}
"break"                             {return(BREAK);}
"continue"                          {return(CONTINUE);}
"if"                                {return(IF);}
"else"                              {return(ELSE);}

"int"                               {yylval.data_type=0; return(INT);}
"char"                              {yylval.data_type=1; return(CHAR);}
"float"                            {yylval.data_type=2; return(FLOAT);}
"const"								{return(CONST);}

"return"		                    {return(RETURN);}
"printf"                            {return(PRINTF);}
"strlen"                            {return(STRLEN);}

{identifier}                        {yylval.str=strdup(yytext);return(IDENTIFIER);}
{string}                            {yylval.str=strdup(yytext);return(STRING);}
{integer}                           {yylval.num=atoi(yytext);return(INTEGER);}

{D}*"."{D}+                         { yylval.num_dec = atof(yytext); return(FLOAT);}
{D}+"."{D}*                         { yylval.num_dec = atof(yytext); return(FLOAT);}

">="                                {return(GE_OP);}
"<="			                    {return(LE_OP);}
"=="			                    {return(EQ_OP);}
"!="			                    {return(NE_OP);}
"&&"			                    {return(AND_OP);}
"||"			                    {return(OR_OP);}
"++"			                    {return(INC_OP);}
"--"			                    {return(DEC_OP);}

"-"                                 {return('-');}
"+"                                 {return('+');}
"*"                                 {return('*');}
"/"                                 {return('/');}
"%"                                 {return('%');}
"<"                                 {return('<');}
"."                                 {return('.');}
">"                                 {return('>');}
","                                 {return(',');}
":"                                 {return(':');}
";"                                 {return(';');}
"="                                 {return('=');}
"("                                 {return('(');}
")"                                 {return(')');}
"{"     		                    {return('{');}
"}"      		                    {return('}');}
"["      		                    {return('[');}
"]"      		                    {return(']');}
"!"                                 {return('!');}
{blank}		                        {}

.			                        {}

%%

int yywrap()
{
	return 1;
}