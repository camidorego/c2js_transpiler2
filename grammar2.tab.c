/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "grammar2.y"

#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
int yyerror(char *message);
extern int yylineno;


#line 83 "grammar2.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "grammar2.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 4,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 6,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 7,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 8,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 9,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 10,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 11,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 12,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 13,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 14,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 15,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 16,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 17,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 18,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 19,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 20,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 21,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 22,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 23,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 24,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 25,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 26,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 27,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 28,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 29,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 30,                    /* EXTERN  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_AUTO = 32,                      /* AUTO  */
  YYSYMBOL_REGISTER = 33,                  /* REGISTER  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_SHORT = 35,                     /* SHORT  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_LONG = 37,                      /* LONG  */
  YYSYMBOL_SIGNED = 38,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 39,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 40,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 41,                    /* DOUBLE  */
  YYSYMBOL_CONST = 42,                     /* CONST  */
  YYSYMBOL_VOLATILE = 43,                  /* VOLATILE  */
  YYSYMBOL_VOID = 44,                      /* VOID  */
  YYSYMBOL_STRUCT = 45,                    /* STRUCT  */
  YYSYMBOL_UNION = 46,                     /* UNION  */
  YYSYMBOL_ENUM = 47,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 48,                  /* ELLIPSIS  */
  YYSYMBOL_PRINTF = 49,                    /* PRINTF  */
  YYSYMBOL_CASE = 50,                      /* CASE  */
  YYSYMBOL_DEFAULT = 51,                   /* DEFAULT  */
  YYSYMBOL_IF = 52,                        /* IF  */
  YYSYMBOL_ELSE = 53,                      /* ELSE  */
  YYSYMBOL_SWITCH = 54,                    /* SWITCH  */
  YYSYMBOL_WHILE = 55,                     /* WHILE  */
  YYSYMBOL_DO = 56,                        /* DO  */
  YYSYMBOL_FOR = 57,                       /* FOR  */
  YYSYMBOL_GOTO = 58,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 59,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 60,                     /* BREAK  */
  YYSYMBOL_RETURN = 61,                    /* RETURN  */
  YYSYMBOL_62_ = 62,                       /* '('  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_64_ = 64,                       /* '['  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* '.'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* '&'  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '+'  */
  YYSYMBOL_71_ = 71,                       /* '-'  */
  YYSYMBOL_72_ = 72,                       /* '~'  */
  YYSYMBOL_73_ = 73,                       /* '!'  */
  YYSYMBOL_74_ = 74,                       /* '/'  */
  YYSYMBOL_75_ = 75,                       /* '%'  */
  YYSYMBOL_76_ = 76,                       /* '<'  */
  YYSYMBOL_77_ = 77,                       /* '>'  */
  YYSYMBOL_78_ = 78,                       /* '^'  */
  YYSYMBOL_79_ = 79,                       /* '|'  */
  YYSYMBOL_80_ = 80,                       /* '?'  */
  YYSYMBOL_81_ = 81,                       /* ':'  */
  YYSYMBOL_82_ = 82,                       /* '='  */
  YYSYMBOL_83_ = 83,                       /* ';'  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_YY_PARSE_translation_unit = 86, /* YY_PARSE_translation_unit  */
  YYSYMBOL_YY_PARSE_program = 87,          /* YY_PARSE_program  */
  YYSYMBOL_YYACCEPT = 88,                  /* $accept  */
  YYSYMBOL_primary_expression = 89,        /* primary_expression  */
  YYSYMBOL_90_1 = 90,                      /* $@1  */
  YYSYMBOL_postfix_expression = 91,        /* postfix_expression  */
  YYSYMBOL_92_2 = 92,                      /* $@2  */
  YYSYMBOL_93_3 = 93,                      /* $@3  */
  YYSYMBOL_94_4 = 94,                      /* $@4  */
  YYSYMBOL_argument_expression_list = 95,  /* argument_expression_list  */
  YYSYMBOL_96_5 = 96,                      /* $@5  */
  YYSYMBOL_unary_expression = 97,          /* unary_expression  */
  YYSYMBOL_unary_operator = 98,            /* unary_operator  */
  YYSYMBOL_cast_expression = 99,           /* cast_expression  */
  YYSYMBOL_100_6 = 100,                    /* $@6  */
  YYSYMBOL_101_7 = 101,                    /* $@7  */
  YYSYMBOL_multiplicative_expression = 102, /* multiplicative_expression  */
  YYSYMBOL_103_8 = 103,                    /* $@8  */
  YYSYMBOL_104_9 = 104,                    /* $@9  */
  YYSYMBOL_105_10 = 105,                   /* $@10  */
  YYSYMBOL_additive_expression = 106,      /* additive_expression  */
  YYSYMBOL_107_11 = 107,                   /* $@11  */
  YYSYMBOL_108_12 = 108,                   /* $@12  */
  YYSYMBOL_shift_expression = 109,         /* shift_expression  */
  YYSYMBOL_relational_expression = 110,    /* relational_expression  */
  YYSYMBOL_111_13 = 111,                   /* $@13  */
  YYSYMBOL_112_14 = 112,                   /* $@14  */
  YYSYMBOL_113_15 = 113,                   /* $@15  */
  YYSYMBOL_114_16 = 114,                   /* $@16  */
  YYSYMBOL_equality_expression = 115,      /* equality_expression  */
  YYSYMBOL_116_17 = 116,                   /* $@17  */
  YYSYMBOL_117_18 = 117,                   /* $@18  */
  YYSYMBOL_and_expression = 118,           /* and_expression  */
  YYSYMBOL_119_19 = 119,                   /* $@19  */
  YYSYMBOL_exclusive_or_expression = 120,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 121,  /* inclusive_or_expression  */
  YYSYMBOL_122_20 = 122,                   /* $@20  */
  YYSYMBOL_logical_and_expression = 123,   /* logical_and_expression  */
  YYSYMBOL_124_21 = 124,                   /* $@21  */
  YYSYMBOL_logical_or_expression = 125,    /* logical_or_expression  */
  YYSYMBOL_126_22 = 126,                   /* $@22  */
  YYSYMBOL_conditional_expression = 127,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 128,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 129,      /* assignment_operator  */
  YYSYMBOL_expression = 130,               /* expression  */
  YYSYMBOL_131_23 = 131,                   /* $@23  */
  YYSYMBOL_132_24 = 132,                   /* $@24  */
  YYSYMBOL_constant_expression = 133,      /* constant_expression  */
  YYSYMBOL_declaration = 134,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 135,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 136,     /* init_declarator_list  */
  YYSYMBOL_137_25 = 137,                   /* $@25  */
  YYSYMBOL_init_declarator = 138,          /* init_declarator  */
  YYSYMBOL_139_26 = 139,                   /* $@26  */
  YYSYMBOL_storage_class_specifier = 140,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 141,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 142, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 143,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 144,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 145,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 146, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 147,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 148,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 149,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 150,          /* enumerator_list  */
  YYSYMBOL_enumerator = 151,               /* enumerator  */
  YYSYMBOL_type_qualifier = 152,           /* type_qualifier  */
  YYSYMBOL_declarator = 153,               /* declarator  */
  YYSYMBOL_direct_declarator = 154,        /* direct_declarator  */
  YYSYMBOL_155_27 = 155,                   /* $@27  */
  YYSYMBOL_156_28 = 156,                   /* $@28  */
  YYSYMBOL_157_29 = 157,                   /* $@29  */
  YYSYMBOL_158_30 = 158,                   /* $@30  */
  YYSYMBOL_pointer = 159,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 160,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 161,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 162,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 163,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 164,          /* identifier_list  */
  YYSYMBOL_type_name = 165,                /* type_name  */
  YYSYMBOL_abstract_declarator = 166,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 167, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 168,              /* initializer  */
  YYSYMBOL_169_31 = 169,                   /* $@31  */
  YYSYMBOL_initializer_list = 170,         /* initializer_list  */
  YYSYMBOL_statement = 171,                /* statement  */
  YYSYMBOL_labeled_statement = 172,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 173,       /* compound_statement  */
  YYSYMBOL_174_32 = 174,                   /* $@32  */
  YYSYMBOL_compound_statement_helper = 175, /* compound_statement_helper  */
  YYSYMBOL_declaration_list = 176,         /* declaration_list  */
  YYSYMBOL_statement_list = 177,           /* statement_list  */
  YYSYMBOL_expression_statement = 178,     /* expression_statement  */
  YYSYMBOL_selection_statement = 179,      /* selection_statement  */
  YYSYMBOL_180_33 = 180,                   /* $@33  */
  YYSYMBOL_181_34 = 181,                   /* $@34  */
  YYSYMBOL_else_statement = 182,           /* else_statement  */
  YYSYMBOL_183_35 = 183,                   /* $@35  */
  YYSYMBOL_iteration_statement = 184,      /* iteration_statement  */
  YYSYMBOL_185_36 = 185,                   /* $@36  */
  YYSYMBOL_186_37 = 186,                   /* $@37  */
  YYSYMBOL_jump_statement = 187,           /* jump_statement  */
  YYSYMBOL_188_38 = 188,                   /* $@38  */
  YYSYMBOL_translation_unit = 189,         /* translation_unit  */
  YYSYMBOL_external_declaration = 190,     /* external_declaration  */
  YYSYMBOL_function_definition = 191,      /* function_definition  */
  YYSYMBOL_program = 192,                  /* program  */
  YYSYMBOL_193_39 = 193                    /* $@39  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1028

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  257
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  392

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,     2,     2,     2,    75,    68,     2,
      62,    63,    69,    70,    67,    71,    66,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    83,
      76,    82,    77,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    79,    85,    72,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    86,    87
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    39,    40,    41,    42,    42,    46,    47,
      47,    48,    48,    49,    49,    50,    51,    52,    56,    57,
      57,    58,    62,    63,    64,    65,    66,    67,    71,    72,
      73,    74,    75,    76,    80,    81,    81,    81,    85,    86,
      86,    87,    87,    88,    88,    92,    93,    93,    94,    94,
      98,    99,   100,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   112,   113,   113,   114,   114,   118,   119,   119,
     123,   124,   128,   129,   129,   133,   134,   134,   138,   139,
     139,   143,   144,   148,   149,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   167,   168,   168,   169,
     169,   173,   174,   178,   179,   183,   184,   185,   186,   187,
     188,   192,   193,   193,   194,   198,   199,   199,   203,   204,
     205,   206,   207,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   226,   227,   228,   232,   233,
     237,   238,   242,   246,   247,   248,   249,   253,   254,   258,
     259,   260,   264,   265,   266,   270,   271,   275,   276,   280,
     281,   285,   286,   290,   291,   291,   292,   292,   293,   293,
     294,   294,   298,   299,   300,   301,   305,   306,   311,   312,
     316,   317,   321,   322,   323,   327,   328,   329,   333,   334,
     338,   339,   340,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   356,   357,   357,   361,   362,   363,   367,   368,
     369,   370,   371,   372,   376,   377,   378,   382,   382,   386,
     387,   388,   389,   393,   394,   398,   399,   403,   404,   408,
     408,   408,   409,   413,   413,   414,   418,   418,   418,   419,
     420,   421,   425,   426,   427,   428,   429,   429,   433,   434,
     438,   439,   443,   444,   445,   446,   451,   451
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "PRINTF", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('",
  "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "'{'", "'}'", "YY_PARSE_translation_unit", "YY_PARSE_program",
  "$accept", "primary_expression", "$@1", "postfix_expression", "$@2",
  "$@3", "$@4", "argument_expression_list", "$@5", "unary_expression",
  "unary_operator", "cast_expression", "$@6", "$@7",
  "multiplicative_expression", "$@8", "$@9", "$@10", "additive_expression",
  "$@11", "$@12", "shift_expression", "relational_expression", "$@13",
  "$@14", "$@15", "$@16", "equality_expression", "$@17", "$@18",
  "and_expression", "$@19", "exclusive_or_expression",
  "inclusive_or_expression", "$@20", "logical_and_expression", "$@21",
  "logical_or_expression", "$@22", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression", "$@23",
  "$@24", "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "$@25", "init_declarator", "$@26",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "$@27", "$@28",
  "$@29", "$@30", "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "$@31", "initializer_list", "statement",
  "labeled_statement", "compound_statement", "$@32",
  "compound_statement_helper", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "$@33", "$@34",
  "else_statement", "$@35", "iteration_statement", "$@36", "$@37",
  "jump_statement", "$@38", "translation_unit", "external_declaration",
  "function_definition", "program", "$@39", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-255)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-171)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -42,   691,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,    10,  -255,    57,  -255,    63,   981,   981,
    -255,    14,  -255,   981,   825,   130,    39,   637,  -255,  -255,
      22,   691,   -49,    35,    63,  -255,  -255,    57,    38,  -255,
     805,  -255,   981,  -255,   -27,   779,    45,  -255,  -255,    63,
    -255,   825,    93,  -255,   130,  -255,  -255,  -255,   691,    35,
      -3,   -21,  -255,     6,  -255,  -255,  -255,  -255,  -255,  -255,
     825,  -255,   779,   779,   727,  -255,    21,   779,    24,    31,
     341,  -255,  -255,   981,   167,   562,   -17,   562,    35,  -255,
    -255,    63,   358,  -255,   747,  -255,  -255,  -255,   562,    80,
    -255,    54,  -255,   100,  -255,  -255,   574,   645,   645,  -255,
     562,   105,   114,   133,   143,   270,   146,   223,   150,   157,
     182,   455,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
     145,   198,   562,  -255,   110,    53,   251,   121,   255,   203,
     172,   202,   276,   429,  -255,  -255,    88,  -255,  -255,  -255,
     216,   341,   270,  -255,  -255,  -255,  -255,    67,   248,   245,
    -255,  -255,    77,  -255,  -255,  -255,   250,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,    21,  -255,   562,   270,
     779,  -255,  -255,  -255,  -255,   186,   232,   270,  -255,   526,
    -255,   262,   413,   235,  -255,  -255,  -255,   526,   526,   779,
     320,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,   562,  -255,  -255,
    -255,  -255,  -255,  -255,   562,   562,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,   562,  -255,  -255,   526,   562,  -255,  -255,
    -255,   270,  -255,   882,   538,  -255,    75,  -255,   187,  -255,
     960,  -255,   330,  -255,   358,  -255,  -255,  -255,   103,   271,
     145,   270,  -255,   526,   106,   526,   273,   413,  -255,    95,
     136,   274,  -255,   562,   526,   333,  -255,   562,   562,   562,
     562,   562,    53,    53,   562,   562,   562,   562,   562,   562,
     562,   203,   562,   562,    78,   276,   562,   882,  -255,   204,
     285,   289,  -255,   290,   187,   924,   550,  -255,  -255,  -255,
    -255,    19,  -255,  -255,  -255,   137,   270,   147,   526,   443,
    -255,  -255,  -255,   169,  -255,   219,  -255,  -255,  -255,  -255,
     110,   110,   251,   251,   251,   251,   121,   121,   255,   172,
     202,   562,  -255,  -255,  -255,  -255,  -255,   293,  -255,   292,
     358,  -255,  -255,  -255,  -255,   178,   270,   179,   562,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,   270,   270,   275,  -255,
     270,  -255,   562,   306,  -255,  -255,  -255,  -255,  -255,  -255,
     270,  -255
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   256,   163,   134,   118,   119,   120,   121,   122,
     124,   125,   126,   127,   130,   131,   128,   129,   159,   160,
     123,   138,   139,     0,   164,   172,   251,   114,   105,   107,
     132,     0,   133,   109,     0,   162,     0,     0,   248,   250,
       0,     0,   154,     0,     0,   176,   174,   173,     0,   111,
     115,   106,   109,   108,   137,     0,   114,   217,   223,   114,
     255,     0,   168,   166,   161,     2,   249,     1,   257,     0,
     157,     0,   155,     0,   177,   175,   112,   104,   116,   253,
       0,   110,     0,   144,     0,   140,     0,   146,   103,   115,
     222,   224,   254,     0,   187,   102,     0,   102,     0,   152,
     165,     0,     0,   252,     0,   143,   136,   141,   102,     0,
     147,   149,   145,     3,     4,     5,     0,     0,     0,    99,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,    35,    28,    29,    30,    31,    32,    33,   227,     8,
      22,    34,     0,    38,    45,    50,    53,    62,    67,    70,
      72,    75,    78,    81,    83,    96,     0,   225,   208,   209,
       0,   220,   219,   210,   211,   212,   213,   184,     0,   178,
     180,   185,     0,     3,    34,   101,     0,   153,   158,   156,
     113,   203,   202,   117,   135,   150,     0,   142,   102,     0,
       6,    26,     6,    23,    24,     0,     0,     0,   229,     0,
     236,     0,     0,     0,   243,   244,   245,     0,     0,     0,
       0,    16,    17,    11,     9,    13,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    85,     0,    25,    39,
      41,    43,    46,    48,     0,     0,    58,    60,    54,    56,
      63,    65,    68,     0,    73,    76,     0,     0,    97,   228,
     218,   221,   226,   164,     0,   182,   190,   183,   191,   169,
       0,   171,     0,   167,   207,   148,   151,   214,   188,     0,
     100,     0,   216,     0,     0,     0,     0,     0,   242,     0,
       0,     0,    15,    21,     0,     0,    84,     0,     0,     0,
       0,     0,    51,    52,     0,     0,     0,     0,     0,     0,
       0,    71,     0,     0,     0,    80,     0,     0,   198,   190,
       0,     0,   194,     0,   192,     0,     0,   179,   181,   186,
     205,     0,   189,    27,   215,     0,     0,     0,     0,     0,
     247,     7,    36,     0,    18,     0,    14,    40,    42,    44,
      47,    49,    59,    61,    55,    57,    64,    66,    69,    74,
      77,     0,    98,   199,   193,   195,   200,     0,   196,     0,
       0,   204,   230,   232,   237,     0,     0,     0,     0,    12,
      19,    10,    82,   201,   197,   206,     0,     0,     0,   240,
       0,    37,     0,   235,   238,   239,   241,    20,   233,   231,
       0,   234
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,  -255,   165,  -255,  -255,  -255,  -255,  -255,     0,
    -255,  -138,  -255,  -255,    17,  -255,  -255,  -255,    70,  -255,
    -255,   -39,    11,  -255,  -255,  -255,  -255,    65,  -255,  -255,
     151,  -255,    87,   101,  -255,   158,  -255,  -255,  -255,   -79,
    -100,  -255,  -127,  -255,  -255,   -77,    13,    -1,   350,  -255,
     307,  -255,  -255,   -29,  -255,  -255,   325,   -45,   -68,  -255,
     229,  -255,   354,   338,   -22,    29,   -28,  -255,  -255,  -255,
    -255,   -24,  -255,   -88,  -255,   180,  -255,   230,  -158,  -222,
    -254,  -255,  -255,  -113,  -255,   132,  -255,  -255,   -13,   280,
    -188,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,   402,   -16,  -255,  -255,  -255
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   139,   208,   140,   284,   283,   285,   333,   382,   141,
     142,   143,   209,   368,   144,   287,   288,   289,   145,   290,
     291,   146,   147,   296,   297,   294,   295,   148,   298,   299,
     149,   300,   150,   151,   302,   152,   303,   153,   247,   154,
     155,   227,   156,   306,   195,   176,    26,    59,    48,   101,
      49,   102,    28,    29,    30,    31,    84,    85,    86,   109,
     110,    32,    71,    72,    33,    34,    35,    44,    95,    93,
      94,    36,    47,   310,   169,   170,   172,   269,   311,   258,
     183,   264,   321,   157,   158,   159,    90,   160,    61,   162,
     163,   164,   273,   376,   389,   390,   165,   275,   377,   166,
     207,    37,    38,    39,    40,    41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    46,   182,    45,   228,   168,    52,    52,    64,   257,
     320,    52,   201,    42,   277,   105,   175,    54,   175,   112,
     178,    66,    67,    75,     3,    74,    83,    51,    53,   175,
      52,   185,    56,    87,   314,    69,    27,    80,    70,   107,
      27,   175,     3,   196,     1,     2,    98,    58,     3,   252,
      98,    81,    66,    83,    83,    83,    50,    82,    83,   107,
      87,    87,    87,    58,    99,    87,     3,    27,   177,   100,
       3,    52,   274,    73,    91,    83,   267,   161,     3,    97,
     279,   280,    87,    24,   272,    89,   360,   314,    89,   329,
      25,    76,   167,    91,    43,   174,  -170,   174,    55,    18,
      19,    24,   108,    58,   361,    76,   375,    24,   174,   175,
     322,   266,  -110,    78,    25,   111,   191,   193,   194,   304,
     174,    77,   268,   232,   233,    24,    25,   286,  -110,   253,
      89,   254,    25,   236,   237,   188,    25,   253,   252,   254,
     261,   268,   174,   256,   262,   248,   325,   186,   327,   337,
     338,   339,   210,   211,   212,   248,  -170,   335,   324,   351,
    -170,    83,   248,   187,   182,   307,    60,   254,    87,   326,
     171,   249,    25,   248,    91,   175,   198,   313,   330,   229,
      83,   189,    79,   334,   230,   231,   197,    87,   174,   173,
     114,   115,    62,    92,    63,   199,   255,   238,   239,   331,
     362,   365,   367,   248,   248,   200,   352,   213,   202,   214,
     364,   215,   103,   363,   248,   111,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   203,   357,    64,   309,
     381,    52,   369,   204,   174,   174,   370,   175,    52,   359,
     205,   378,   380,   174,   309,   248,   248,   174,   192,   315,
     243,   316,   167,   379,   174,   342,   343,   344,   345,   167,
     182,   234,   235,   383,   384,   206,   307,   386,   254,   240,
     241,   242,   372,   113,   114,   115,   116,   391,   117,   118,
     226,   244,   387,   309,   371,    52,   248,   174,   174,   174,
     174,   174,   245,    52,   174,   174,   174,   174,   174,   174,
     174,   250,   174,   174,   292,   293,   167,   340,   341,   346,
     347,   259,   260,   271,   167,   263,   174,   276,   278,   119,
     120,   121,   122,   282,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   319,   323,   328,   336,   332,   132,   133,
     134,   135,   136,   137,   113,   114,   115,   116,   353,   117,
     118,   174,   354,   138,    57,   355,   373,   374,   385,   388,
     270,   173,   114,   115,   116,   348,   117,   118,   174,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   349,
     119,   120,   121,   122,   301,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   350,   305,    88,   104,   180,   132,
     133,   134,   135,   136,   137,   265,   173,   114,   115,   116,
     131,   117,   118,    96,   138,    57,   132,   133,   134,   135,
     136,   137,   -79,   -79,   -79,   -79,   179,   -79,   -79,   281,
     318,   251,   181,    68,     0,     0,   173,   114,   115,   116,
       0,   117,   118,     0,     0,     0,     0,     0,    -6,    -6,
      -6,    -6,   119,    -6,    -6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   131,     0,     0,     0,     0,
       0,   132,   133,   134,   135,   136,   137,     0,     0,     0,
       0,   -79,   119,     0,     0,     0,   138,   -79,   -79,   -79,
     -79,   -79,   -79,     0,    -6,   131,   366,     0,     0,   246,
       0,   132,   133,   134,   135,   136,   137,    -6,     0,     0,
       0,     0,     0,    -6,    -6,    -6,    -6,    -6,    -6,   173,
     114,   115,   116,     0,   117,   118,     0,     0,     0,     0,
       0,   173,   114,   115,   116,     0,   117,   118,     0,     0,
       0,     0,     0,   173,   114,   115,   116,     0,   117,   118,
       0,     0,     0,     0,     0,   173,   114,   115,   116,     0,
     117,   118,     0,     0,     0,   119,     0,   173,   114,   115,
     116,     0,   117,   118,     0,     0,     0,     0,   131,     0,
       0,     0,     0,     0,   132,   133,   134,   135,   136,   137,
     131,     0,     0,   312,     0,     0,   132,   133,   134,   135,
     136,   137,   131,     0,     0,   358,     0,     0,   132,   133,
     134,   135,   136,   137,   131,     0,     0,     0,     0,     0,
     132,   133,   134,   135,   136,   137,   190,    65,     0,     0,
       3,     0,   132,   133,   134,   135,   136,   137,   173,   114,
     115,   116,     0,   117,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,    25,   192,     0,     0,
       0,     0,     0,   132,   133,   134,   135,   136,   137,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     4,     0,     0,     0,     0,
      25,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     4,     0,     0,     0,     0,
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,   106,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,     0,   184,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   307,   308,   254,     0,     0,     0,
       0,    25,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   356,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   317,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       1,    25,   102,    25,   142,    93,    28,    29,    36,   167,
     264,    33,   125,     3,   202,    83,    95,     3,    97,    87,
      97,    37,     0,    47,     3,    47,    55,    28,    29,   108,
      52,   108,    33,    55,   256,    84,    37,    50,     3,    84,
      41,   120,     3,   120,    86,    87,    67,    34,     3,   162,
      67,    52,    68,    82,    83,    84,    27,    84,    87,   104,
      82,    83,    84,    50,    85,    87,     3,    68,    85,    63,
       3,    93,   199,    44,    61,   104,   189,    90,     3,    82,
     207,   208,   104,    62,   197,    56,    67,   309,    59,   277,
      69,    67,    93,    80,    84,    95,     3,    97,    84,    42,
      43,    62,    81,    90,    85,    67,   360,    62,   108,   188,
     268,   188,    67,    82,    69,    86,   116,   117,   118,   246,
     120,    83,   190,    70,    71,    62,    69,   227,    83,    62,
     101,    64,    69,    12,    13,    81,    69,    62,   251,    64,
      63,   209,   142,   167,    67,    67,   273,    67,   275,   287,
     288,   289,     7,     8,     9,    67,    63,   284,   271,    81,
      67,   190,    67,    83,   264,    62,    34,    64,   190,    63,
       3,    83,    69,    67,   161,   254,    62,   254,    83,    69,
     209,    81,    50,   283,    74,    75,    81,   209,   188,     3,
       4,     5,    62,    61,    64,    62,   167,    76,    77,    63,
      63,   328,   329,    67,    67,    62,   306,    62,    62,    64,
      63,    66,    80,   326,    67,   186,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     3,   315,   256,   253,
     368,   253,    63,    83,   234,   235,    67,   316,   260,   316,
      83,    63,    63,   243,   268,    67,    67,   247,    62,    62,
      78,    64,   253,   366,   254,   294,   295,   296,   297,   260,
     360,    10,    11,   376,   377,    83,    62,   380,    64,    14,
      15,    68,   351,     3,     4,     5,     6,   390,     8,     9,
      82,    79,   382,   307,    65,   307,    67,   287,   288,   289,
     290,   291,    16,   315,   294,   295,   296,   297,   298,   299,
     300,    85,   302,   303,   234,   235,   307,   290,   291,   298,
     299,    63,    67,    81,   315,    65,   316,    55,    83,    49,
      50,    51,    52,     3,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     3,    63,    62,     3,    63,    68,    69,
      70,    71,    72,    73,     3,     4,     5,     6,    63,     8,
       9,   351,    63,    83,    84,    65,    63,    65,    83,    53,
     195,     3,     4,     5,     6,   300,     8,     9,   368,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   302,
      49,    50,    51,    52,   243,    54,    55,    56,    57,    58,
      59,    60,    61,    62,   303,   247,    56,    82,   101,    68,
      69,    70,    71,    72,    73,   186,     3,     4,     5,     6,
      62,     8,     9,    69,    83,    84,    68,    69,    70,    71,
      72,    73,     3,     4,     5,     6,    98,     8,     9,   209,
     260,   161,    84,    41,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    49,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    62,    49,    -1,    -1,    -1,    83,    68,    69,    70,
      71,    72,    73,    -1,    49,    62,    63,    -1,    -1,    80,
      -1,    68,    69,    70,    71,    72,    73,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    49,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      62,    -1,    -1,    65,    -1,    -1,    68,    69,    70,    71,
      72,    73,    62,    -1,    -1,    65,    -1,    -1,    68,    69,
      70,    71,    72,    73,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    62,     0,    -1,    -1,
       3,    -1,    68,    69,    70,    71,    72,    73,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    28,    -1,    -1,    -1,    -1,
      69,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    28,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    85,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    85,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    86,    87,     3,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    62,    69,   134,   135,   140,   141,
     142,   143,   149,   152,   153,   154,   159,   189,   190,   191,
     192,   193,     3,    84,   155,   152,   159,   160,   136,   138,
     153,   135,   152,   135,     3,    84,   135,    84,   134,   135,
     173,   176,    62,    64,   154,     0,   190,     0,   189,    84,
       3,   150,   151,   153,   152,   159,    67,    83,    82,   173,
     176,   135,    84,   141,   144,   145,   146,   152,   136,   153,
     174,   134,   173,   157,   158,   156,   150,    82,    67,    85,
      63,   137,   139,   173,   144,   146,    85,   145,    81,   147,
     148,   153,   146,     3,     4,     5,     6,     8,     9,    49,
      50,    51,    52,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    68,    69,    70,    71,    72,    73,    83,    89,
      91,    97,    98,    99,   102,   106,   109,   110,   115,   118,
     120,   121,   123,   125,   127,   128,   130,   171,   172,   173,
     175,   176,   177,   178,   179,   184,   187,   135,   161,   162,
     163,     3,   164,     3,    97,   127,   133,    85,   133,   151,
     138,    84,   128,   168,    85,   133,    67,    83,    81,    81,
      62,    97,    62,    97,    97,   132,   133,    81,    62,    62,
      62,   171,    62,     3,    83,    83,    83,   188,    90,   100,
       7,     8,     9,    62,    64,    66,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    82,   129,    99,    69,
      74,    75,    70,    71,    10,    11,    12,    13,    76,    77,
      14,    15,    68,    78,    79,    16,    80,   126,    67,    83,
      85,   177,   171,    62,    64,   153,   159,   166,   167,    63,
      67,    63,    67,    65,   169,   148,   133,   171,   146,   165,
      91,    81,   171,   180,   130,   185,    55,   178,    83,   130,
     130,   165,     3,    93,    92,    94,   128,   103,   104,   105,
     107,   108,   106,   106,   113,   114,   111,   112,   116,   117,
     119,   118,   122,   124,   130,   123,   131,    62,    63,   159,
     161,   166,    65,   133,   167,    62,    64,    48,   163,     3,
     168,   170,   166,    63,   171,   130,    63,   130,    62,   178,
      83,    63,    63,    95,   128,   130,     3,    99,    99,    99,
     102,   102,   109,   109,   109,   109,   110,   110,   115,   120,
     121,    81,   128,    63,    63,    65,    63,   161,    65,   133,
      67,    85,    63,   171,    63,   130,    63,   130,   101,    63,
      67,    65,   127,    63,    65,   168,   181,   186,    63,   171,
      63,    99,    96,   171,   171,    83,   171,   128,    53,   182,
     183,   171
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    88,    89,    89,    89,    90,    89,    91,    92,
      91,    93,    91,    94,    91,    91,    91,    91,    95,    96,
      95,    95,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    99,   100,   101,    99,   102,   103,
     102,   104,   102,   105,   102,   106,   107,   106,   108,   106,
     109,   109,   109,   110,   111,   110,   112,   110,   113,   110,
     114,   110,   115,   116,   115,   117,   115,   118,   119,   118,
     120,   120,   121,   122,   121,   123,   124,   123,   125,   126,
     125,   127,   127,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   130,   131,   130,   132,
     130,   133,   133,   134,   134,   135,   135,   135,   135,   135,
     135,   136,   137,   136,   136,   138,   139,   138,   140,   140,
     140,   140,   140,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   142,   142,   142,   143,   143,
     144,   144,   145,   146,   146,   146,   146,   147,   147,   148,
     148,   148,   149,   149,   149,   150,   150,   151,   151,   152,
     152,   153,   153,   154,   155,   154,   156,   154,   157,   154,
     158,   154,   159,   159,   159,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   163,   164,   164,   164,   165,   165,
     166,   166,   166,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   168,   169,   168,   170,   170,   170,   171,   171,
     171,   171,   171,   171,   172,   172,   172,   174,   173,   175,
     175,   175,   175,   176,   176,   177,   177,   178,   178,   180,
     181,   179,   179,   183,   182,   182,   185,   186,   184,   184,
     184,   184,   187,   187,   187,   187,   188,   187,   189,   189,
     190,   190,   191,   191,   191,   191,   193,   192
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     3,     3,     1,     1,     1,     0,     4,     1,     0,
       5,     0,     5,     0,     4,     3,     2,     2,     1,     0,
       4,     0,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     6,     1,     0,
       4,     0,     4,     0,     4,     1,     0,     4,     0,     4,
       1,     3,     3,     1,     0,     4,     0,     4,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     1,     0,     4,
       1,     3,     1,     0,     4,     1,     0,     4,     1,     0,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     0,
       3,     1,     0,     3,     3,     1,     2,     1,     2,     1,
       2,     1,     0,     4,     0,     1,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     0,     4,     0,     5,     0,     5,
       0,     5,     1,     2,     2,     3,     1,     2,     1,     3,
       1,     3,     2,     2,     1,     1,     3,     0,     1,     2,
       1,     1,     2,     3,     2,     3,     3,     4,     2,     3,
       3,     4,     1,     0,     4,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     0,     4,     1,
       1,     2,     0,     1,     2,     1,     2,     1,     2,     0,
       0,     8,     5,     0,     3,     0,     0,     0,     7,     7,
       6,     7,     3,     2,     2,     2,     0,     4,     1,     2,
       1,     1,     4,     3,     3,     2,     0,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}



/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

// Extract data from the parser.
typedef struct
{
  YYSTYPE yyvalue;
  int yynerrs;
} yy_parse_impl_t;

// Run a full parse, using YYCHAR as switching token.
static int
yy_parse_impl (int yychar, yy_parse_impl_t *yyimpl);


yyparse_program_t
yyparse_program (void)
{
  yyparse_program_t yyres;
  yy_parse_impl_t yyimpl;
  yyres.yystatus = yy_parse_impl (YY_PARSE_program, &yyimpl);
  yyres.yynerrs = yyimpl.yynerrs;
  return yyres;
}

yyparse_translation_unit_t
yyparse_translation_unit (void)
{
  yyparse_translation_unit_t yyres;
  yy_parse_impl_t yyimpl;
  yyres.yystatus = yy_parse_impl (YY_PARSE_translation_unit, &yyimpl);
  yyres.yynerrs = yyimpl.yynerrs;
  return yyres;
}


int
yyparse (void)
{
  return yy_parse_impl (YY_PARSE_program, YY_NULLPTR);
}

static int
yy_parse_impl (int yychar, yy_parse_impl_t *yyimpl)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));


  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */



  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 1: /* $accept: YY_PARSE_program program $end  */
