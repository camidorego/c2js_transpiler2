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
#line 1 "grammar3.y"

#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
int yyerror(char *message);
extern int yylineno;


#line 83 "grammar3.tab.c"

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

#include "grammar3.tab.h"
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
  YYSYMBOL_PTR_OP = 6,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 7,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 8,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 9,                    /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 10,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 11,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 12,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 13,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 14,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 15,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 16,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 17,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 18,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 19,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 20,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 21,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 22,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 23,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 24,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 25,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 26,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 27,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 28,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 29,                    /* EXTERN  */
  YYSYMBOL_STATIC = 30,                    /* STATIC  */
  YYSYMBOL_AUTO = 31,                      /* AUTO  */
  YYSYMBOL_REGISTER = 32,                  /* REGISTER  */
  YYSYMBOL_CHAR = 33,                      /* CHAR  */
  YYSYMBOL_SHORT = 34,                     /* SHORT  */
  YYSYMBOL_INT = 35,                       /* INT  */
  YYSYMBOL_LONG = 36,                      /* LONG  */
  YYSYMBOL_SIGNED = 37,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 38,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 39,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 40,                    /* DOUBLE  */
  YYSYMBOL_CONST = 41,                     /* CONST  */
  YYSYMBOL_VOLATILE = 42,                  /* VOLATILE  */
  YYSYMBOL_VOID = 43,                      /* VOID  */
  YYSYMBOL_STRUCT = 44,                    /* STRUCT  */
  YYSYMBOL_UNION = 45,                     /* UNION  */
  YYSYMBOL_ENUM = 46,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 47,                  /* ELLIPSIS  */
  YYSYMBOL_PRINTF = 48,                    /* PRINTF  */
  YYSYMBOL_CASE = 49,                      /* CASE  */
  YYSYMBOL_DEFAULT = 50,                   /* DEFAULT  */
  YYSYMBOL_IF = 51,                        /* IF  */
  YYSYMBOL_ELSE = 52,                      /* ELSE  */
  YYSYMBOL_SWITCH = 53,                    /* SWITCH  */
  YYSYMBOL_WHILE = 54,                     /* WHILE  */
  YYSYMBOL_DO = 55,                        /* DO  */
  YYSYMBOL_FOR = 56,                       /* FOR  */
  YYSYMBOL_GOTO = 57,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 58,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 59,                     /* BREAK  */
  YYSYMBOL_RETURN = 60,                    /* RETURN  */
  YYSYMBOL_61_ = 61,                       /* '('  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_63_ = 63,                       /* '['  */
  YYSYMBOL_64_ = 64,                       /* ']'  */
  YYSYMBOL_65_ = 65,                       /* ','  */
  YYSYMBOL_66_ = 66,                       /* '*'  */
  YYSYMBOL_67_ = 67,                       /* '/'  */
  YYSYMBOL_68_ = 68,                       /* '%'  */
  YYSYMBOL_69_ = 69,                       /* '+'  */
  YYSYMBOL_70_ = 70,                       /* '-'  */
  YYSYMBOL_71_ = 71,                       /* '<'  */
  YYSYMBOL_72_ = 72,                       /* '>'  */
  YYSYMBOL_73_ = 73,                       /* '?'  */
  YYSYMBOL_74_ = 74,                       /* ':'  */
  YYSYMBOL_75_ = 75,                       /* '='  */
  YYSYMBOL_76_ = 76,                       /* ';'  */
  YYSYMBOL_77_ = 77,                       /* '{'  */
  YYSYMBOL_78_ = 78,                       /* '}'  */
  YYSYMBOL_YY_PARSE_translation_unit = 79, /* YY_PARSE_translation_unit  */
  YYSYMBOL_YY_PARSE_program = 80,          /* YY_PARSE_program  */
  YYSYMBOL_YYACCEPT = 81,                  /* $accept  */
  YYSYMBOL_primary_expression = 82,        /* primary_expression  */
  YYSYMBOL_83_1 = 83,                      /* $@1  */
  YYSYMBOL_postfix_expression = 84,        /* postfix_expression  */
  YYSYMBOL_85_2 = 85,                      /* $@2  */
  YYSYMBOL_86_3 = 86,                      /* $@3  */
  YYSYMBOL_argument_expression_list = 87,  /* argument_expression_list  */
  YYSYMBOL_88_4 = 88,                      /* $@4  */
  YYSYMBOL_multiplicative_expression = 89, /* multiplicative_expression  */
  YYSYMBOL_90_5 = 90,                      /* $@5  */
  YYSYMBOL_91_6 = 91,                      /* $@6  */
  YYSYMBOL_92_7 = 92,                      /* $@7  */
  YYSYMBOL_additive_expression = 93,       /* additive_expression  */
  YYSYMBOL_94_8 = 94,                      /* $@8  */
  YYSYMBOL_95_9 = 95,                      /* $@9  */
  YYSYMBOL_relational_expression = 96,     /* relational_expression  */
  YYSYMBOL_97_10 = 97,                     /* $@10  */
  YYSYMBOL_98_11 = 98,                     /* $@11  */
  YYSYMBOL_99_12 = 99,                     /* $@12  */
  YYSYMBOL_100_13 = 100,                   /* $@13  */
  YYSYMBOL_equality_expression = 101,      /* equality_expression  */
  YYSYMBOL_102_14 = 102,                   /* $@14  */
  YYSYMBOL_103_15 = 103,                   /* $@15  */
  YYSYMBOL_logical_and_expression = 104,   /* logical_and_expression  */
  YYSYMBOL_105_16 = 105,                   /* $@16  */
  YYSYMBOL_logical_or_expression = 106,    /* logical_or_expression  */
  YYSYMBOL_107_17 = 107,                   /* $@17  */
  YYSYMBOL_conditional_expression = 108,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 109,    /* assignment_expression  */
  YYSYMBOL_110_18 = 110,                   /* $@18  */
  YYSYMBOL_expression = 111,               /* expression  */
  YYSYMBOL_112_19 = 112,                   /* $@19  */
  YYSYMBOL_113_20 = 113,                   /* $@20  */
  YYSYMBOL_constant_expression = 114,      /* constant_expression  */
  YYSYMBOL_declaration = 115,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 116,   /* declaration_specifiers  */
  YYSYMBOL_117_21 = 117,                   /* $@21  */
  YYSYMBOL_init_declarator_list = 118,     /* init_declarator_list  */
  YYSYMBOL_119_22 = 119,                   /* $@22  */
  YYSYMBOL_init_declarator = 120,          /* init_declarator  */
  YYSYMBOL_121_23 = 121,                   /* $@23  */
  YYSYMBOL_type_specifier = 122,           /* type_specifier  */
  YYSYMBOL_declarator = 123,               /* declarator  */
  YYSYMBOL_124_24 = 124,                   /* $@24  */
  YYSYMBOL_125_25 = 125,                   /* $@25  */
  YYSYMBOL_126_26 = 126,                   /* $@26  */
  YYSYMBOL_parameter_list = 127,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 128,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 129,          /* identifier_list  */
  YYSYMBOL_initializer = 130,              /* initializer  */
  YYSYMBOL_131_27 = 131,                   /* $@27  */
  YYSYMBOL_initializer_list = 132,         /* initializer_list  */
  YYSYMBOL_statement = 133,                /* statement  */
  YYSYMBOL_compound_statement = 134,       /* compound_statement  */
  YYSYMBOL_135_28 = 135,                   /* $@28  */
  YYSYMBOL_compound_statement_helper = 136, /* compound_statement_helper  */
  YYSYMBOL_declaration_list = 137,         /* declaration_list  */
  YYSYMBOL_statement_list = 138,           /* statement_list  */
  YYSYMBOL_expression_statement = 139,     /* expression_statement  */
  YYSYMBOL_selection_statement = 140,      /* selection_statement  */
  YYSYMBOL_141_29 = 141,                   /* $@29  */
  YYSYMBOL_142_30 = 142,                   /* $@30  */
  YYSYMBOL_else_statement = 143,           /* else_statement  */
  YYSYMBOL_144_31 = 144,                   /* $@31  */
  YYSYMBOL_iteration_statement = 145,      /* iteration_statement  */
  YYSYMBOL_146_32 = 146,                   /* $@32  */
  YYSYMBOL_147_33 = 147,                   /* $@33  */
  YYSYMBOL_jump_statement = 148,           /* jump_statement  */
  YYSYMBOL_149_34 = 149,                   /* $@34  */
  YYSYMBOL_translation_unit = 150,         /* translation_unit  */
  YYSYMBOL_external_declaration = 151,     /* external_declaration  */
  YYSYMBOL_function_definition = 152,      /* function_definition  */
  YYSYMBOL_153_35 = 153,                   /* $@35  */
  YYSYMBOL_154_36 = 154,                   /* $@36  */
  YYSYMBOL_155_37 = 155,                   /* $@37  */
  YYSYMBOL_156_38 = 156,                   /* $@38  */
  YYSYMBOL_157_39 = 157,                   /* $@39  */
  YYSYMBOL_program = 158,                  /* program  */
  YYSYMBOL_159_40 = 159                    /* $@40  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  215

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


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
       2,     2,     2,     2,     2,     2,     2,    68,     2,     2,
      61,    62,    66,    69,    65,    70,     2,    67,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,    76,
      71,    75,    72,    73,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     2,    78,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    79,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    41,    42,    43,    44,    44,    48,    49,
      49,    50,    50,    54,    55,    55,    56,    60,    61,    61,
      62,    62,    63,    63,    67,    68,    68,    69,    69,    73,
      74,    74,    75,    75,    76,    76,    77,    77,    81,    82,
      82,    83,    83,    87,    88,    88,    92,    93,    93,    97,
      98,   102,   103,   103,   107,   108,   108,   109,   109,   113,
     114,   118,   119,   123,   123,   124,   125,   129,   130,   130,
     131,   135,   136,   136,   140,   141,   142,   143,   144,   148,
     149,   149,   150,   150,   151,   151,   156,   157,   158,   162,
     163,   167,   168,   172,   173,   173,   177,   178,   179,   183,
     184,   185,   186,   187,   188,   192,   192,   196,   197,   198,
     203,   204,   205,   209,   210,   214,   215,   219,   219,   219,
     223,   223,   224,   228,   228,   228,   232,   233,   233,   237,
     238,   242,   243,   247,   247,   247,   248,   248,   249,   249,
     249,   254,   254
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
  "CONSTANT", "STRING_LITERAL", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "PRINTF",
  "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "','", "'*'",
  "'/'", "'%'", "'+'", "'-'", "'<'", "'>'", "'?'", "':'", "'='", "';'",
  "'{'", "'}'", "YY_PARSE_translation_unit", "YY_PARSE_program", "$accept",
  "primary_expression", "$@1", "postfix_expression", "$@2", "$@3",
  "argument_expression_list", "$@4", "multiplicative_expression", "$@5",
  "$@6", "$@7", "additive_expression", "$@8", "$@9",
  "relational_expression", "$@10", "$@11", "$@12", "$@13",
  "equality_expression", "$@14", "$@15", "logical_and_expression", "$@16",
  "logical_or_expression", "$@17", "conditional_expression",
  "assignment_expression", "$@18", "expression", "$@19", "$@20",
  "constant_expression", "declaration", "declaration_specifiers", "$@21",
  "init_declarator_list", "$@22", "init_declarator", "$@23",
  "type_specifier", "declarator", "$@24", "$@25", "$@26", "parameter_list",
  "parameter_declaration", "identifier_list", "initializer", "$@27",
  "initializer_list", "statement", "compound_statement", "$@28",
  "compound_statement_helper", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "$@29", "$@30",
  "else_statement", "$@31", "iteration_statement", "$@32", "$@33",
  "jump_statement", "$@34", "translation_unit", "external_declaration",
  "function_definition", "$@35", "$@36", "$@37", "$@38", "$@39", "program",
  "$@40", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-143)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     102,    98,  -110,     7,  -110,  -110,  -110,  -110,   263,  -110,
    -110,     6,  -110,   227,  -110,  -110,    73,    98,  -110,   263,
       5,    19,     8,    34,  -110,   -32,   263,  -110,  -110,  -110,
     243,    -5,  -110,  -110,  -110,    -1,  -110,    15,   254,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,    15,   151,   254,    86,
    -110,    15,   -38,  -110,    29,    15,   254,    10,     2,  -110,
    -110,  -110,   -18,  -110,    60,  -110,   263,   129,  -110,   -13,
    -110,  -110,  -110,  -110,  -110,    64,   133,   109,    46,   194,
      96,    36,  -110,    89,  -110,   -15,  -110,  -110,  -110,   111,
    -110,    -5,  -110,  -110,  -110,    17,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
      17,    10,  -110,     2,  -110,    62,  -110,    81,   122,    84,
    -110,  -110,    43,  -110,  -110,    91,   163,   171,  -110,  -110,
    -110,  -110,    -5,   151,    78,    10,    17,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,   -20,
      96,  -110,   -46,    10,   171,    10,  -110,  -110,  -110,    17,
    -110,  -110,  -110,   171,  -110,   151,  -110,  -110,    99,  -110,
     145,    64,    64,    64,   133,   133,   109,   109,   109,   109,
      46,    46,   194,    10,     2,  -110,  -110,  -110,    64,    17,
      17,    48,    10,  -110,  -110,  -110,  -110,  -110,  -110,   108,
     115,  -110,  -110,    10,  -110,  -110,  -110,   171,   171,   141,
    -110,  -110,  -110,   171,  -110
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    66,   141,     0,    75,    76,    77,    78,    66,    74,
     132,    70,    63,    66,   129,   131,     0,    66,   136,    66,
      70,    79,   138,     0,    67,    71,    66,     2,   130,     1,
      66,    66,    65,    79,    80,    61,   133,     0,    66,    68,
      62,    84,    82,    72,    64,   110,    70,    66,    66,     0,
      91,    90,     0,    86,    88,     0,    66,    60,     0,   105,
     111,   137,     0,    81,    89,   139,    66,     0,    69,     0,
       3,     4,     5,     6,     8,    17,    24,    29,    38,    43,
      46,    49,    59,     0,    94,    17,    51,    93,    73,    66,
     134,    66,    87,    92,    85,     0,    11,     9,    18,    20,
      22,    25,    27,    34,    36,    30,    32,    39,    41,    44,
       0,     0,    83,    98,    52,     3,    57,     0,     0,   127,
     115,    54,     0,   113,   100,     0,    66,   107,   101,   102,
     103,   104,    66,    66,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    96,     0,     0,     0,     0,   117,   123,   126,     0,
      55,   116,   106,   109,   114,    66,   140,     7,     0,    13,
       0,    19,    21,    23,    26,    28,    35,    37,    31,    33,
      40,    42,    45,     0,     0,    95,    53,    99,    58,     0,
       0,     0,     0,   135,    12,    14,    10,    50,    97,     0,
       0,   128,    56,     0,   118,   124,    15,     0,     0,   122,
     125,   120,   119,     0,   121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,   -55,  -110,  -110,  -110,  -110,    72,  -110,
    -110,  -110,    13,  -110,  -110,    69,  -110,  -110,  -110,  -110,
      37,  -110,  -110,    94,  -110,  -110,  -110,   -54,   -58,  -110,
     -85,  -110,  -110,  -110,   -30,   225,  -110,   175,  -110,   142,
    -110,  -110,   -14,  -110,  -110,  -110,    -6,   152,  -110,  -109,
    -110,  -110,  -101,   -35,  -110,  -110,    31,    95,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,   203,
       3,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    74,    95,    85,   136,   135,   168,   203,    76,   137,
     138,   139,    77,   140,   141,    78,   144,   145,   142,   143,
      79,   146,   147,    80,   148,    81,   111,    86,   121,   153,
     122,   192,   155,    83,    10,    46,    26,    23,    55,    24,
      58,    12,    25,    37,    57,    56,    52,    53,    54,    88,
     113,   152,   123,   124,    89,   125,    47,   127,   128,   129,
     189,   207,   212,   213,   130,   190,   208,   131,   159,    13,
      14,    15,    48,   132,    31,    38,    91,    16,    17
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      87,    45,    75,    82,   151,    70,    71,    72,    33,    21,
     134,   -80,    61,    70,    71,    72,    28,    60,    33,   184,
      70,    71,    72,    49,    65,   149,   164,    66,     4,    41,
       5,    42,   185,    28,     6,     7,     8,    64,     9,   -47,
     -47,   -47,    62,    43,    90,   160,    96,    66,    97,    94,
      69,   170,    66,   187,   183,    87,    75,   103,   104,    45,
     114,    45,   164,    73,    39,   116,    34,    22,    18,   -80,
     -65,    73,  -112,    29,   191,   198,    34,   169,    73,    84,
      36,   -65,   171,   172,   173,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    67,   186,    60,   -47,   166,    39,
     188,     3,    45,    60,   199,   200,   209,   210,   160,   110,
      40,   109,   214,   160,   115,    71,    72,   105,   106,   161,
     126,    41,   133,    42,   201,    96,    87,    97,    75,   197,
     193,     4,    93,     5,   202,    60,   154,     6,     7,     8,
     167,     9,   156,   160,     4,   206,     5,    41,    63,    42,
       6,     7,     8,   112,     9,   176,   177,   178,   179,   116,
     158,   194,   117,   165,   195,   118,   115,    71,    72,   162,
     204,   119,    73,   160,   115,    71,    72,   205,   101,   102,
     160,     1,     2,   157,     4,   182,     5,   120,    59,  -112,
       6,     7,     8,   211,     9,    35,     4,    68,     5,    98,
      99,   100,     6,     7,     8,   150,     9,   107,   108,   196,
     160,   116,   174,   175,   117,   180,   181,   118,    92,   116,
      30,   163,   117,   119,    73,   118,    11,    27,    59,     0,
       3,   119,    73,    20,     0,     0,     0,     0,    11,   120,
      59,  -108,    11,  -142,    32,     0,     3,   120,    59,     0,
       0,    44,     0,     0,     0,    11,     0,    50,     0,     0,
       4,     0,     5,    51,     0,     0,     6,     7,     8,     0,
       9,     0,     0,    51,     0,     0,     4,     0,     5,     0,
       0,    51,     6,     7,     8,     0,     9,     4,     0,     5,
       0,    51,     0,     6,     7,    19,     4,     9,     5,     0,
       0,     0,     6,     7,    19,     0,     9
};

static const yytype_int16 yycheck[] =
{
      58,    31,    57,    57,   113,     3,     4,     5,     3,     3,
      95,     3,    47,     3,     4,     5,    13,    47,     3,    65,
       3,     4,     5,    37,    62,   110,   127,    65,    33,    61,
      35,    63,    78,    30,    39,    40,    41,    51,    43,     3,
       4,     5,    48,    75,    62,    65,    61,    65,    63,    62,
      56,   136,    65,   154,    74,   113,   111,    11,    12,    89,
      75,    91,   163,    61,    65,    48,    61,    61,    61,    61,
      65,    61,    77,     0,   159,   184,    61,   135,    61,    77,
      61,    76,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    65,   153,   126,    61,   133,    65,
     155,     3,   132,   133,   189,   190,   207,   208,    65,    73,
      76,    15,   213,    65,     3,     4,     5,    71,    72,    76,
      89,    61,    91,    63,    76,    61,   184,    63,   183,   183,
     165,    33,     3,    35,   192,   165,    74,    39,    40,    41,
      62,    43,    61,    65,    33,   203,    35,    61,    62,    63,
      39,    40,    41,    64,    43,   142,   143,   144,   145,    48,
      76,    62,    51,   132,    65,    54,     3,     4,     5,    78,
      62,    60,    61,    65,     3,     4,     5,    62,    69,    70,
      65,    79,    80,    61,    33,   148,    35,    76,    77,    78,
      39,    40,    41,    52,    43,    20,    33,    55,    35,    66,
      67,    68,    39,    40,    41,   111,    43,    13,    14,    64,
      65,    48,   140,   141,    51,   146,   147,    54,    66,    48,
      17,   126,    51,    60,    61,    54,     1,     0,    77,    -1,
       3,    60,    61,     8,    -1,    -1,    -1,    -1,    13,    76,
      77,    78,    17,     0,    19,    -1,     3,    76,    77,    -1,
      -1,    26,    -1,    -1,    -1,    30,    -1,     3,    -1,    -1,
      33,    -1,    35,    38,    -1,    -1,    39,    40,    41,    -1,
      43,    -1,    -1,    48,    -1,    -1,    33,    -1,    35,    -1,
      -1,    56,    39,    40,    41,    -1,    43,    33,    -1,    35,
      -1,    66,    -1,    39,    40,    41,    33,    43,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    79,    80,     3,    33,    35,    39,    40,    41,    43,
     115,   116,   122,   150,   151,   152,   158,   159,    61,    41,
     116,     3,    61,   118,   120,   123,   117,     0,   151,     0,
     150,   155,   116,     3,    61,   118,    61,   124,   156,    65,
      76,    61,    63,    75,   116,   115,   116,   137,   153,   123,
       3,   116,   127,   128,   129,   119,   126,   125,   121,    77,
     115,   134,   127,    62,   123,    62,    65,    65,   120,   127,
       3,     4,     5,    61,    82,    84,    89,    93,    96,   101,
     104,   106,   108,   114,    77,    84,   108,   109,   130,   135,
      62,   157,   128,     3,    62,    83,    61,    63,    66,    67,
      68,    69,    70,    11,    12,    71,    72,    13,    14,    15,
      73,   107,    64,   131,    75,     3,    48,    51,    54,    60,
      76,   109,   111,   133,   134,   136,   137,   138,   139,   140,
     145,   148,   154,   137,   111,    86,    85,    90,    91,    92,
      94,    95,    99,   100,    97,    98,   102,   103,   105,   111,
     104,   130,   132,   110,    74,   113,    61,    61,    76,   149,
      65,    76,    78,   138,   133,   137,   134,    62,    87,   109,
     111,    84,    84,    84,    89,    89,    93,    93,    93,    93,
      96,    96,   101,    74,    65,    78,   109,   133,    84,   141,
     146,   111,   112,   134,    62,    65,    64,   108,   130,   111,
     111,    76,   109,    88,    62,    62,   109,   142,   147,   133,
     133,    52,   143,   144,   133
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    81,    82,    82,    82,    83,    82,    84,    85,
      84,    86,    84,    87,    88,    87,    87,    89,    90,    89,
      91,    89,    92,    89,    93,    94,    93,    95,    93,    96,
      97,    96,    98,    96,    99,    96,   100,    96,   101,   102,
     101,   103,   101,   104,   105,   104,   106,   107,   106,   108,
     108,   109,   110,   109,   111,   112,   111,   113,   111,   114,
     114,   115,   115,   117,   116,   116,   116,   118,   119,   118,
     118,   120,   121,   120,   122,   122,   122,   122,   122,   123,
     124,   123,   125,   123,   126,   123,   127,   127,   127,   128,
     128,   129,   129,   130,   131,   130,   132,   132,   132,   133,
     133,   133,   133,   133,   133,   135,   134,   136,   136,   136,
     137,   137,   137,   138,   138,   139,   139,   141,   142,   140,
     144,   143,   143,   146,   147,   145,   148,   149,   148,   150,
     150,   151,   151,   153,   154,   152,   155,   152,   156,   157,
     152,   159,   158
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     3,     3,     1,     1,     1,     0,     4,     1,     0,
       5,     0,     5,     1,     0,     4,     0,     1,     0,     4,
       0,     4,     0,     4,     1,     0,     4,     0,     4,     1,
       0,     4,     0,     4,     0,     4,     0,     4,     1,     0,
       4,     0,     4,     1,     0,     4,     1,     0,     3,     1,
       5,     1,     0,     4,     1,     0,     4,     0,     3,     1,
       0,     3,     3,     0,     3,     2,     0,     1,     0,     4,
       0,     1,     0,     4,     1,     1,     1,     1,     1,     1,
       0,     4,     0,     5,     0,     5,     1,     3,     1,     2,
       1,     1,     3,     1,     0,     4,     1,     3,     0,     3,
       1,     1,     1,     1,     1,     0,     4,     1,     1,     2,
       1,     2,     0,     1,     2,     1,     2,     0,     0,     8,
       0,     3,     0,     0,     0,     7,     2,     0,     4,     1,
       2,     1,     1,     0,     0,     9,     0,     5,     0,     0,
       8,     0,     2
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
#line 41 "grammar3.y"
          {  YYACCEPT; }
#line 1462 "grammar3.tab.c"
    break;

  case 2: /* $accept: YY_PARSE_translation_unit translation_unit $end  */
