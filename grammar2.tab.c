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
  YYSYMBOL_RSQBRAQ = 29,                   /* RSQBRAQ  */
  YYSYMBOL_LSQBRAQ = 30,                   /* LSQBRAQ  */
  YYSYMBOL_LPAREN = 31,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 32,                    /* RPAREN  */
  YYSYMBOL_TYPEDEF = 33,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 34,                    /* EXTERN  */
  YYSYMBOL_STATIC = 35,                    /* STATIC  */
  YYSYMBOL_AUTO = 36,                      /* AUTO  */
  YYSYMBOL_REGISTER = 37,                  /* REGISTER  */
  YYSYMBOL_CHAR = 38,                      /* CHAR  */
  YYSYMBOL_SHORT = 39,                     /* SHORT  */
  YYSYMBOL_INT = 40,                       /* INT  */
  YYSYMBOL_LONG = 41,                      /* LONG  */
  YYSYMBOL_SIGNED = 42,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 43,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 44,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 45,                    /* DOUBLE  */
  YYSYMBOL_CONST = 46,                     /* CONST  */
  YYSYMBOL_VOLATILE = 47,                  /* VOLATILE  */
  YYSYMBOL_VOID = 48,                      /* VOID  */
  YYSYMBOL_STRUCT = 49,                    /* STRUCT  */
  YYSYMBOL_UNION = 50,                     /* UNION  */
  YYSYMBOL_ENUM = 51,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 52,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 53,                      /* CASE  */
  YYSYMBOL_DEFAULT = 54,                   /* DEFAULT  */
  YYSYMBOL_IF = 55,                        /* IF  */
  YYSYMBOL_ELSE = 56,                      /* ELSE  */
  YYSYMBOL_SWITCH = 57,                    /* SWITCH  */
  YYSYMBOL_WHILE = 58,                     /* WHILE  */
  YYSYMBOL_DO = 59,                        /* DO  */
  YYSYMBOL_FOR = 60,                       /* FOR  */
  YYSYMBOL_GOTO = 61,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 62,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 63,                     /* BREAK  */
  YYSYMBOL_RETURN = 64,                    /* RETURN  */
  YYSYMBOL_65_ = 65,                       /* '('  */
  YYSYMBOL_66_ = 66,                       /* ')'  */
  YYSYMBOL_67_ = 67,                       /* '['  */
  YYSYMBOL_68_ = 68,                       /* ']'  */
  YYSYMBOL_69_ = 69,                       /* '.'  */
  YYSYMBOL_70_ = 70,                       /* ','  */
  YYSYMBOL_71_ = 71,                       /* '&'  */
  YYSYMBOL_72_ = 72,                       /* '*'  */
  YYSYMBOL_73_ = 73,                       /* '+'  */
  YYSYMBOL_74_ = 74,                       /* '-'  */
  YYSYMBOL_75_ = 75,                       /* '~'  */
  YYSYMBOL_76_ = 76,                       /* '!'  */
  YYSYMBOL_77_ = 77,                       /* '/'  */
  YYSYMBOL_78_ = 78,                       /* '%'  */
  YYSYMBOL_79_ = 79,                       /* '<'  */
  YYSYMBOL_80_ = 80,                       /* '>'  */
  YYSYMBOL_81_ = 81,                       /* '^'  */
  YYSYMBOL_82_ = 82,                       /* '|'  */
  YYSYMBOL_83_ = 83,                       /* '?'  */
  YYSYMBOL_84_ = 84,                       /* ':'  */
  YYSYMBOL_85_ = 85,                       /* '='  */
  YYSYMBOL_86_ = 86,                       /* ';'  */
  YYSYMBOL_87_ = 87,                       /* '{'  */
  YYSYMBOL_88_ = 88,                       /* '}'  */
  YYSYMBOL_YY_PARSE_translation_unit = 89, /* YY_PARSE_translation_unit  */
  YYSYMBOL_YY_PARSE_program = 90,          /* YY_PARSE_program  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_primary_expression = 92,        /* primary_expression  */
  YYSYMBOL_93_1 = 93,                      /* $@1  */
  YYSYMBOL_postfix_expression = 94,        /* postfix_expression  */
  YYSYMBOL_95_2 = 95,                      /* $@2  */
  YYSYMBOL_96_3 = 96,                      /* $@3  */
  YYSYMBOL_97_4 = 97,                      /* $@4  */
  YYSYMBOL_argument_expression_list = 98,  /* argument_expression_list  */
  YYSYMBOL_99_5 = 99,                      /* $@5  */
  YYSYMBOL_unary_expression = 100,         /* unary_expression  */
  YYSYMBOL_unary_operator = 101,           /* unary_operator  */
  YYSYMBOL_cast_expression = 102,          /* cast_expression  */
  YYSYMBOL_103_6 = 103,                    /* $@6  */
  YYSYMBOL_104_7 = 104,                    /* $@7  */
  YYSYMBOL_multiplicative_expression = 105, /* multiplicative_expression  */
  YYSYMBOL_106_8 = 106,                    /* $@8  */
  YYSYMBOL_107_9 = 107,                    /* $@9  */
  YYSYMBOL_108_10 = 108,                   /* $@10  */
  YYSYMBOL_additive_expression = 109,      /* additive_expression  */
  YYSYMBOL_110_11 = 110,                   /* $@11  */
  YYSYMBOL_111_12 = 111,                   /* $@12  */
  YYSYMBOL_shift_expression = 112,         /* shift_expression  */
  YYSYMBOL_relational_expression = 113,    /* relational_expression  */
  YYSYMBOL_114_13 = 114,                   /* $@13  */
  YYSYMBOL_115_14 = 115,                   /* $@14  */
  YYSYMBOL_116_15 = 116,                   /* $@15  */
  YYSYMBOL_117_16 = 117,                   /* $@16  */
  YYSYMBOL_equality_expression = 118,      /* equality_expression  */
  YYSYMBOL_119_17 = 119,                   /* $@17  */
  YYSYMBOL_120_18 = 120,                   /* $@18  */
  YYSYMBOL_and_expression = 121,           /* and_expression  */
  YYSYMBOL_122_19 = 122,                   /* $@19  */
  YYSYMBOL_exclusive_or_expression = 123,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 124,  /* inclusive_or_expression  */
  YYSYMBOL_125_20 = 125,                   /* $@20  */
  YYSYMBOL_logical_and_expression = 126,   /* logical_and_expression  */
  YYSYMBOL_127_21 = 127,                   /* $@21  */
  YYSYMBOL_logical_or_expression = 128,    /* logical_or_expression  */
  YYSYMBOL_129_22 = 129,                   /* $@22  */
  YYSYMBOL_conditional_expression = 130,   /* conditional_expression  */
  YYSYMBOL_131_23 = 131,                   /* $@23  */
  YYSYMBOL_132_24 = 132,                   /* $@24  */
  YYSYMBOL_assignment_expression = 133,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 134,      /* assignment_operator  */
  YYSYMBOL_expression = 135,               /* expression  */
  YYSYMBOL_136_25 = 136,                   /* $@25  */
  YYSYMBOL_constant_expression = 137,      /* constant_expression  */
  YYSYMBOL_declaration = 138,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 139,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 140,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 141,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 142,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 143,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 144, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 145,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 146,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 147,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 148, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 149,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 150,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 151,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 152,          /* enumerator_list  */
  YYSYMBOL_enumerator = 153,               /* enumerator  */
  YYSYMBOL_type_qualifier = 154,           /* type_qualifier  */
  YYSYMBOL_declarator = 155,               /* declarator  */
  YYSYMBOL_direct_declarator = 156,        /* direct_declarator  */
  YYSYMBOL_pointer = 157,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 158,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 159,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 160,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 161,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 162,          /* identifier_list  */
  YYSYMBOL_type_name = 163,                /* type_name  */
  YYSYMBOL_abstract_declarator = 164,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 165, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 166,              /* initializer  */
  YYSYMBOL_initializer_list = 167,         /* initializer_list  */
  YYSYMBOL_statement = 168,                /* statement  */
  YYSYMBOL_labeled_statement = 169,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 170,       /* compound_statement  */
  YYSYMBOL_171_26 = 171,                   /* $@26  */
  YYSYMBOL_172_27 = 172,                   /* $@27  */
  YYSYMBOL_173_28 = 173,                   /* $@28  */
  YYSYMBOL_declaration_list = 174,         /* declaration_list  */
  YYSYMBOL_statement_list = 175,           /* statement_list  */
  YYSYMBOL_expression_statement = 176,     /* expression_statement  */
  YYSYMBOL_selection_statement = 177,      /* selection_statement  */
  YYSYMBOL_178_29 = 178,                   /* $@29  */
  YYSYMBOL_179_30 = 179,                   /* $@30  */
  YYSYMBOL_180_31 = 180,                   /* $@31  */
  YYSYMBOL_181_32 = 181,                   /* $@32  */
  YYSYMBOL_182_33 = 182,                   /* $@33  */
  YYSYMBOL_iteration_statement = 183,      /* iteration_statement  */
  YYSYMBOL_184_34 = 184,                   /* $@34  */
  YYSYMBOL_jump_statement = 185,           /* jump_statement  */
  YYSYMBOL_translation_unit = 186,         /* translation_unit  */
  YYSYMBOL_external_declaration = 187,     /* external_declaration  */
  YYSYMBOL_function_definition = 188,      /* function_definition  */
  YYSYMBOL_program = 189,                  /* program  */
  YYSYMBOL_190_35 = 190                    /* $@35  */
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
#define YYLAST   1240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  249
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  394

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   321


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
       2,     2,     2,    76,     2,     2,     2,    78,    71,     2,
      65,    66,    72,    73,    70,    74,    69,    77,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,    86,
      79,    85,    80,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,    82,    88,    75,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      89,    90
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    39,    40,    41,    42,    42,    46,    47,
      47,    48,    49,    49,    50,    50,    51,    52,    53,    57,
      58,    58,    62,    63,    64,    65,    66,    67,    71,    72,
      73,    74,    75,    76,    80,    81,    81,    81,    85,    86,
      86,    87,    87,    88,    88,    92,    93,    93,    94,    94,
      98,    99,   100,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   112,   113,   113,   114,   114,   118,   119,   119,
     123,   124,   128,   129,   129,   133,   134,   134,   138,   139,
     139,   143,   144,   144,   144,   148,   149,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   167,   168,
     168,   172,   176,   177,   181,   182,   183,   184,   185,   186,
     190,   191,   195,   196,   200,   201,   202,   203,   204,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   223,   224,   225,   229,   230,   234,   235,   239,   243,
     244,   245,   246,   250,   251,   255,   256,   257,   261,   262,
     263,   267,   268,   272,   273,   277,   278,   282,   283,   287,
     288,   289,   290,   291,   292,   293,   297,   298,   299,   300,
     304,   305,   310,   311,   315,   316,   320,   321,   322,   326,
     327,   331,   332,   336,   337,   338,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   354,   355,   356,   360,   361,
     365,   366,   367,   368,   369,   370,   374,   375,   376,   380,
     381,   381,   382,   382,   383,   383,   387,   388,   392,   393,
     397,   398,   402,   402,   402,   403,   403,   403,   403,   404,
     408,   408,   409,   410,   411,   415,   416,   417,   418,   419,
     423,   424,   428,   429,   433,   434,   435,   436,   441,   441
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
  "OR_ASSIGN", "TYPE_NAME", "RSQBRAQ", "LSQBRAQ", "LPAREN", "RPAREN",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT",
  "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
  "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'",
  "YY_PARSE_translation_unit", "YY_PARSE_program", "$accept",
  "primary_expression", "$@1", "postfix_expression", "$@2", "$@3", "$@4",
  "argument_expression_list", "$@5", "unary_expression", "unary_operator",
  "cast_expression", "$@6", "$@7", "multiplicative_expression", "$@8",
  "$@9", "$@10", "additive_expression", "$@11", "$@12", "shift_expression",
  "relational_expression", "$@13", "$@14", "$@15", "$@16",
  "equality_expression", "$@17", "$@18", "and_expression", "$@19",
  "exclusive_or_expression", "inclusive_or_expression", "$@20",
  "logical_and_expression", "$@21", "logical_or_expression", "$@22",
  "conditional_expression", "$@23", "$@24", "assignment_expression",
  "assignment_operator", "expression", "$@25", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "$@26", "$@27", "$@28", "declaration_list",
  "statement_list", "expression_statement", "selection_statement", "$@29",
  "$@30", "$@31", "$@32", "$@33", "iteration_statement", "$@34",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "program", "$@35", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-210)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-213)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -36,   845,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,     9,    12,   114,  -210,    60,  1189,  1189,
    -210,    10,  -210,  1189,  1059,   100,    44,   747,  -210,  -210,
      24,   845,    13,   105,    49,  -210,  -210,   114,  -210,   -47,
    -210,  1035,  -210,  -210,    54,   695,  -210,   928,  -210,    60,
    -210,  1059,   894,   566,   100,  -210,  -210,  -210,   845,   105,
      58,   -51,  -210,  -210,  -210,  -210,    12,  -210,   362,  -210,
    1059,   695,   695,   979,  -210,    11,   695,  -210,   491,  1189,
    1189,    97,  -210,  -210,  -210,  -210,    15,   113,   156,  -210,
      36,  -210,  -210,  -210,   624,   640,   640,   656,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,   131,  -210,   698,  -210,
     139,   181,   246,    56,   244,   167,   163,   164,   233,     5,
    -210,   193,   -37,   698,   105,  -210,  -210,   362,   359,  -210,
    -210,  -210,  -210,  1003,  -210,  -210,  -210,   698,   -41,  -210,
     182,  -210,   184,   698,   192,   250,   217,   218,   491,   219,
     282,   200,   201,   508,  -210,  -210,    98,  -210,  -210,  -210,
     269,  -210,  -210,  -210,  -210,   952,   417,   796,   582,  -210,
      47,  -210,   127,  -210,  1164,  -210,   285,   695,  -210,  -210,
    -210,  -210,   698,   695,   286,  -210,  -210,   224,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,   698,   698,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,   698,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,   -10,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,   698,  -210,  -210,
      11,  -210,   698,   491,   211,   491,  -210,   698,  -210,   240,
     524,   213,  -210,  -210,  -210,   107,  -210,  -210,  -210,  -210,
    -210,   343,  -210,   234,   235,  -210,   237,   127,  1130,   598,
    -210,  -210,  -210,    61,   241,    64,   242,  -210,  -210,   698,
     698,   300,   698,   698,   698,   698,   698,   181,   181,   698,
     698,   698,   698,   698,   698,   698,   167,   698,   698,   698,
     698,   288,  -210,  -210,  -210,  -210,  -210,   491,  -210,   698,
     698,   121,   698,   247,   524,  -210,  -210,   698,  -210,  -210,
    -210,  -210,  -210,   243,  -210,   238,  1090,   130,  -210,  -210,
    -210,  -210,   143,  -210,    -4,  -210,  -210,  -210,  -210,   139,
     139,   246,   246,   246,   246,    56,    56,   244,   163,   164,
     233,    94,  -210,  -210,  -210,   -15,     3,   491,   148,   698,
     610,  -210,  -210,  -210,   698,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,   491,   173,   491,   175,  -210,   698,   698,   491,
     491,  -210,   225,  -210,   491,  -210,  -210,  -210,   257,  -210,
    -210,  -210,   491,  -210
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   248,   159,   130,   114,   115,   116,   117,   118,
     120,   121,   122,   123,   126,   127,   124,   125,   155,   156,
     119,   134,   135,     0,     0,   166,   243,     0,   104,   106,
     128,     0,   129,   108,     0,   158,     0,     0,   240,   242,
       0,     0,   150,     0,     0,   170,   168,   167,   102,     0,
     110,   112,   105,   107,   133,     0,   109,   210,   216,     0,
     247,     0,     0,     0,   157,     2,   241,     1,   249,     0,
     153,     0,   151,   160,   171,   169,     0,   103,     0,   245,
       0,     0,   140,     0,   136,     0,   142,   209,     0,     0,
       0,   112,   217,   246,   179,   165,   178,     0,   172,   174,
       0,     3,     4,     5,     0,     0,     0,    35,   162,    28,
      29,    30,    31,    32,    33,     8,    22,    34,     0,    38,
      45,    50,    53,    62,    67,    70,    72,    75,    78,    81,
     101,     0,     0,     0,     0,   148,   111,     0,    34,    85,
     195,   113,   244,     0,   139,   132,   137,     0,     0,   143,
     145,   141,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   220,    98,     0,   218,   200,   201,
       0,   202,   203,   204,   205,     0,     0,     0,     0,   176,
     183,   177,   184,   163,     0,   164,     0,     6,    26,     6,
      23,    24,     0,     0,     0,    17,    18,    12,     9,    14,
      25,    39,    41,    43,    46,    48,     0,     0,    58,    60,
      54,    56,    63,    65,    68,     0,    73,    76,    79,    82,
     161,   149,   154,   152,   198,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    87,     0,   131,   146,
       0,   138,     0,     0,     0,     0,   222,     0,   230,     0,
       0,     0,   236,   237,   238,     0,    99,   221,   211,   219,
     213,     0,   191,     0,     0,   187,     0,   185,     0,     0,
     173,   175,   180,   181,     0,     0,     0,    16,    11,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    52,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,     0,   196,    86,   144,   147,   206,     0,   208,     0,
       0,     0,     0,     0,     0,   235,   239,     0,   215,   192,
     186,   188,   193,     0,   189,     0,     0,   183,   182,    27,
       7,    36,     0,    19,     0,    15,    40,    42,    44,    47,
      49,    59,    61,    55,    57,    64,    66,    69,    74,    77,
      80,     0,   197,   199,   207,     0,     0,     0,     0,     0,
       0,   100,   194,   190,     0,    13,    20,    10,    83,   223,
     226,   229,     0,     0,     0,     0,    37,     0,     0,     0,
       0,   231,     0,   233,     0,    21,    84,   224,     0,   232,
     234,   227,     0,   228
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,   -62,
    -210,  -111,  -210,  -210,   -21,  -210,  -210,  -210,    73,  -210,
    -210,   -86,   -23,  -210,  -210,  -210,  -210,    19,  -210,  -210,
     103,  -210,    18,    21,  -210,    37,  -210,  -210,  -210,   -61,
    -210,  -210,   -67,  -210,  -158,  -210,   -54,    14,    -1,  -210,
     245,  -210,   -24,  -210,  -210,   239,   -53,   -66,  -210,    95,
    -210,   268,   204,    76,    22,   -30,   -22,  -210,   -58,  -210,
     155,  -210,   157,   -88,  -171,  -127,  -210,  -132,  -210,    86,
    -210,  -210,  -210,    59,   178,  -209,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,   317,   -16,  -210,  -210,  -210
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   115,   192,   116,   280,   279,   281,   332,   377,   138,
     118,   119,   193,   364,   120,   282,   283,   284,   121,   285,
     286,   122,   123,   291,   292,   289,   290,   124,   293,   294,
     125,   295,   126,   127,   297,   128,   298,   129,   299,   139,
     300,   378,   165,   237,   166,   317,   131,    26,    59,    49,
      50,    28,    29,    30,    31,    83,    84,    85,   148,   149,
      32,    71,    72,    33,    34,    35,    36,    47,   263,    98,
      99,   100,   274,   264,   182,   141,   225,   167,   168,   169,
      88,    89,    90,    61,   170,   171,   172,   309,   379,   310,
     380,   392,   173,   312,   174,    37,    38,    39,    40,    41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   117,   130,    46,    97,   255,    64,   200,   181,   267,
     224,   140,    42,    54,     3,     3,   144,   369,     3,   134,
     151,    66,   218,    76,    67,    75,   249,    52,    53,   240,
     146,    82,    56,   134,   275,   370,    27,   135,   259,    77,
      27,   314,   188,   190,   191,   241,    44,     3,    58,    51,
       3,   221,    66,     1,     2,   256,   117,    82,    82,    82,
     301,    96,    82,     3,   367,    58,   256,    27,   208,   209,
     140,   117,   130,   256,   180,    92,    24,    24,   302,   222,
     177,    91,   178,    25,    25,   117,   130,    25,   219,   311,
     146,   117,   130,   239,    92,   147,    43,    55,    91,   244,
      69,    45,   185,    58,    58,   360,   186,   150,    70,    24,
      80,   306,   177,   308,   178,    73,   117,   130,   179,    82,
      60,   273,   334,    74,   266,    24,   326,   273,   178,   259,
     330,    86,    25,    25,   256,   210,   211,    79,   194,   195,
     196,    81,   351,   133,   117,   117,    48,    93,   175,   176,
      64,   355,   356,   117,   358,   180,   267,    86,    86,    86,
      18,    19,    86,    82,   256,    62,   142,    63,   256,    82,
     303,   336,   337,   338,   353,   354,    96,   256,   368,   183,
     117,   130,    78,    96,   257,   328,    25,   357,   305,    92,
      92,   256,   268,   316,   269,   326,   197,   178,   198,    44,
     199,   373,   375,   341,   342,   343,   344,   117,   130,   365,
     323,   201,   333,   366,   372,   325,   202,   203,   256,    86,
     117,   117,   117,   117,   117,   371,   184,   117,   117,   117,
     117,   117,   117,   117,   140,   117,   117,   117,   214,   382,
     381,   384,   383,   256,   215,   256,   216,   387,   388,   217,
     361,   327,   390,   376,   204,   205,   206,   207,   212,   213,
     393,   220,   150,    86,   339,   340,   242,    96,   243,    86,
     345,   346,   152,   102,   103,   104,   245,   105,   106,   287,
     288,   246,   247,   248,   250,   251,   252,   253,   272,   277,
     278,   101,   102,   103,   104,   307,   105,   106,   313,   315,
     319,   320,   117,   335,   327,   321,   363,   329,   331,   362,
     385,   389,   359,   391,   347,   348,   117,   386,   296,   349,
     143,   136,   153,   154,   155,    96,   156,   157,   158,   159,
     160,   161,   162,   163,   107,   304,   350,   132,   223,   271,
     109,   110,   111,   112,   113,   114,   152,   102,   103,   104,
     276,   105,   106,   107,   261,   164,    57,   258,    68,   109,
     110,   111,   112,   113,   114,   101,   102,   103,   104,     0,
     105,   106,     0,     0,     0,   137,   352,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   154,   155,     0,
     156,   157,   158,   159,   160,   161,   162,   163,   107,     0,
       0,     0,     0,     0,   109,   110,   111,   112,   113,   114,
     152,   102,   103,   104,     0,   105,   106,   107,     0,   164,
      57,   318,     0,   109,   110,   111,   112,   113,   114,     0,
       0,     0,     0,     0,   236,     4,     0,     0,     0,   137,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
     153,   154,   155,     0,   156,   157,   158,   159,   160,   161,
     162,   163,   107,     0,     0,     0,     0,     0,   109,   110,
     111,   112,   113,   114,   152,   102,   103,   104,     0,   105,
     106,     0,     0,   164,    57,     0,     0,     0,     0,     0,
       0,   101,   102,   103,   104,     0,   105,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,     0,   105,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,   154,   155,     0,   156,   157,
     158,   159,   160,   161,   162,   163,   107,     0,     0,     0,
       0,     0,   109,   110,   111,   112,   113,   114,     0,   101,
     102,   103,   104,   107,   105,   106,     0,   164,    57,   109,
     110,   111,   112,   113,   114,   101,   102,   103,   104,   107,
     105,   106,     0,     0,   254,   109,   110,   111,   112,   113,
     114,   101,   102,   103,   104,     0,   105,   106,     0,     0,
     164,     0,     0,   101,   102,   103,   104,     0,   105,   106,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   107,   105,   106,   108,     0,     0,   109,   110,   111,
     112,   113,   114,   101,   102,   103,   104,   107,   105,   106,
     265,     0,     0,   109,   110,   111,   112,   113,   114,    -6,
      -6,    -6,    -6,   107,    -6,    -6,   324,     0,     0,   109,
     110,   111,   112,   113,   114,   107,   374,     0,     0,     0,
       0,   109,   110,   111,   112,   113,   114,     0,     0,   187,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
     114,   101,   102,   103,   104,   189,   105,   106,     0,     0,
       0,   109,   110,   111,   112,   113,   114,     0,     0,     0,
       0,    -6,     0,     4,     0,     0,     0,    -6,    -6,    -6,
      -6,    -6,    -6,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    65,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,   114,     4,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   177,   262,   178,     0,     0,     0,     0,    25,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -212,     0,     0,     0,
      95,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
       4,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     4,     0,     0,     0,     0,     0,     0,     0,     0,
     260,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,   145,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     4,     0,     0,
       0,   238,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     4,     0,
      78,     0,    57,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,   326,   262,   178,     4,     0,
       0,     0,    25,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,   322,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   270,     4,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23
};