#line 39 "grammar2.y"
          {  YYACCEPT; }
#line 1743 "grammar2.tab.c"
    break;

  case 2: /* $accept: YY_PARSE_translation_unit translation_unit $end  */
#line 39 "grammar2.y"
          {  YYACCEPT; }
#line 1749 "grammar2.tab.c"
    break;

  case 3: /* primary_expression: IDENTIFIER  */
#line 39 "grammar2.y"
                     {append_in_jsFile(yylval.str);}
#line 1755 "grammar2.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 41 "grammar2.y"
                         {append_in_jsFile(yylval.var_name);}
#line 1761 "grammar2.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 42 "grammar2.y"
              {append_in_jsFile("(");}
#line 1767 "grammar2.tab.c"
    break;

  case 7: /* primary_expression: '(' $@1 expression ')'  */
#line 42 "grammar2.y"
                                                      {append_in_jsFile(")");}
#line 1773 "grammar2.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 47 "grammar2.y"
                                 {append_in_jsFile("[");}
#line 1779 "grammar2.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '[' $@2 expression ']'  */
#line 47 "grammar2.y"
                                                                         {append_in_jsFile("]");}
#line 1785 "grammar2.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 48 "grammar2.y"
                                 {append_in_jsFile("(");}
#line 1791 "grammar2.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression '(' $@3 argument_expression_list ')'  */
#line 48 "grammar2.y"
                                                                                       {append_in_jsFile(")");}