#line 41 "grammar3.y"
          {  YYACCEPT; }
#line 1468 "grammar3.tab.c"
    break;

  case 3: /* primary_expression: IDENTIFIER  */
#line 41 "grammar3.y"
                     {append_in_jsFile(yylval.str);}
#line 1474 "grammar3.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 43 "grammar3.y"
                         {append_in_jsFile(yylval.var_name);}
#line 1480 "grammar3.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 44 "grammar3.y"
              {append_in_jsFile("(");}
#line 1486 "grammar3.tab.c"
    break;

  case 7: /* primary_expression: '(' $@1 expression ')'  */
#line 44 "grammar3.y"
                                                      {append_in_jsFile(")");}
#line 1492 "grammar3.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 49 "grammar3.y"
                             {append_in_jsFile("[");}
#line 1498 "grammar3.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '[' $@2 expression ']'  */
#line 49 "grammar3.y"
                                                                     {append_in_jsFile("]");}
#line 1504 "grammar3.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 50 "grammar3.y"
                                 {append_in_jsFile("(");}
#line 1510 "grammar3.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression '(' $@3 argument_expression_list ')'  */
#line 50 "grammar3.y"
                                                                                       {append_in_jsFile(")");}
#line 1516 "grammar3.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 55 "grammar3.y"
                                       {append_in_jsFile(", ");}