static const yytype_int16 yycheck[] =
{
       1,    63,    63,    25,    62,   163,    36,   118,    96,   180,
     137,    78,     3,     3,     3,     3,    82,    32,     3,    70,
      86,    37,    17,    70,     0,    47,   158,    28,    29,    70,
      83,    55,    33,    70,   192,    32,    37,    88,   170,    86,
      41,   250,   104,   105,   106,    86,    24,     3,    34,    27,
       3,    88,    68,    89,    90,    70,   118,    81,    82,    83,
      70,    62,    86,     3,    68,    51,    70,    68,    12,    13,
     137,   133,   133,    70,    96,    61,    65,    65,    88,   133,
      65,    59,    67,    72,    72,   147,   147,    72,    83,   247,
     143,   153,   153,   147,    80,    84,    87,    87,    76,   153,
      87,    25,    66,    89,    90,   314,    70,    85,     3,    65,
      51,   243,    65,   245,    67,    66,   178,   178,    96,   143,
      34,   187,   280,    47,   178,    65,    65,   193,    67,   261,
      66,    55,    72,    72,    70,    79,    80,    51,     7,     8,
       9,    87,   300,    85,   206,   207,    86,    61,    89,    90,
     180,   309,   310,   215,   312,   177,   327,    81,    82,    83,
      46,    47,    86,   187,    70,    65,    80,    67,    70,   193,
     237,   282,   283,   284,   301,   307,   177,    70,    84,    66,
     242,   242,    85,   184,    86,   273,    72,    66,   242,   175,
     176,    70,    65,    86,    67,    65,    65,    67,    67,   177,
      69,   359,   360,   289,   290,   291,   292,   269,   269,    66,
     268,    72,   279,    70,    66,   269,    77,    78,    70,   143,
     282,   283,   284,   285,   286,   357,    70,   289,   290,   291,
     292,   293,   294,   295,   301,   297,   298,   299,    71,    66,
     372,    66,   374,    70,    81,    70,    82,   379,   380,    16,
     317,   273,   384,   364,    73,    74,    10,    11,    14,    15,
     392,    68,   240,   187,   285,   286,    84,   268,    84,   193,
     293,   294,     3,     4,     5,     6,    84,     8,     9,   206,
     207,    31,    65,    65,    65,     3,    86,    86,     3,     3,
      66,     3,     4,     5,     6,    84,     8,     9,    58,    86,
      66,    66,   364,     3,   326,    68,    68,    66,    66,    66,
     377,    86,    65,    56,   295,   297,   378,   378,   215,   298,
      81,    76,    53,    54,    55,   326,    57,    58,    59,    60,
      61,    62,    63,    64,    65,   240,   299,    69,   134,   184,
      71,    72,    73,    74,    75,    76,     3,     4,     5,     6,
     193,     8,     9,    65,   176,    86,    87,    88,    41,    71,
      72,    73,    74,    75,    76,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    87,    88,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
       3,     4,     5,     6,    -1,     8,     9,    65,    -1,    86,
      87,    88,    -1,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    85,    28,    -1,    -1,    -1,    87,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    -1,     3,
       4,     5,     6,    65,     8,     9,    -1,    86,    87,    71,
      72,    73,    74,    75,    76,     3,     4,     5,     6,    65,
       8,     9,    -1,    -1,    86,    71,    72,    73,    74,    75,
      76,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      86,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    65,     8,     9,    68,    -1,    -1,    71,    72,    73,
      74,    75,    76,     3,     4,     5,     6,    65,     8,     9,
      68,    -1,    -1,    71,    72,    73,    74,    75,    76,     3,
       4,     5,     6,    65,     8,     9,    68,    -1,    -1,    71,
      72,    73,    74,    75,    76,    65,    66,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,     3,     4,     5,     6,    65,     8,     9,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    65,    -1,    28,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    76,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      66,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    88,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    28,    -1,    -1,
      -1,    88,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      85,    -1,    87,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    28,    -1,
      -1,    -1,    72,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    66,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,    90,     3,    28,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    65,    72,   138,   139,   142,   143,
     144,   145,   151,   154,   155,   156,   157,   186,   187,   188,
     189,   190,     3,    87,   155,   154,   157,   158,    86,   140,
     141,   155,   139,   139,     3,    87,   139,    87,   138,   139,
     170,   174,    65,    67,   156,     0,   187,     0,   186,    87,
       3,   152,   153,    66,   154,   157,    70,    86,    85,   170,
     174,    87,   143,   146,   147,   148,   154,    88,   171,   172,
     173,   155,   138,   170,     3,    66,   139,   159,   160,   161,
     162,     3,     4,     5,     6,     8,     9,    65,    68,    71,
      72,    73,    74,    75,    76,    92,    94,   100,   101,   102,
     105,   109,   112,   113,   118,   121,   123,   124,   126,   128,
     130,   137,   152,    85,    70,    88,   141,    87,   100,   130,
     133,   166,   170,   146,   148,    88,   147,    84,   149,   150,
     155,   148,     3,    53,    54,    55,    57,    58,    59,    60,
      61,    62,    63,    64,    86,   133,   135,   168,   169,   170,
     175,   176,   177,   183,   185,   174,   174,    65,    67,   155,
     157,   164,   165,    66,    70,    66,    70,    65,   100,    65,
     100,   100,    93,   103,     7,     8,     9,    65,    67,    69,
     102,    72,    77,    78,    73,    74,    10,    11,    12,    13,
      79,    80,    14,    15,    71,    81,    82,    16,    17,    83,
      68,    88,   137,   153,   166,   167,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    85,   134,    88,   137,
      70,    86,    84,    84,   137,    84,    31,    65,    65,   168,
      65,     3,    86,    86,    86,   135,    70,    86,    88,   168,
      88,   175,    66,   159,   164,    68,   137,   165,    65,    67,
      52,   161,     3,   148,   163,   135,   163,     3,    66,    96,
      95,    97,   106,   107,   108,   110,   111,   109,   109,   116,
     117,   114,   115,   119,   120,   122,   121,   125,   127,   129,
     131,    70,    88,   133,   150,   137,   168,    84,   168,   178,
     180,   135,   184,    58,   176,    86,    86,   136,    88,    66,
      66,    68,    66,   159,    68,   137,    65,   157,   164,    66,
      66,    66,    98,   133,   135,     3,   102,   102,   102,   105,
     105,   112,   112,   112,   112,   113,   113,   118,   123,   124,
     126,   135,    88,   166,   168,   135,   135,    66,   135,    65,
     176,   133,    66,    68,   104,    66,    70,    68,    84,    32,
      32,   168,    66,   135,    66,   135,   102,    99,   132,   179,
     181,   168,    66,   168,    66,   133,   130,   168,   168,    86,
     168,    56,   182,   168
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    91,    92,    92,    92,    93,    92,    94,    95,
      94,    94,    96,    94,    97,    94,    94,    94,    94,    98,
      99,    98,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   101,   101,   102,   103,   104,   102,   105,   106,
     105,   107,   105,   108,   105,   109,   110,   109,   111,   109,
     112,   112,   112,   113,   114,   113,   115,   113,   116,   113,
     117,   113,   118,   119,   118,   120,   118,   121,   122,   121,
     123,   123,   124,   125,   124,   126,   127,   126,   128,   129,
     128,   130,   131,   132,   130,   133,   133,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   136,
     135,   137,   138,   138,   139,   139,   139,   139,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   142,   142,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   144,   144,   144,   145,   145,   146,   146,   147,   148,
     148,   148,   148,   149,   149,   150,   150,   150,   151,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   156,
     156,   156,   156,   156,   156,   156,   157,   157,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   161,   162,
     162,   163,   163,   164,   164,   164,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   166,   166,   167,   167,
     168,   168,   168,   168,   168,   168,   169,   169,   169,   170,
     171,   170,   172,   170,   173,   170,   174,   174,   175,   175,
     176,   176,   178,   179,   177,   180,   181,   182,   177,   177,
     184,   183,   183,   183,   183,   185,   185,   185,   185,   185,
     186,   186,   187,   187,   188,   188,   188,   188,   190,   189
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     3,     3,     1,     1,     1,     0,     4,     1,     0,
       5,     3,     0,     5,     0,     4,     3,     2,     2,     1,
       0,     4,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     6,     1,     0,
       4,     0,     4,     0,     4,     1,     0,     4,     0,     4,
       1,     3,     3,     1,     0,     4,     0,     4,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     1,     0,     4,
       1,     3,     1,     0,     4,     1,     0,     4,     1,     0,
       4,     1,     0,     0,     7,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     2,     1,     1,     1,     2,     3,     2,
       1,     2,     1,     1,     3,     1,     2,     3,     4,     5,
       2,     1,     3,     1,     3,     1,     1,     2,     1,     1,
       3,     4,     3,     4,     4,     3,     1,     2,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     2,     1,     1,
       3,     1,     2,     1,     1,     2,     3,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       0,     4,     0,     4,     0,     5,     1,     2,     1,     2,
       1,     2,     0,     0,     7,     0,     0,     0,    10,     5,
       0,     6,     7,     6,     7,     3,     2,     2,     2,     3,
       1,     2,     1,     1,     4,     3,     3,     2,     0,     2
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
#line 1780 "grammar2.tab.c"
    break;

  case 2: /* $accept: YY_PARSE_translation_unit translation_unit $end  */
#line 39 "grammar2.y"
          {  YYACCEPT; }
#line 1786 "grammar2.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 42 "grammar2.y"
              {append_in_jsFile("( ");}
#line 1792 "grammar2.tab.c"
    break;

  case 7: /* primary_expression: '(' $@1 expression ')'  */
#line 42 "grammar2.y"
                                                       {append_in_jsFile(")");}
#line 1798 "grammar2.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 47 "grammar2.y"
                                 {append_in_jsFile("[");}
#line 1804 "grammar2.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '[' $@2 expression ']'  */
#line 47 "grammar2.y"
                                                                         {append_in_jsFile("]");}
#line 1810 "grammar2.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression '(' ')'  */
#line 48 "grammar2.y"
                                     {append_in_jsFile("()");}
#line 1816 "grammar2.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 49 "grammar2.y"
                                 {append_in_jsFile("(");}
#line 1822 "grammar2.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression '(' $@3 argument_expression_list ')'  */
#line 49 "grammar2.y"
                                                                                       {append_in_jsFile(")");}
#line 1828 "grammar2.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 50 "grammar2.y"
                                 {append_in_jsFile(".");}
#line 1834 "grammar2.tab.c"
    break;

  case 20: /* $@5: %empty  */
#line 58 "grammar2.y"
                                       {append_in_jsFile(", ");}
#line 1840 "grammar2.tab.c"
    break;

  case 28: /* unary_operator: '&'  */
#line 71 "grammar2.y"
              {append_in_jsFile("&");}
#line 1846 "grammar2.tab.c"
    break;

  case 29: /* unary_operator: '*'  */
#line 72 "grammar2.y"
              {append_in_jsFile("*");}
#line 1852 "grammar2.tab.c"
    break;

  case 30: /* unary_operator: '+'  */
#line 73 "grammar2.y"
              {append_in_jsFile("+");}
#line 1858 "grammar2.tab.c"
    break;

  case 31: /* unary_operator: '-'  */
#line 74 "grammar2.y"
              {append_in_jsFile("-");}
#line 1864 "grammar2.tab.c"
    break;

  case 32: /* unary_operator: '~'  */
#line 75 "grammar2.y"
              {append_in_jsFile("~");}
#line 1870 "grammar2.tab.c"
    break;

  case 33: /* unary_operator: '!'  */
#line 76 "grammar2.y"
              {append_in_jsFile("!");}
#line 1876 "grammar2.tab.c"
    break;

  case 35: /* $@6: %empty  */
#line 81 "grammar2.y"
              {append_in_jsFile("(");}
#line 1882 "grammar2.tab.c"
    break;

  case 36: /* $@7: %empty  */
#line 81 "grammar2.y"
                                                     {append_in_jsFile(")");}
#line 1888 "grammar2.tab.c"
    break;

  case 39: /* $@8: %empty  */
#line 86 "grammar2.y"
                                        {append_in_jsFile(" * ");}
#line 1894 "grammar2.tab.c"
    break;

  case 41: /* $@9: %empty  */
#line 87 "grammar2.y"
                                        {append_in_jsFile("/");}
#line 1900 "grammar2.tab.c"
    break;

  case 43: /* $@10: %empty  */
#line 88 "grammar2.y"
                                        {append_in_jsFile("%");}
#line 1906 "grammar2.tab.c"
    break;

  case 46: /* $@11: %empty  */
#line 93 "grammar2.y"
                                  {append_in_jsFile("+");}
#line 1912 "grammar2.tab.c"
    break;

  case 48: /* $@12: %empty  */
#line 94 "grammar2.y"
                                  {append_in_jsFile("-");}
#line 1918 "grammar2.tab.c"
    break;

  case 54: /* $@13: %empty  */
#line 105 "grammar2.y"
                                    {append_in_jsFile("<");}
#line 1924 "grammar2.tab.c"
    break;

  case 56: /* $@14: %empty  */
#line 106 "grammar2.y"
                                    {append_in_jsFile(">");}
#line 1930 "grammar2.tab.c"
    break;

  case 58: /* $@15: %empty  */
#line 107 "grammar2.y"
                                      {append_in_jsFile("<=");}
#line 1936 "grammar2.tab.c"
    break;

  case 60: /* $@16: %empty  */
#line 108 "grammar2.y"
                                      {append_in_jsFile(">=");}
#line 1942 "grammar2.tab.c"
    break;

  case 63: /* $@17: %empty  */
#line 113 "grammar2.y"
                                    {append_in_jsFile("==");}
#line 1948 "grammar2.tab.c"
    break;

  case 65: /* $@18: %empty  */
#line 114 "grammar2.y"
                                    {append_in_jsFile("!=");}
#line 1954 "grammar2.tab.c"
    break;

  case 68: /* $@19: %empty  */
#line 119 "grammar2.y"
                             {append_in_jsFile("&");}
#line 1960 "grammar2.tab.c"
    break;

  case 73: /* $@20: %empty  */
#line 129 "grammar2.y"
                                      {append_in_jsFile("|");}
#line 1966 "grammar2.tab.c"
    break;

  case 76: /* $@21: %empty  */
#line 134 "grammar2.y"
                                        {append_in_jsFile("&&");}
#line 1972 "grammar2.tab.c"
    break;

  case 79: /* $@22: %empty  */
#line 139 "grammar2.y"
                                      {append_in_jsFile("||");}
#line 1978 "grammar2.tab.c"
    break;

  case 82: /* $@23: %empty  */
#line 144 "grammar2.y"
                                    {append_in_jsFile("?");}
#line 1984 "grammar2.tab.c"
    break;

  case 83: /* $@24: %empty  */
#line 144 "grammar2.y"
                                                                            {append_in_jsFile(":");}
#line 1990 "grammar2.tab.c"
    break;

  case 87: /* assignment_operator: '='  */
#line 153 "grammar2.y"
              {append_in_jsFile("=");}
#line 1996 "grammar2.tab.c"
    break;

  case 99: /* $@25: %empty  */
#line 168 "grammar2.y"
                         {append_in_jsFile(", ");}
#line 2002 "grammar2.tab.c"
    break;

  case 209: /* compound_statement: '{' '}'  */
#line 380 "grammar2.y"
                  {append_in_jsFile("{}");}
#line 2008 "grammar2.tab.c"
    break;

  case 210: /* $@26: %empty  */
#line 381 "grammar2.y"
              {append_in_jsFile("{");}
#line 2014 "grammar2.tab.c"
    break;

  case 211: /* compound_statement: '{' $@26 statement_list '}'  */
#line 381 "grammar2.y"
                                                          {append_in_jsFile("}");}
#line 2020 "grammar2.tab.c"
    break;

  case 212: /* $@27: %empty  */
#line 382 "grammar2.y"
              {append_in_jsFile("{");}
#line 2026 "grammar2.tab.c"
    break;

  case 213: /* compound_statement: '{' $@27 declaration_list '}'  */
#line 382 "grammar2.y"
                                                            {append_in_jsFile("}");}
#line 2032 "grammar2.tab.c"
    break;

  case 214: /* $@28: %empty  */
#line 383 "grammar2.y"
              {append_in_jsFile("{");}
#line 2038 "grammar2.tab.c"
    break;

  case 215: /* compound_statement: '{' $@28 declaration_list statement_list '}'  */
#line 383 "grammar2.y"
                                                                           {append_in_jsFile("}");}
#line 2044 "grammar2.tab.c"
    break;

  case 222: /* $@29: %empty  */
#line 402 "grammar2.y"
                    {append_in_jsFile("if(");}
#line 2050 "grammar2.tab.c"
    break;

  case 223: /* $@30: %empty  */
#line 402 "grammar2.y"
                                                                 {append_in_jsFile(")");}
#line 2056 "grammar2.tab.c"
    break;

  case 225: /* $@31: %empty  */
#line 403 "grammar2.y"
                    {append_in_jsFile("if(");}
#line 2062 "grammar2.tab.c"
    break;

  case 226: /* $@32: %empty  */
#line 403 "grammar2.y"
                                                                 {append_in_jsFile(")");}
#line 2068 "grammar2.tab.c"
    break;

  case 227: /* $@33: %empty  */
#line 403 "grammar2.y"
                                                                                                         {append_in_jsFile("else");}
#line 2074 "grammar2.tab.c"
    break;

  case 230: /* $@34: %empty  */
#line 408 "grammar2.y"
                    {append_in_jsFile("while(");}
#line 2080 "grammar2.tab.c"
    break;

  case 248: /* $@35: %empty  */
#line 441 "grammar2.y"
      { printf("Comenzando a traducir a JavaScript\n"); create_output_file(); }
#line 2086 "grammar2.tab.c"
    break;

  case 249: /* program: $@35 translation_unit  */
#line 441 "grammar2.y"
                                                                                                 { close_output_file(); }
#line 2092 "grammar2.tab.c"
    break;


#line 2096 "grammar2.tab.c"

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

#line 443 "grammar2.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la línea %d\n", message, yylineno);
    return -1;
}