#line 1797 "grammar2.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 49 "grammar2.y"
                                 {append_in_jsFile(".");}
#line 1803 "grammar2.tab.c"
    break;

  case 19: /* $@5: %empty  */
#line 57 "grammar2.y"
                                       {append_in_jsFile(", ");}
#line 1809 "grammar2.tab.c"
    break;

  case 28: /* unary_operator: '&'  */
#line 71 "grammar2.y"
              {append_in_jsFile("&");}
#line 1815 "grammar2.tab.c"
    break;

  case 29: /* unary_operator: '*'  */
#line 72 "grammar2.y"
              {append_in_jsFile("*");}
#line 1821 "grammar2.tab.c"
    break;

  case 30: /* unary_operator: '+'  */
#line 73 "grammar2.y"
              {append_in_jsFile("+");}
#line 1827 "grammar2.tab.c"
    break;

  case 31: /* unary_operator: '-'  */
#line 74 "grammar2.y"
              {append_in_jsFile("-");}
#line 1833 "grammar2.tab.c"
    break;

  case 32: /* unary_operator: '~'  */
#line 75 "grammar2.y"
              {append_in_jsFile("~");}
#line 1839 "grammar2.tab.c"
    break;

  case 33: /* unary_operator: '!'  */
#line 76 "grammar2.y"
              {append_in_jsFile("!");}