#line 1522 "grammar3.tab.c"
    break;

  case 18: /* $@5: %empty  */
#line 61 "grammar3.y"
                                        {append_in_jsFile("*");}
#line 1528 "grammar3.tab.c"
    break;

  case 20: /* $@6: %empty  */
#line 62 "grammar3.y"
                                        {append_in_jsFile("/");}
#line 1534 "grammar3.tab.c"
    break;

  case 22: /* $@7: %empty  */
#line 63 "grammar3.y"
                                        {append_in_jsFile("%");}
#line 1540 "grammar3.tab.c"
    break;

  case 25: /* $@8: %empty  */
#line 68 "grammar3.y"
                                  {append_in_jsFile("+");}
#line 1546 "grammar3.tab.c"
    break;

  case 27: /* $@9: %empty  */
#line 69 "grammar3.y"
                                  {append_in_jsFile("-");}
#line 1552 "grammar3.tab.c"
    break;

  case 30: /* $@10: %empty  */
#line 74 "grammar3.y"
                                    {append_in_jsFile("<");}
#line 1558 "grammar3.tab.c"
    break;

  case 32: /* $@11: %empty  */
#line 75 "grammar3.y"
                                    {append_in_jsFile(">");}
#line 1564 "grammar3.tab.c"
    break;

  case 34: /* $@12: %empty  */
