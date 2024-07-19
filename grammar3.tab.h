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

#ifndef YY_YY_GRAMMAR3_TAB_H_INCLUDED
# define YY_YY_GRAMMAR3_TAB_H_INCLUDED
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
    PTR_OP = 261,                  /* PTR_OP  */
    INC_OP = 262,                  /* INC_OP  */
    DEC_OP = 263,                  /* DEC_OP  */
    LEFT_OP = 264,                 /* LEFT_OP  */
    RIGHT_OP = 265,                /* RIGHT_OP  */
    LE_OP = 266,                   /* LE_OP  */
    GE_OP = 267,                   /* GE_OP  */
    EQ_OP = 268,                   /* EQ_OP  */
    NE_OP = 269,                   /* NE_OP  */
    AND_OP = 270,                  /* AND_OP  */
    OR_OP = 271,                   /* OR_OP  */
    MUL_ASSIGN = 272,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 273,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 274,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 275,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 276,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 277,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 278,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 279,              /* AND_ASSIGN  */
    XOR_ASSIGN = 280,              /* XOR_ASSIGN  */
    OR_ASSIGN = 281,               /* OR_ASSIGN  */
    TYPE_NAME = 282,               /* TYPE_NAME  */
    TYPEDEF = 283,                 /* TYPEDEF  */
    EXTERN = 284,                  /* EXTERN  */
    STATIC = 285,                  /* STATIC  */
    AUTO = 286,                    /* AUTO  */
    REGISTER = 287,                /* REGISTER  */
    CHAR = 288,                    /* CHAR  */
    SHORT = 289,                   /* SHORT  */
    INT = 290,                     /* INT  */
    LONG = 291,                    /* LONG  */
    SIGNED = 292,                  /* SIGNED  */
    UNSIGNED = 293,                /* UNSIGNED  */
    FLOAT = 294,                   /* FLOAT  */
    DOUBLE = 295,                  /* DOUBLE  */
    CONST = 296,                   /* CONST  */
    VOLATILE = 297,                /* VOLATILE  */
    VOID = 298,                    /* VOID  */
    STRUCT = 299,                  /* STRUCT  */
    UNION = 300,                   /* UNION  */
    ENUM = 301,                    /* ENUM  */
    ELLIPSIS = 302,                /* ELLIPSIS  */
    PRINTF = 303,                  /* PRINTF  */
    CASE = 304,                    /* CASE  */
    DEFAULT = 305,                 /* DEFAULT  */
    IF = 306,                      /* IF  */
    ELSE = 307,                    /* ELSE  */
    SWITCH = 308,                  /* SWITCH  */
    WHILE = 309,                   /* WHILE  */
    DO = 310,                      /* DO  */
    FOR = 311,                     /* FOR  */
    GOTO = 312,                    /* GOTO  */
    CONTINUE = 313,                /* CONTINUE  */
    BREAK = 314,                   /* BREAK  */
    RETURN = 315,                  /* RETURN  */
    YY_PARSE_translation_unit = 316, /* YY_PARSE_translation_unit  */
    YY_PARSE_program = 317         /* YY_PARSE_program  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "grammar3.y"

    char *str;
    int num;
    float num_dec;
    int data_type;
    char var_name[30];

#line 134 "grammar3.tab.h"

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


#endif /* !YY_YY_GRAMMAR3_TAB_H_INCLUDED  */