#line 1845 "grammar2.tab.c"
    break;

  case 35: /* $@6: %empty  */
#line 81 "grammar2.y"
              {append_in_jsFile("(");}
#line 1851 "grammar2.tab.c"
    break;

  case 36: /* $@7: %empty  */
#line 81 "grammar2.y"
                                                     {append_in_jsFile(")");}
#line 1857 "grammar2.tab.c"
    break;

  case 39: /* $@8: %empty  */
#line 86 "grammar2.y"
                                        {append_in_jsFile("*");}
#line 1863 "grammar2.tab.c"
    break;

  case 41: /* $@9: %empty  */
#line 87 "grammar2.y"
                                        {append_in_jsFile("/");}
#line 1869 "grammar2.tab.c"
    break;

  case 43: /* $@10: %empty  */
#line 88 "grammar2.y"
                                        {append_in_jsFile("%");}
#line 1875 "grammar2.tab.c"
    break;

  case 46: /* $@11: %empty  */
#line 93 "grammar2.y"
                                  {append_in_jsFile("+");}
#line 1881 "grammar2.tab.c"
    break;

  case 48: /* $@12: %empty  */
#line 94 "grammar2.y"
                                  {append_in_jsFile("-");}
#line 1887 "grammar2.tab.c"
    break;

  case 54: /* $@13: %empty  */