#line 76 "grammar3.y"
                                      {append_in_jsFile("<=");}
#line 1570 "grammar3.tab.c"
    break;

  case 36: /* $@13: %empty  */
#line 77 "grammar3.y"
                                      {append_in_jsFile(">=");}
#line 1576 "grammar3.tab.c"
    break;

  case 39: /* $@14: %empty  */
#line 82 "grammar3.y"
                                    {append_in_jsFile("==");}
#line 1582 "grammar3.tab.c"
    break;

  case 41: /* $@15: %empty  */
#line 83 "grammar3.y"
                                    {append_in_jsFile("!=");}
#line 1588 "grammar3.tab.c"
    break;

  case 44: /* $@16: %empty  */
#line 88 "grammar3.y"
                                        {append_in_jsFile("&&");}
#line 1594 "grammar3.tab.c"
    break;

  case 47: /* $@17: %empty  */
#line 93 "grammar3.y"
                                 {append_in_jsFile("||");}
#line 1600 "grammar3.tab.c"
    break;

  case 52: /* $@18: %empty  */
#line 103 "grammar3.y"
                                 {append_in_jsFile("=");}
#line 1606 "grammar3.tab.c"
    break;

  case 55: /* $@19: %empty  */
#line 108 "grammar3.y"
                         {append_in_jsFile(", ");}
