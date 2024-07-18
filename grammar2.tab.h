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

#ifndef YY_YY_GRAMMAR2_TAB_H_INCLUDED
# define YY_YY_GRAMMAR2_TAB_H_INCLUDED
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    CONSTANT = 259,                /* CONSTANT  */
    STRING_LITERAL = 260,          /* STRING_LITERAL  */
    SIZEOF = 261,                  /* SIZEOF  */
    PTR_OP = 262,                  /* PTR_OP  */
    INC_OP = 263,                  /* INC_OP  */
    DEC_OP = 264,                  /* DEC_OP  */
    LEFT_OP = 265,                 /* LEFT_OP  */
    RIGHT_OP = 266,                /* RIGHT_OP  */
    LE_OP = 267,                   /* LE_OP  */
    GE_OP = 268,                   /* GE_OP  */
    EQ_OP = 269,                   /* EQ_OP  */
    NE_OP = 270,                   /* NE_OP  */
    AND_OP = 271,                  /* AND_OP  */
    OR_OP = 272,                   /* OR_OP  */
    MUL_ASSIGN = 273,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 274,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 275,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 276,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 277,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 278,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 279,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 280,              /* AND_ASSIGN  */
    XOR_ASSIGN = 281,              /* XOR_ASSIGN  */
    OR_ASSIGN = 282,               /* OR_ASSIGN  */
    TYPE_NAME = 283,               /* TYPE_NAME  */
    RSQBRAQ = 284,                 /* RSQBRAQ  */
    LSQBRAQ = 285,                 /* LSQBRAQ  */
    LPAREN = 286,                  /* LPAREN  */
    RPAREN = 287,                  /* RPAREN  */
    TYPEDEF = 288,                 /* TYPEDEF  */
    EXTERN = 289,                  /* EXTERN  */
    STATIC = 290,                  /* STATIC  */
    AUTO = 291,                    /* AUTO  */
    REGISTER = 292,                /* REGISTER  */
    CHAR = 293,                    /* CHAR  */
    SHORT = 294,                   /* SHORT  */
    INT = 295,                     /* INT  */
    LONG = 296,                    /* LONG  */
    SIGNED = 297,                  /* SIGNED  */
    UNSIGNED = 298,                /* UNSIGNED  */
    FLOAT = 299,                   /* FLOAT  */
    DOUBLE = 300,                  /* DOUBLE  */
    CONST = 301,                   /* CONST  */
    VOLATILE = 302,                /* VOLATILE  */
    VOID = 303,                    /* VOID  */
    STRUCT = 304,                  /* STRUCT  */
    UNION = 305,                   /* UNION  */
    ENUM = 306,                    /* ENUM  */
    ELLIPSIS = 307,                /* ELLIPSIS  */
    CASE = 308,                    /* CASE  */
    DEFAULT = 309,                 /* DEFAULT  */
    IF = 310,                      /* IF  */
    ELSE = 311,                    /* ELSE  */
    SWITCH = 312,                  /* SWITCH  */
    WHILE = 313,                   /* WHILE  */
    DO = 314,                      /* DO  */
    FOR = 315,                     /* FOR  */
    GOTO = 316,                    /* GOTO  */
    CONTINUE = 317,                /* CONTINUE  */
    BREAK = 318,                   /* BREAK  */
    RETURN = 319,                  /* RETURN  */
    YY_PARSE_translation_unit = 320, /* YY_PARSE_translation_unit  */
    YY_PARSE_program = 321         /* YY_PARSE_program  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "grammar2.y"

    char *str;
    int num;
    float num_dec;
    int data_type;
    char var_name[30];

#line 138 "grammar2.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);

// Return type when parsing one program.
typedef struct
{
  int yystatus;
  int yynerrs;
} yyparse_program_t;

// Parse one program.
yyparse_program_t yyparse_program (void);

// Return type when parsing one translation_unit.
typedef struct
{
  int yystatus;
  int yynerrs;
} yyparse_translation_unit_t;

// Parse one translation_unit.
yyparse_translation_unit_t yyparse_translation_unit (void);


#endif /* !YY_YY_GRAMMAR2_TAB_H_INCLUDED  */