#line 105 "grammar2.y"
                                    {append_in_jsFile("<");}
#line 1893 "grammar2.tab.c"
    break;

  case 56: /* $@14: %empty  */
#line 106 "grammar2.y"
                                    {append_in_jsFile(">");}
#line 1899 "grammar2.tab.c"
    break;

  case 58: /* $@15: %empty  */
#line 107 "grammar2.y"
                                      {append_in_jsFile("<=");}
#line 1905 "grammar2.tab.c"
    break;

  case 60: /* $@16: %empty  */
#line 108 "grammar2.y"
                                      {append_in_jsFile(">=");}
#line 1911 "grammar2.tab.c"
    break;

  case 63: /* $@17: %empty  */
#line 113 "grammar2.y"
                                    {append_in_jsFile("==");}
#line 1917 "grammar2.tab.c"
    break;

  case 65: /* $@18: %empty  */
#line 114 "grammar2.y"
                                    {append_in_jsFile("!=");}
#line 1923 "grammar2.tab.c"
    break;

  case 68: /* $@19: %empty  */
#line 119 "grammar2.y"
                             {append_in_jsFile("&");}
#line 1929 "grammar2.tab.c"
    break;

  case 73: /* $@20: %empty  */
#line 129 "grammar2.y"
                                      {append_in_jsFile("|");}