#line 1612 "grammar3.tab.c"
    break;

  case 57: /* $@20: %empty  */
#line 109 "grammar3.y"
                 {append_in_jsFile("console.log");}
#line 1618 "grammar3.tab.c"
    break;

  case 62: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 119 "grammar3.y"
                                                          {append_in_jsFile("\n");}
#line 1624 "grammar3.tab.c"
    break;

  case 63: /* $@21: %empty  */
#line 123 "grammar3.y"
                         {append_in_jsFile("let ");}
#line 1630 "grammar3.tab.c"
    break;

  case 68: /* $@22: %empty  */
#line 130 "grammar3.y"
                                   {append_in_jsFile(", ");}
#line 1636 "grammar3.tab.c"
    break;

  case 72: /* $@23: %empty  */
#line 136 "grammar3.y"
                         {append_in_jsFile("=");}
#line 1642 "grammar3.tab.c"
    break;

  case 80: /* $@24: %empty  */
#line 149 "grammar3.y"
              {append_in_jsFile("(");}
#line 1648 "grammar3.tab.c"
    break;

  case 81: /* declarator: '(' $@24 declarator ')'  */
#line 149 "grammar3.y"
                                                      {append_in_jsFile(")");}
#line 1654 "grammar3.tab.c"
    break;

  case 82: /* $@25: %empty  */
