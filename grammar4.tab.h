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

#ifndef YY_YY_GRAMMAR4_TAB_H_INCLUDED
# define YY_YY_GRAMMAR4_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    INTEGER = 258,                 /* INTEGER  */
    DOUBLE_NUM = 259,              /* DOUBLE_NUM  */
    INT = 260,                     /* INT  */
    CHAR = 261,                    /* CHAR  */
    DOUBLE = 262,                  /* DOUBLE  */
    IDENTIFIER = 263,              /* IDENTIFIER  */
    STRING = 264,                  /* STRING  */
    CONST = 265,                   /* CONST  */
    INC_OP = 266,                  /* INC_OP  */
    DEC_OP = 267,                  /* DEC_OP  */
    INC_OP_LEFT = 268,             /* INC_OP_LEFT  */
    INC_OP_RIGHT = 269,            /* INC_OP_RIGHT  */
    DEC_OP_LEFT = 270,             /* DEC_OP_LEFT  */
    DEC_OP_RIGHT = 271,            /* DEC_OP_RIGHT  */
    GE_OP = 272,                   /* GE_OP  */
    LE_OP = 273,                   /* LE_OP  */
    EQ_OP = 274,                   /* EQ_OP  */
    NE_OP = 275,                   /* NE_OP  */
    AND_OP = 276,                  /* AND_OP  */
    OR_OP = 277,                   /* OR_OP  */
    DECLARE = 278,                 /* DECLARE  */
    DECLARE_ARRAY = 279,           /* DECLARE_ARRAY  */
    ARRAY = 280,                   /* ARRAY  */
    FOR = 281,                     /* FOR  */
    WHILE = 282,                   /* WHILE  */
    BREAK = 283,                   /* BREAK  */
    CONTINUE = 284,                /* CONTINUE  */
    IF = 285,                      /* IF  */
    ELSE = 286,                    /* ELSE  */
    RETURN = 287,                  /* RETURN  */
    PRINTF = 288,                  /* PRINTF  */
    STRLEN = 289                   /* STRLEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "grammar4.y"

    char *str;
    int num;
    float num_dec;
    int data_type;
    char var_name[30];

#line 106 "grammar4.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_GRAMMAR4_TAB_H_INCLUDED  */