#line 1935 "grammar2.tab.c"
    break;

  case 76: /* $@21: %empty  */
#line 134 "grammar2.y"
                                        {append_in_jsFile("&&");}
#line 1941 "grammar2.tab.c"
    break;

  case 79: /* $@22: %empty  */
#line 139 "grammar2.y"
                                 {append_in_jsFile("||");}
#line 1947 "grammar2.tab.c"
    break;

  case 85: /* assignment_operator: '='  */
#line 153 "grammar2.y"
              {append_in_jsFile("=");}
#line 1953 "grammar2.tab.c"
    break;

  case 97: /* $@23: %empty  */
#line 168 "grammar2.y"
                         {append_in_jsFile(", ");}
#line 1959 "grammar2.tab.c"
    break;

  case 99: /* $@24: %empty  */
#line 169 "grammar2.y"
                 {append_in_jsFile("console.log");}
#line 1965 "grammar2.tab.c"
    break;

  case 104: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 179 "grammar2.y"
                                                          {append_in_jsFile("\n");}
#line 1971 "grammar2.tab.c"
    break;

  case 112: /* $@25: %empty  */
#line 193 "grammar2.y"
                                   {append_in_jsFile(", ");}
#line 1977 "grammar2.tab.c"
    break;

  case 116: /* $@26: %empty  */