#line 150 "grammar3.y"
                         {append_in_jsFile("[");}
#line 1660 "grammar3.tab.c"
    break;

  case 83: /* declarator: declarator '[' $@25 constant_expression ']'  */
#line 150 "grammar3.y"
                                                                          {append_in_jsFile("]");}
#line 1666 "grammar3.tab.c"
    break;

  case 84: /* $@26: %empty  */
#line 151 "grammar3.y"
                         {append_in_jsFile("(");}
#line 1672 "grammar3.tab.c"
    break;

  case 85: /* declarator: declarator '(' $@26 parameter_list ')'  */
#line 151 "grammar3.y"
                                                                     {append_in_jsFile(")");}
#line 1678 "grammar3.tab.c"
    break;

  case 94: /* $@27: %empty  */
#line 173 "grammar3.y"
              {append_in_jsFile("{ \n");}
#line 1684 "grammar3.tab.c"
    break;

  case 95: /* initializer: '{' $@27 initializer_list '}'  */
#line 173 "grammar3.y"
                                                               {append_in_jsFile("\n }");}
#line 1690 "grammar3.tab.c"
    break;

  case 105: /* $@28: %empty  */
#line 192 "grammar3.y"
              {append_in_jsFile("{ \n");}
#line 1696 "grammar3.tab.c"
    break;

  case 106: /* compound_statement: '{' $@28 compound_statement_helper '}'  */
