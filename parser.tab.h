/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    NUMBER_LITERAL = 259,          /* NUMBER_LITERAL  */
    KEYWORD_INT = 260,             /* KEYWORD_INT  */
    KEYWORD_CONST = 261,           /* KEYWORD_CONST  */
    KEYWORD_CHAR = 262,            /* KEYWORD_CHAR  */
    KEYWORD_FLOAT = 263,           /* KEYWORD_FLOAT  */
    KEYWORD_DOUBLE = 264,          /* KEYWORD_DOUBLE  */
    ASSIGNMENT_OP = 265,           /* ASSIGNMENT_OP  */
    SEMICOLON = 266,               /* SEMICOLON  */
    COMMA = 267,                   /* COMMA  */
    LPAREN = 268,                  /* LPAREN  */
    RPAREN = 269,                  /* RPAREN  */
    LBRACE = 270,                  /* LBRACE  */
    RBRACE = 271,                  /* RBRACE  */
    LSQBRAQ = 272,                 /* LSQBRAQ  */
    RSQBRAQ = 273,                 /* RSQBRAQ  */
    PLUS_OP = 274,                 /* PLUS_OP  */
    MINUS_OP = 275,                /* MINUS_OP  */
    MULTIPLY_OP = 276,             /* MULTIPLY_OP  */
    DIVIDE_OP = 277,               /* DIVIDE_OP  */
    EQ_OP = 278,                   /* EQ_OP  */
    NEQ_OP = 279,                  /* NEQ_OP  */
    GT_OP = 280,                   /* GT_OP  */
    LT_OP = 281,                   /* LT_OP  */
    GE_OP = 282,                   /* GE_OP  */
    LE_OP = 283,                   /* LE_OP  */
    LAND = 284,                    /* LAND  */
    LOR = 285,                     /* LOR  */
    LNOT = 286,                    /* LNOT  */
    MAIN = 287,                    /* MAIN  */
    VOID = 288,                    /* VOID  */
    PRINTF = 289                   /* PRINTF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "parser.y"

    char *str;
    int num;
    int data_type;

#line 104 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