#line 199 "grammar2.y"
                         {append_in_jsFile("=");}
#line 1983 "grammar2.tab.c"
    break;

  case 159: /* type_qualifier: CONST  */
#line 280 "grammar2.y"
                {append_in_jsFile("const ");}
#line 1989 "grammar2.tab.c"
    break;

  case 162: /* declarator: direct_declarator  */
#line 286 "grammar2.y"
                            {append_in_jsFile("let ");}
#line 1995 "grammar2.tab.c"
    break;

  case 164: /* $@27: %empty  */
#line 291 "grammar2.y"
              {append_in_jsFile("(");}
#line 2001 "grammar2.tab.c"
    break;

  case 165: /* direct_declarator: '(' $@27 declarator ')'  */
#line 291 "grammar2.y"
                                                      {append_in_jsFile(")");}
#line 2007 "grammar2.tab.c"
    break;

  case 166: /* $@28: %empty  */
#line 292 "grammar2.y"
                                {append_in_jsFile("[");}
#line 2013 "grammar2.tab.c"
    break;

  case 167: /* direct_declarator: direct_declarator '[' $@28 constant_expression ']'  */
#line 292 "grammar2.y"
                                                                                 {append_in_jsFile("]");}
#line 2019 "grammar2.tab.c"
    break;

  case 168: /* $@29: %empty  */