#line 192 "grammar3.y"
                                                                        {append_in_jsFile("\n }");}
#line 1702 "grammar3.tab.c"
    break;

  case 117: /* $@29: %empty  */
#line 219 "grammar3.y"
                 {append_in_jsFile("\nif(");}
#line 1708 "grammar3.tab.c"
    break;

  case 118: /* $@30: %empty  */
#line 219 "grammar3.y"
                                                             {append_in_jsFile(")");}
#line 1714 "grammar3.tab.c"
    break;

  case 120: /* $@31: %empty  */
#line 223 "grammar3.y"
           {append_in_jsFile("else");}
#line 1720 "grammar3.tab.c"
    break;

  case 123: /* $@32: %empty  */
#line 228 "grammar3.y"
                    {append_in_jsFile("while(");}
#line 1726 "grammar3.tab.c"
    break;

  case 124: /* $@33: %empty  */
#line 228 "grammar3.y"
                                                                 {append_in_jsFile(")");}
#line 1732 "grammar3.tab.c"
    break;

  case 126: /* jump_statement: RETURN ';'  */
#line 232 "grammar3.y"
                     {append_in_jsFile("\nreturn \n");}
#line 1738 "grammar3.tab.c"
    break;

  case 127: /* $@34: %empty  */
#line 233 "grammar3.y"
                 {append_in_jsFile("\nreturn ");}