#line 293 "grammar2.y"
                                {append_in_jsFile("(");}
#line 2025 "grammar2.tab.c"
    break;

  case 169: /* direct_declarator: direct_declarator '(' $@29 parameter_type_list ')'  */
#line 293 "grammar2.y"
                                                                                 {append_in_jsFile(")");}
#line 2031 "grammar2.tab.c"
    break;

  case 170: /* $@30: %empty  */
#line 294 "grammar2.y"
                                {append_in_jsFile("(");}
#line 2037 "grammar2.tab.c"
    break;

  case 171: /* direct_declarator: direct_declarator '(' $@30 identifier_list ')'  */
#line 294 "grammar2.y"
                                                                             {append_in_jsFile(")");}
#line 2043 "grammar2.tab.c"
    break;

  case 203: /* $@31: %empty  */
#line 357 "grammar2.y"
              {append_in_jsFile("{ \n");}
#line 2049 "grammar2.tab.c"
    break;

  case 204: /* initializer: '{' $@31 initializer_list '}'  */
#line 357 "grammar2.y"
                                                               {append_in_jsFile("\n }");}
#line 2055 "grammar2.tab.c"
    break;

  case 217: /* $@32: %empty  */
#line 382 "grammar2.y"
              {append_in_jsFile("{ \n");}
#line 2061 "grammar2.tab.c"
    break;

  case 218: /* compound_statement: '{' $@32 compound_statement_helper '}'  */
#line 382 "grammar2.y"
                                                                        {append_in_jsFile("\n }");}
#line 2067 "grammar2.tab.c"
    break;

  case 229: /* $@33: %empty  */
#line 408 "grammar2.y"
                 {append_in_jsFile("if(");}
#line 2073 "grammar2.tab.c"
    break;

  case 230: /* $@34: %empty  */
#line 408 "grammar2.y"
                                                           {append_in_jsFile(")");}
#line 2079 "grammar2.tab.c"
    break;

  case 233: /* $@35: %empty  */
#line 413 "grammar2.y"
           {append_in_jsFile("else");}
#line 2085 "grammar2.tab.c"
    break;

  case 236: /* $@36: %empty  */
#line 418 "grammar2.y"
                    {append_in_jsFile("while(");}
#line 2091 "grammar2.tab.c"
    break;

  case 237: /* $@37: %empty  */
#line 418 "grammar2.y"
                                                                 {append_in_jsFile(")");}
#line 2097 "grammar2.tab.c"
    break;

  case 245: /* jump_statement: RETURN ';'  */
#line 428 "grammar2.y"
                     {append_in_jsFile("\nreturn \n");}
#line 2103 "grammar2.tab.c"
    break;

  case 246: /* $@38: %empty  */
#line 429 "grammar2.y"
                 {append_in_jsFile("\nreturn ");}
#line 2109 "grammar2.tab.c"
    break;

  case 247: /* jump_statement: RETURN $@38 expression ';'  */
#line 429 "grammar2.y"
                                                                 {append_in_jsFile("\n");}
#line 2115 "grammar2.tab.c"
    break;

  case 256: /* $@39: %empty  */
#line 451 "grammar2.y"
      { printf("Comenzando a traducir a JavaScript\n"); create_output_file(); }
#line 2121 "grammar2.tab.c"
    break;

  case 257: /* program: $@39 translation_unit  */
#line 451 "grammar2.y"
                                                                                                 { close_output_file(); }
#line 2127 "grammar2.tab.c"
    break;


#line 2131 "grammar2.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  if (yyimpl)
    yyimpl->yynerrs = yynerrs;
  return yyresult;
}

#line 453 "grammar2.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la línea %d\n", message, yylineno);
    return -1;
}