#line 1744 "grammar3.tab.c"
    break;

  case 128: /* jump_statement: RETURN $@34 expression ';'  */
#line 233 "grammar3.y"
                                                                 {append_in_jsFile("\n");}
#line 1750 "grammar3.tab.c"
    break;

  case 133: /* $@35: %empty  */
#line 247 "grammar3.y"
                                            {append_in_jsFile("= function (");}
#line 1756 "grammar3.tab.c"
    break;

  case 134: /* $@36: %empty  */
#line 247 "grammar3.y"
                                                                                                   { append_in_jsFile(") {\n");}
#line 1762 "grammar3.tab.c"
    break;

  case 135: /* function_definition: declaration_specifiers IDENTIFIER '(' $@35 parameter_list ')' $@36 declaration_list compound_statement  */
#line 247 "grammar3.y"
                                                                                                                                                                     {append_in_jsFile("\n } \n");}
#line 1768 "grammar3.tab.c"
    break;

  case 136: /* $@37: %empty  */
#line 248 "grammar3.y"
                         {append_in_jsFile("= function (){ \n");}
#line 1774 "grammar3.tab.c"
    break;

  case 137: /* function_definition: IDENTIFIER '(' $@37 declaration_list compound_statement  */
#line 248 "grammar3.y"
                                                                                                      {append_in_jsFile("\n } \n");}
#line 1780 "grammar3.tab.c"
    break;

  case 138: /* $@38: %empty  */
#line 249 "grammar3.y"
                                 {append_in_jsFile("= function (");}
#line 1786 "grammar3.tab.c"
    break;

  case 139: /* $@39: %empty  */
#line 249 "grammar3.y"
                                                                                        { append_in_jsFile(") {\n");}
#line 1792 "grammar3.tab.c"
    break;

  case 140: /* function_definition: declaration_specifiers '(' $@38 parameter_list ')' $@39 declaration_list compound_statement  */
#line 249 "grammar3.y"
                                                                                                                                                          {append_in_jsFile("\n } \n");}
#line 1798 "grammar3.tab.c"
    break;

  case 141: /* $@40: %empty  */
#line 254 "grammar3.y"
      { printf("Comenzando a traducir a JavaScript\n"); create_output_file(); }
#line 1804 "grammar3.tab.c"
    break;

  case 142: /* program: $@40 translation_unit  */
#line 254 "grammar3.y"
                                                                                                 { close_output_file(); }
#line 1810 "grammar3.tab.c"
    break;


#line 1814 "grammar3.tab.c"

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

#line 257 "grammar3.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la línea %d\n", message, yylineno);
    return -1;
}
