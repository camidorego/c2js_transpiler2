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
  YYSYMBOL_NUMBER_LITERAL = 4,             /* NUMBER_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_QUOTED_CHAR = 6,                /* QUOTED_CHAR  */
  YYSYMBOL_NUMBER_LITERAL_DEC = 7,         /* NUMBER_LITERAL_DEC  */
  YYSYMBOL_LE_OP = 8,                      /* LE_OP  */
  YYSYMBOL_GE_OP = 9,                      /* GE_OP  */
  YYSYMBOL_EQ_OP = 10,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 11,                     /* NE_OP  */
  YYSYMBOL_GT_OP = 12,                     /* GT_OP  */
  YYSYMBOL_LT_OP = 13,                     /* LT_OP  */
  YYSYMBOL_AND_OP = 14,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 15,                     /* OR_OP  */
  YYSYMBOL_LNOT = 16,                      /* LNOT  */
  YYSYMBOL_CHAR = 17,                      /* CHAR  */
  YYSYMBOL_SHORT = 18,                     /* SHORT  */
  YYSYMBOL_INT = 19,                       /* INT  */
  YYSYMBOL_FLOAT = 20,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 21,                    /* DOUBLE  */
  YYSYMBOL_CONST = 22,                     /* CONST  */
  YYSYMBOL_VOID = 23,                      /* VOID  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_ASSIGNMENT_OP = 28,             /* ASSIGNMENT_OP  */
  YYSYMBOL_SEMICOLON = 29,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 30,                     /* COMMA  */
  YYSYMBOL_LPAREN = 31,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 32,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 33,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 34,                    /* RBRACE  */
  YYSYMBOL_LSQBRAQ = 35,                   /* LSQBRAQ  */
  YYSYMBOL_RSQBRAQ = 36,                   /* RSQBRAQ  */
  YYSYMBOL_PLUS_OP = 37,                   /* PLUS_OP  */
  YYSYMBOL_MINUS_OP = 38,                  /* MINUS_OP  */
  YYSYMBOL_MULTIPLY_OP = 39,               /* MULTIPLY_OP  */
  YYSYMBOL_DIVIDE_OP = 40,                 /* DIVIDE_OP  */
  YYSYMBOL_MOD_OP = 41,                    /* MOD_OP  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '['  */
  YYSYMBOL_45_ = 45,                       /* ']'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* '*'  */
  YYSYMBOL_48_ = 48,                       /* '/'  */
  YYSYMBOL_49_ = 49,                       /* '%'  */
  YYSYMBOL_50_ = 50,                       /* '+'  */
  YYSYMBOL_51_ = 51,                       /* '-'  */
  YYSYMBOL_52_ = 52,                       /* '<'  */
  YYSYMBOL_53_ = 53,                       /* '>'  */
  YYSYMBOL_54_ = 54,                       /* '?'  */
  YYSYMBOL_55_ = 55,                       /* ':'  */
  YYSYMBOL_56_ = 56,                       /* '='  */
  YYSYMBOL_57_ = 57,                       /* ';'  */
  YYSYMBOL_58_ = 58,                       /* '{'  */
  YYSYMBOL_59_ = 59,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_terminal = 61,                  /* terminal  */
  YYSYMBOL_62_1 = 62,                      /* $@1  */
  YYSYMBOL_extended_expression = 63,       /* extended_expression  */
  YYSYMBOL_64_2 = 64,                      /* $@2  */
  YYSYMBOL_65_3 = 65,                      /* $@3  */
  YYSYMBOL_argument_expression_list = 66,  /* argument_expression_list  */
  YYSYMBOL_67_4 = 67,                      /* $@4  */
  YYSYMBOL_cast_expression = 68,           /* cast_expression  */
  YYSYMBOL_69_5 = 69,                      /* $@5  */
  YYSYMBOL_70_6 = 70,                      /* $@6  */
  YYSYMBOL_multiplicative_expression = 71, /* multiplicative_expression  */
  YYSYMBOL_72_7 = 72,                      /* $@7  */
  YYSYMBOL_73_8 = 73,                      /* $@8  */
  YYSYMBOL_74_9 = 74,                      /* $@9  */
  YYSYMBOL_additive_expression = 75,       /* additive_expression  */
  YYSYMBOL_76_10 = 76,                     /* $@10  */
  YYSYMBOL_77_11 = 77,                     /* $@11  */
  YYSYMBOL_relational_expression = 78,     /* relational_expression  */
  YYSYMBOL_79_12 = 79,                     /* $@12  */
  YYSYMBOL_80_13 = 80,                     /* $@13  */
  YYSYMBOL_81_14 = 81,                     /* $@14  */
  YYSYMBOL_82_15 = 82,                     /* $@15  */
  YYSYMBOL_equality_expression = 83,       /* equality_expression  */
  YYSYMBOL_84_16 = 84,                     /* $@16  */
  YYSYMBOL_85_17 = 85,                     /* $@17  */
  YYSYMBOL_logical_and_expression = 86,    /* logical_and_expression  */
  YYSYMBOL_87_18 = 87,                     /* $@18  */
  YYSYMBOL_logical_or_expression = 88,     /* logical_or_expression  */
  YYSYMBOL_89_19 = 89,                     /* $@19  */
  YYSYMBOL_conditional_expression = 90,    /* conditional_expression  */
  YYSYMBOL_91_20 = 91,                     /* $@20  */
  YYSYMBOL_92_21 = 92,                     /* $@21  */
  YYSYMBOL_assignment_expression = 93,     /* assignment_expression  */
  YYSYMBOL_94_22 = 94,                     /* $@22  */
  YYSYMBOL_constant_expression = 95,       /* constant_expression  */
  YYSYMBOL_expression = 96,                /* expression  */
  YYSYMBOL_97_23 = 97,                     /* $@23  */
  YYSYMBOL_declaration = 98,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 99,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 100,     /* init_declarator_list  */
  YYSYMBOL_101_24 = 101,                   /* $@24  */
  YYSYMBOL_init_declarator = 102,          /* init_declarator  */
  YYSYMBOL_103_25 = 103,                   /* $@25  */
  YYSYMBOL_type_specifier = 104,           /* type_specifier  */
  YYSYMBOL_declarator = 105,               /* declarator  */
  YYSYMBOL_106_26 = 106,                   /* $@26  */
  YYSYMBOL_107_27 = 107,                   /* $@27  */
  YYSYMBOL_108_28 = 108,                   /* $@28  */
  YYSYMBOL_109_29 = 109,                   /* $@29  */
  YYSYMBOL_110_30 = 110,                   /* $@30  */
  YYSYMBOL_111_31 = 111,                   /* $@31  */
  YYSYMBOL_112_32 = 112,                   /* $@32  */
  YYSYMBOL_113_33 = 113,                   /* $@33  */
  YYSYMBOL_114_34 = 114,                   /* $@34  */
  YYSYMBOL_115_35 = 115,                   /* $@35  */
  YYSYMBOL_116_36 = 116,                   /* $@36  */
  YYSYMBOL_117_37 = 117,                   /* $@37  */
  YYSYMBOL_118_38 = 118,                   /* $@38  */
  YYSYMBOL_parameter_list = 119,           /* parameter_list  */
  YYSYMBOL_120_39 = 120,                   /* $@39  */
  YYSYMBOL_parameter_declaration = 121,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 122,          /* identifier_list  */
  YYSYMBOL_123_40 = 123,                   /* $@40  */
  YYSYMBOL_type_name = 124,                /* type_name  */
  YYSYMBOL_specifier_qualifier_list = 125, /* specifier_qualifier_list  */
  YYSYMBOL_abstract_declarator = 126,      /* abstract_declarator  */
  YYSYMBOL_127_41 = 127,                   /* $@41  */
  YYSYMBOL_128_42 = 128,                   /* $@42  */
  YYSYMBOL_129_43 = 129,                   /* $@43  */
  YYSYMBOL_130_44 = 130,                   /* $@44  */
  YYSYMBOL_131_45 = 131,                   /* $@45  */
  YYSYMBOL_initializer = 132,              /* initializer  */
  YYSYMBOL_133_46 = 133,                   /* $@46  */
  YYSYMBOL_134_47 = 134,                   /* $@47  */
  YYSYMBOL_initializer_list = 135,         /* initializer_list  */
  YYSYMBOL_136_48 = 136,                   /* $@48  */
  YYSYMBOL_statement = 137,                /* statement  */
  YYSYMBOL_compound_statement = 138,       /* compound_statement  */
  YYSYMBOL_139_49 = 139,                   /* $@49  */
  YYSYMBOL_140_50 = 140,                   /* $@50  */
  YYSYMBOL_141_51 = 141,                   /* $@51  */
  YYSYMBOL_declaration_list = 142,         /* declaration_list  */
  YYSYMBOL_statement_list = 143,           /* statement_list  */
  YYSYMBOL_expression_statement = 144,     /* expression_statement  */
  YYSYMBOL_selection_statement = 145,      /* selection_statement  */
  YYSYMBOL_146_52 = 146,                   /* $@52  */
  YYSYMBOL_147_53 = 147,                   /* $@53  */
  YYSYMBOL_148_54 = 148,                   /* $@54  */
  YYSYMBOL_149_55 = 149,                   /* $@55  */
  YYSYMBOL_150_56 = 150,                   /* $@56  */
  YYSYMBOL_loop_statement = 151,           /* loop_statement  */
  YYSYMBOL_152_57 = 152,                   /* $@57  */
  YYSYMBOL_153_58 = 153,                   /* $@58  */
  YYSYMBOL_jump_statement = 154,           /* jump_statement  */
  YYSYMBOL_155_59 = 155,                   /* $@59  */
  YYSYMBOL_translation_unit = 156,         /* translation_unit  */
  YYSYMBOL_external_declaration = 157,     /* external_declaration  */
  YYSYMBOL_function_definition = 158,      /* function_definition  */
  YYSYMBOL_program = 159,                  /* program  */
  YYSYMBOL_160_60 = 160                    /* $@60  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   316

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  268

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
       2,     2,     2,     2,     2,     2,     2,    49,     2,     2,
      42,    43,    47,    50,    46,    51,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,    57,
      52,    56,    53,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    33,    33,    34,    35,    36,    36,    40,    41,    41,
      42,    43,    43,    47,    48,    48,    52,    53,    53,    53,
      57,    58,    58,    59,    59,    60,    60,    64,    65,    65,
      66,    66,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    78,    79,    79,    80,    80,    84,    85,    85,    89,
      90,    90,    94,    95,    95,    95,    99,   100,   100,   104,
     108,   109,   109,   113,   117,   118,   119,   120,   124,   125,
     125,   129,   130,   130,   134,   135,   136,   137,   141,   142,
     142,   143,   143,   144,   145,   145,   145,   145,   146,   146,
     146,   146,   147,   147,   147,   147,   148,   148,   149,   149,
     150,   154,   155,   155,   159,   160,   164,   165,   165,   169,
     170,   174,   175,   176,   177,   181,   181,   182,   183,   183,
     184,   185,   185,   186,   187,   187,   188,   189,   189,   193,
     194,   194,   195,   195,   199,   200,   200,   204,   205,   206,
     207,   208,   212,   213,   213,   214,   214,   215,   215,   219,
     220,   224,   225,   229,   230,   234,   234,   234,   235,   235,
     235,   235,   239,   239,   239,   243,   244,   244,   248,   249,
     253,   254,   258,   259,   260,   261,   265,   265
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
  "NUMBER_LITERAL", "STRING_LITERAL", "QUOTED_CHAR", "NUMBER_LITERAL_DEC",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "GT_OP", "LT_OP", "AND_OP", "OR_OP",
  "LNOT", "CHAR", "SHORT", "INT", "FLOAT", "DOUBLE", "CONST", "VOID",
  "WHILE", "IF", "ELSE", "RETURN", "ASSIGNMENT_OP", "SEMICOLON", "COMMA",
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LSQBRAQ", "RSQBRAQ", "PLUS_OP",
  "MINUS_OP", "MULTIPLY_OP", "DIVIDE_OP", "MOD_OP", "'('", "')'", "'['",
  "']'", "','", "'*'", "'/'", "'%'", "'+'", "'-'", "'<'", "'>'", "'?'",
  "':'", "'='", "';'", "'{'", "'}'", "$accept", "terminal", "$@1",
  "extended_expression", "$@2", "$@3", "argument_expression_list", "$@4",
  "cast_expression", "$@5", "$@6", "multiplicative_expression", "$@7",
  "$@8", "$@9", "additive_expression", "$@10", "$@11",
  "relational_expression", "$@12", "$@13", "$@14", "$@15",
  "equality_expression", "$@16", "$@17", "logical_and_expression", "$@18",
  "logical_or_expression", "$@19", "conditional_expression", "$@20",
  "$@21", "assignment_expression", "$@22", "constant_expression",
  "expression", "$@23", "declaration", "declaration_specifiers",
  "init_declarator_list", "$@24", "init_declarator", "$@25",
  "type_specifier", "declarator", "$@26", "$@27", "$@28", "$@29", "$@30",
  "$@31", "$@32", "$@33", "$@34", "$@35", "$@36", "$@37", "$@38",
  "parameter_list", "$@39", "parameter_declaration", "identifier_list",
  "$@40", "type_name", "specifier_qualifier_list", "abstract_declarator",
  "$@41", "$@42", "$@43", "$@44", "$@45", "initializer", "$@46", "$@47",
  "initializer_list", "$@48", "statement", "compound_statement", "$@49",
  "$@50", "$@51", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "$@52", "$@53", "$@54",
  "$@55", "$@56", "loop_statement", "$@57", "$@58", "jump_statement",
  "$@59", "translation_unit", "external_declaration",
  "function_definition", "program", "$@60", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-146)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -143,    19,   232,  -143,  -143,  -143,  -143,  -143,   242,  -143,
    -143,  -143,    21,   242,   199,   232,  -143,  -143,  -143,    21,
      51,  -143,   192,  -143,    14,   -16,    39,  -143,    21,  -143,
     210,  -143,    60,  -143,  -143,  -143,  -143,   210,  -143,   242,
      32,  -143,    84,    84,    25,    33,  -143,   168,   242,   242,
      85,  -143,  -143,  -143,    21,    23,  -143,    21,   -10,  -143,
    -143,    92,  -143,  -143,  -143,    91,  -143,   164,  -143,   198,
     173,    30,   279,    29,    53,  -143,    35,    83,  -143,  -143,
    -143,   101,    90,  -143,   114,  -143,  -143,    88,  -143,  -143,
      17,  -143,  -143,  -143,  -143,   138,   127,  -143,  -143,  -143,
    -143,   186,  -143,  -143,  -143,  -143,    84,   254,   119,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,   124,   130,   149,  -143,
    -143,    84,  -143,  -143,  -143,  -143,  -143,  -143,    27,    23,
      23,   242,   209,    94,   254,   254,   176,   214,  -143,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,   218,  -143,  -143,    84,    84,
      84,    96,    84,    84,  -143,  -143,    77,   196,  -143,  -143,
    -143,  -143,  -143,  -143,   241,   193,   228,   120,  -143,   246,
    -143,  -143,  -143,   198,   198,   173,   173,   173,   173,    30,
      30,   279,    29,    54,  -143,    84,   255,   136,   194,   223,
    -143,  -143,  -143,  -143,  -143,   221,    84,  -143,   214,   242,
    -143,    84,   256,   257,  -143,  -143,  -143,  -143,    84,   258,
    -143,  -143,  -143,  -143,    23,  -143,  -143,   244,   235,   259,
    -143,   242,  -143,    84,    84,    84,   260,  -143,   168,   168,
     168,  -143,  -143,  -143,  -143,   236,   261,  -143,  -143,  -143,
    -143,  -143,   275,  -143,  -143,  -143,   168,  -143
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     176,     0,     0,     1,    78,    75,    76,    77,    67,    74,
      79,   171,     0,    65,     0,   177,   168,   170,    66,     0,
       0,    68,    71,    64,    96,    81,   143,   149,     0,   175,
       0,   169,     0,    69,    63,    72,   173,     0,   100,     0,
       0,    83,     0,     0,     0,     0,   142,     0,     0,     0,
      71,   150,   174,    80,     0,     0,   172,   105,     0,   101,
     106,     0,     2,     3,     4,    17,     7,    16,    20,    27,
      32,    41,    46,    49,    52,    59,     0,     0,    89,    93,
     162,     0,   166,   153,    16,    56,    60,     0,   151,   137,
       0,   138,   139,   140,   141,     0,     0,    70,   130,   129,
      73,   104,    97,   102,    99,   107,     0,     0,    11,     8,
      21,    23,    25,    28,    30,    37,    39,    33,    35,    42,
      44,    47,    50,    53,    82,    85,     0,     0,     0,   155,
     165,     0,    57,    61,   154,   144,   152,   146,     0,     0,
       0,     0,     0,     0,   114,   112,     0,   109,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    94,     0,     0,
       0,     0,     0,     0,   148,   134,     0,     0,   103,   108,
       6,   113,   111,    18,   124,   118,   110,     0,    13,     0,
      22,    24,    26,    29,    31,    38,    40,    34,    36,    43,
      45,    48,    51,     0,    86,     0,     0,     0,     0,     0,
     167,    58,    62,   135,   131,   135,     0,   123,     0,     0,
     117,     0,   127,   121,    12,    14,     9,    54,     0,     0,
      95,   163,   156,   159,     0,   133,    19,     0,     0,     0,
     126,     0,   120,     0,     0,     0,     0,    91,     0,     0,
       0,   136,   116,   125,   119,     0,     0,    15,    55,    87,
     164,   157,     0,   128,   122,   160,     0,   161
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,  -143,   -41,  -143,  -143,  -143,  -143,  -137,  -143,
    -143,   139,  -143,  -143,  -143,    42,  -143,  -143,   135,  -143,
    -143,  -143,  -143,   145,  -143,  -143,   146,  -143,  -143,  -143,
     -38,  -143,  -143,   -48,  -143,   -40,   -97,  -143,    10,    -2,
    -143,  -143,   262,  -143,   -99,    36,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -142,
    -143,   167,  -143,  -143,  -143,   153,    93,  -143,  -143,  -143,
    -143,  -143,   -45,  -143,  -143,   170,  -143,   -72,   230,  -143,
    -143,  -143,     1,   216,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,   298,  -143,  -143,
    -143
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    66,   106,    84,   150,   149,   187,   244,    68,   107,
     216,    69,   151,   152,   153,    70,   154,   155,    71,   158,
     159,   156,   157,    72,   160,   161,    73,   162,    74,   163,
      85,   164,   245,    86,   172,    76,    87,   173,    27,    28,
      20,    54,    21,    55,    13,    14,    19,    42,    43,   165,
     228,    44,   126,   205,    45,   127,   206,    39,    40,    58,
     141,    59,    61,   142,   146,   147,   186,   218,   221,   243,
     219,   241,   175,   139,   140,   176,   234,    88,    89,    47,
      48,    49,    30,    90,    91,    92,   169,   249,   170,   250,
     266,    93,   128,   248,    94,   131,    15,    16,    17,     1,
       2
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,    67,    67,    77,    75,    75,    18,    99,   145,   143,
     100,    23,    11,    12,   190,   191,   192,   -98,   136,     3,
      62,    63,    64,    37,     4,    11,    62,    63,    64,    41,
      62,    63,    64,   102,   171,    60,   103,    57,   115,   116,
      51,    80,    81,   121,    82,   145,   145,    51,    22,    95,
      96,    80,    81,   189,    82,    32,  -145,    38,  -145,    65,
    -145,  -145,  -145,    10,    50,    65,   136,   203,   122,    65,
      78,   207,   208,   209,    83,    26,   135,   238,    79,   236,
     124,    98,   117,   118,    83,    26,   174,    62,    63,    64,
      50,    99,    99,   101,    -5,    -5,    -5,    33,    46,   255,
     133,   188,    24,    53,    25,    51,    51,   123,    34,   227,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,   213,   211,   212,    65,    24,   125,    25,
      62,    63,    64,    -5,   133,   104,   214,   180,   105,    57,
     133,    35,   133,   129,     5,   134,     6,   130,     7,     8,
       9,    80,    81,   210,    82,     5,   108,     6,   109,     7,
       8,     9,   148,   224,    67,   229,   225,    75,   166,    65,
     132,    62,    63,    64,   167,    67,   260,   261,   262,   231,
      67,   239,   133,    75,    83,    26,    99,    67,   246,   251,
      75,   168,    80,    81,   267,    82,   257,   137,   195,   196,
     197,   198,    67,   256,    67,    75,   108,   258,   109,     5,
      65,     6,   179,     7,     8,     9,     5,    57,     6,   183,
       7,     8,     9,   113,   114,    83,    26,     5,    24,     6,
      25,     7,     8,     9,    24,     4,    25,   232,   220,    57,
     133,    24,   215,    25,    29,   110,   111,   112,    35,     5,
      26,     6,    36,     7,     8,     9,   184,    26,   185,     5,
      52,     6,   204,     7,     8,     9,   233,    56,    26,   133,
     222,     5,   223,     6,    10,     7,   144,     9,   253,   263,
     235,   103,   103,  -115,   217,  -115,   222,   252,   223,   119,
     120,   226,   133,   193,   194,   199,   200,   181,   182,   240,
     230,   265,   242,   247,   254,   259,   264,   201,   178,   202,
     177,   237,   138,    31,     0,     0,    97
};

static const yytype_int16 yycheck[] =
{
       2,    42,    43,    43,    42,    43,     8,    55,   107,   106,
      55,    13,     2,    15,   151,   152,   153,     3,    90,     0,
       3,     4,     5,    22,     3,    15,     3,     4,     5,    45,
       3,     4,     5,    43,   131,     3,    46,    39,     8,     9,
      30,    24,    25,    14,    27,   144,   145,    37,    12,    48,
      49,    24,    25,   150,    27,    19,    17,    43,    19,    42,
      21,    22,    23,    42,    28,    42,   138,   164,    15,    42,
      45,   168,   169,   170,    57,    58,    59,   219,    45,   216,
      45,    58,    52,    53,    57,    58,    59,     3,     4,     5,
      54,   139,   140,    57,     3,     4,     5,    46,    59,   241,
      46,   149,    42,    43,    44,    95,    96,    54,    57,    55,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    46,   172,   173,    42,    42,    45,    44,
       3,     4,     5,    42,    46,    43,    59,    43,    46,   141,
      46,    56,    46,    42,    17,    57,    19,    57,    21,    22,
      23,    24,    25,    57,    27,    17,    42,    19,    44,    21,
      22,    23,    43,    43,   205,   205,    46,   205,    44,    42,
      56,     3,     4,     5,    44,   216,   248,   249,   250,    43,
     221,   221,    46,   221,    57,    58,   234,   228,   228,   234,
     228,    42,    24,    25,   266,    27,   244,    59,   156,   157,
     158,   159,   243,   243,   245,   243,    42,   245,    44,    17,
      42,    19,     3,    21,    22,    23,    17,   219,    19,    43,
      21,    22,    23,    50,    51,    57,    58,    17,    42,    19,
      44,    21,    22,    23,    42,     3,    44,    43,    45,   241,
      46,    42,    46,    44,    14,    47,    48,    49,    56,    17,
      58,    19,    22,    21,    22,    23,    42,    58,    44,    17,
      30,    19,    44,    21,    22,    23,    43,    37,    58,    46,
      42,    17,    44,    19,    42,    21,    22,    23,    43,    43,
      59,    46,    46,    42,    43,    44,    42,    43,    44,    10,
      11,    45,    46,   154,   155,   160,   161,   144,   145,    43,
      45,    26,    45,    45,    45,    45,    45,   162,   141,   163,
     140,   218,    96,    15,    -1,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   159,   160,     0,     3,    17,    19,    21,    22,    23,
      42,    98,    99,   104,   105,   156,   157,   158,    99,   106,
     100,   102,   105,    99,    42,    44,    58,    98,    99,   138,
     142,   157,   105,    46,    57,    56,   138,   142,    43,   117,
     118,    45,   107,   108,   111,   114,    59,   139,   140,   141,
     105,    98,   138,    43,   101,   103,   138,    99,   119,   121,
       3,   122,     3,     4,     5,    42,    61,    63,    68,    71,
      75,    78,    83,    86,    88,    90,    95,    95,    45,    45,
      24,    25,    27,    57,    63,    90,    93,    96,   137,   138,
     143,   144,   145,   151,   154,   142,   142,   102,    58,    93,
     132,   105,    43,    46,    43,    46,    62,    69,    42,    44,
      47,    48,    49,    50,    51,     8,     9,    52,    53,    10,
      11,    14,    15,    54,    45,    45,   112,   115,   152,    42,
      57,   155,    56,    46,    57,    59,   137,    59,   143,   133,
     134,   120,   123,    96,    22,   104,   124,   125,    43,    65,
      64,    72,    73,    74,    76,    77,    81,    82,    79,    80,
      84,    85,    87,    89,    91,   109,    44,    44,    42,   146,
     148,    96,    94,    97,    59,   132,   135,   135,   121,     3,
      43,   125,   125,    43,    42,    44,   126,    66,    93,    96,
      68,    68,    68,    71,    71,    75,    75,    75,    75,    78,
      78,    83,    86,    96,    44,   113,   116,    96,    96,    96,
      57,    93,    93,    46,    59,    46,    70,    43,   127,   130,
      45,   128,    42,    44,    43,    46,    45,    55,   110,    95,
      45,    43,    43,    43,   136,    59,    68,   126,   119,    95,
      43,   131,    45,   129,    67,    92,    95,    45,   153,   147,
     149,   132,    43,    43,    45,   119,    95,    93,    90,    45,
     137,   137,   137,    43,    45,    26,   150,   137
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    61,    62,    61,    63,    64,    63,
      63,    65,    63,    66,    67,    66,    68,    69,    70,    68,
      71,    72,    71,    73,    71,    74,    71,    75,    76,    75,
      77,    75,    78,    79,    78,    80,    78,    81,    78,    82,
      78,    83,    84,    83,    85,    83,    86,    87,    86,    88,
      89,    88,    90,    91,    92,    90,    93,    94,    93,    95,
      96,    97,    96,    98,    99,    99,    99,    99,   100,   101,
     100,   102,   103,   102,   104,   104,   104,   104,   105,   106,
     105,   107,   105,   105,   108,   109,   110,   105,   111,   112,
     113,   105,   114,   115,   116,   105,   117,   105,   118,   105,
     105,   119,   120,   119,   121,   121,   122,   123,   122,   124,
     124,   125,   125,   125,   125,   127,   126,   126,   128,   126,
     126,   129,   126,   126,   130,   126,   126,   131,   126,   132,
     133,   132,   134,   132,   135,   136,   135,   137,   137,   137,
     137,   137,   138,   139,   138,   140,   138,   141,   138,   142,
     142,   143,   143,   144,   144,   146,   147,   145,   148,   149,
     150,   145,   152,   153,   151,   154,   155,   154,   156,   156,
     157,   157,   158,   158,   158,   158,   160,   159
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     0,     4,     1,     0,     5,
       3,     0,     5,     1,     0,     4,     1,     0,     0,     6,
       1,     0,     4,     0,     4,     0,     4,     1,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     0,     4,     0,
       4,     1,     0,     4,     0,     4,     1,     0,     4,     1,
       0,     4,     1,     0,     0,     7,     1,     0,     4,     1,
       1,     0,     4,     3,     2,     1,     2,     1,     1,     0,
       4,     1,     0,     4,     1,     1,     1,     1,     1,     0,
       4,     0,     5,     3,     0,     0,     0,    10,     0,     0,
       0,     9,     0,     0,     0,     8,     0,     5,     0,     5,
       3,     1,     0,     4,     2,     1,     1,     0,     4,     1,
       2,     2,     1,     2,     1,     0,     4,     2,     0,     4,
       3,     0,     5,     2,     0,     4,     3,     0,     5,     1,
       0,     4,     0,     5,     1,     0,     4,     1,     1,     1,
       1,     1,     2,     0,     4,     0,     4,     0,     5,     1,
       2,     1,     2,     1,     2,     0,     0,     7,     0,     0,
       0,    10,     0,     0,     7,     2,     0,     4,     1,     2,
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


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
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

  yychar = YYEMPTY; /* Cause a token to be read.  */

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


  if (yystate == YYFINAL)
    YYACCEPT;

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
  case 5: /* $@1: %empty  */
#line 36 "grammar2.y"
          {append_in_jsFile("( ");}
#line 1458 "grammar2.tab.c"
    break;

  case 6: /* terminal: '(' $@1 expression ')'  */
#line 36 "grammar2.y"
                                                   {append_in_jsFile(" )");}
#line 1464 "grammar2.tab.c"
    break;

  case 8: /* $@2: %empty  */
#line 41 "grammar2.y"
                              {append_in_jsFile("[ ");}
#line 1470 "grammar2.tab.c"
    break;

  case 9: /* extended_expression: extended_expression '[' $@2 expression ']'  */
#line 41 "grammar2.y"
                                                                       {append_in_jsFile(" ]");}
#line 1476 "grammar2.tab.c"
    break;

  case 10: /* extended_expression: extended_expression '(' ')'  */
#line 42 "grammar2.y"
                                  {append_in_jsFile("()");}
#line 1482 "grammar2.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 43 "grammar2.y"
                              {append_in_jsFile("( ");}
#line 1488 "grammar2.tab.c"
    break;

  case 12: /* extended_expression: extended_expression '(' $@3 argument_expression_list ')'  */
#line 43 "grammar2.y"
                                                                                     {append_in_jsFile(" )");}
#line 1494 "grammar2.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 48 "grammar2.y"
                                   {append_in_jsFile(", ");}
#line 1500 "grammar2.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 53 "grammar2.y"
          {append_in_jsFile("( ");}
#line 1506 "grammar2.tab.c"
    break;

  case 18: /* $@6: %empty  */
#line 53 "grammar2.y"
                                                  {append_in_jsFile(" )");}
#line 1512 "grammar2.tab.c"
    break;

  case 21: /* $@7: %empty  */
#line 58 "grammar2.y"
                                    {append_in_jsFile(" * ");}
#line 1518 "grammar2.tab.c"
    break;

  case 23: /* $@8: %empty  */
#line 59 "grammar2.y"
                                    {append_in_jsFile(" / ");}
#line 1524 "grammar2.tab.c"
    break;

  case 25: /* $@9: %empty  */
#line 60 "grammar2.y"
                                    {append_in_jsFile(" % ");}
#line 1530 "grammar2.tab.c"
    break;

  case 28: /* $@10: %empty  */
#line 65 "grammar2.y"
                              {append_in_jsFile(" + ");}
#line 1536 "grammar2.tab.c"
    break;

  case 30: /* $@11: %empty  */
#line 66 "grammar2.y"
                              {append_in_jsFile(" - ");}
#line 1542 "grammar2.tab.c"
    break;

  case 33: /* $@12: %empty  */
#line 71 "grammar2.y"
                                {append_in_jsFile(" < ");}
#line 1548 "grammar2.tab.c"
    break;

  case 35: /* $@13: %empty  */
#line 72 "grammar2.y"
                                {append_in_jsFile(" > ");}
#line 1554 "grammar2.tab.c"
    break;

  case 37: /* $@14: %empty  */
#line 73 "grammar2.y"
                                  {append_in_jsFile(" <= ");}
#line 1560 "grammar2.tab.c"
    break;

  case 39: /* $@15: %empty  */
#line 74 "grammar2.y"
                                  {append_in_jsFile(" >= ");}
#line 1566 "grammar2.tab.c"
    break;

  case 42: /* $@16: %empty  */
#line 79 "grammar2.y"
                                {append_in_jsFile(" == ");}
#line 1572 "grammar2.tab.c"
    break;

  case 44: /* $@17: %empty  */
#line 80 "grammar2.y"
                                {append_in_jsFile(" != ");}
#line 1578 "grammar2.tab.c"
    break;

  case 47: /* $@18: %empty  */
#line 85 "grammar2.y"
                                    {append_in_jsFile(" && ");}
#line 1584 "grammar2.tab.c"
    break;

  case 50: /* $@19: %empty  */
#line 90 "grammar2.y"
                                  {append_in_jsFile(" || ");}
#line 1590 "grammar2.tab.c"
    break;

  case 53: /* $@20: %empty  */
#line 95 "grammar2.y"
                                {append_in_jsFile(" ? ");}
#line 1596 "grammar2.tab.c"
    break;

  case 54: /* $@21: %empty  */
#line 95 "grammar2.y"
                                                                          {append_in_jsFile(":");}
#line 1602 "grammar2.tab.c"
    break;

  case 57: /* $@22: %empty  */
#line 100 "grammar2.y"
                              {append_in_jsFile(" = ");}
#line 1608 "grammar2.tab.c"
    break;

  case 61: /* $@23: %empty  */
#line 109 "grammar2.y"
                     {append_in_jsFile(", ");}
#line 1614 "grammar2.tab.c"
    break;

  case 63: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 113 "grammar2.y"
                                                      {append_in_jsFile("\n");}
#line 1620 "grammar2.tab.c"
    break;

  case 69: /* $@24: %empty  */
#line 125 "grammar2.y"
                               {append_in_jsFile(", ");}
#line 1626 "grammar2.tab.c"
    break;

  case 72: /* $@25: %empty  */
#line 130 "grammar2.y"
                     {append_in_jsFile(" = ");}
#line 1632 "grammar2.tab.c"
    break;

  case 79: /* $@26: %empty  */
#line 142 "grammar2.y"
          {append_in_jsFile("(");}
#line 1638 "grammar2.tab.c"
    break;

  case 80: /* declarator: '(' $@26 declarator ')'  */
#line 142 "grammar2.y"
                                                  {append_in_jsFile(")");}
#line 1644 "grammar2.tab.c"
    break;

  case 81: /* $@27: %empty  */
#line 143 "grammar2.y"
                     {append_in_jsFile("[");}
#line 1650 "grammar2.tab.c"
    break;

  case 82: /* declarator: declarator '[' $@27 constant_expression ']'  */
#line 143 "grammar2.y"
                                                                      {append_in_jsFile("]");}
#line 1656 "grammar2.tab.c"
    break;

  case 83: /* declarator: declarator '[' ']'  */
#line 144 "grammar2.y"
                         {append_in_jsFile("[]");}
#line 1662 "grammar2.tab.c"
    break;

  case 84: /* $@28: %empty  */
#line 145 "grammar2.y"
                     {append_in_jsFile("[");}
#line 1668 "grammar2.tab.c"
    break;

  case 85: /* $@29: %empty  */
#line 145 "grammar2.y"
                                                                      {append_in_jsFile("]");}
#line 1674 "grammar2.tab.c"
    break;

  case 86: /* $@30: %empty  */
#line 145 "grammar2.y"
                                                                                                   {append_in_jsFile("[");}
#line 1680 "grammar2.tab.c"
    break;

  case 87: /* declarator: declarator '[' $@28 constant_expression ']' $@29 '[' $@30 constant_expression ']'  */
#line 145 "grammar2.y"
                                                                                                                                                    {append_in_jsFile("]");}
#line 1686 "grammar2.tab.c"
    break;

  case 88: /* $@31: %empty  */
#line 146 "grammar2.y"
                     {append_in_jsFile("[");}
#line 1692 "grammar2.tab.c"
    break;

  case 89: /* $@32: %empty  */
#line 146 "grammar2.y"
                                                  {append_in_jsFile("]");}
#line 1698 "grammar2.tab.c"
    break;

  case 90: /* $@33: %empty  */
#line 146 "grammar2.y"
                                                                               {append_in_jsFile("[");}
#line 1704 "grammar2.tab.c"
    break;

  case 91: /* declarator: declarator '[' $@31 ']' $@32 '[' $@33 constant_expression ']'  */
#line 146 "grammar2.y"
                                                                                                                                {append_in_jsFile("]");}
#line 1710 "grammar2.tab.c"
    break;

  case 92: /* $@34: %empty  */
#line 147 "grammar2.y"
                     {append_in_jsFile("[");}
#line 1716 "grammar2.tab.c"
    break;

  case 93: /* $@35: %empty  */
#line 147 "grammar2.y"
                                                  {append_in_jsFile("]");}
#line 1722 "grammar2.tab.c"
    break;

  case 94: /* $@36: %empty  */
#line 147 "grammar2.y"
                                                                               {append_in_jsFile("[");}
#line 1728 "grammar2.tab.c"
    break;

  case 95: /* declarator: declarator '[' $@34 ']' $@35 '[' $@36 ']'  */
#line 147 "grammar2.y"
                                                                                                            {append_in_jsFile("]");}
#line 1734 "grammar2.tab.c"
    break;

  case 96: /* $@37: %empty  */
#line 148 "grammar2.y"
                     {append_in_jsFile("(");}
#line 1740 "grammar2.tab.c"
    break;

  case 97: /* declarator: declarator '(' $@37 parameter_list ')'  */
#line 148 "grammar2.y"
                                                                 {append_in_jsFile(")");}
#line 1746 "grammar2.tab.c"
    break;

  case 98: /* $@38: %empty  */
#line 149 "grammar2.y"
                     {append_in_jsFile("(");}
#line 1752 "grammar2.tab.c"
    break;

  case 99: /* declarator: declarator '(' $@38 identifier_list ')'  */
#line 149 "grammar2.y"
                                                                  {append_in_jsFile(")");}
#line 1758 "grammar2.tab.c"
    break;

  case 100: /* declarator: declarator '(' ')'  */
#line 150 "grammar2.y"
                         {append_in_jsFile("()");}
#line 1764 "grammar2.tab.c"
    break;

  case 102: /* $@39: %empty  */
#line 155 "grammar2.y"
                         {append_in_jsFile(", ");}
#line 1770 "grammar2.tab.c"
    break;

  case 107: /* $@40: %empty  */
#line 165 "grammar2.y"
                          {append_in_jsFile(", ");}
#line 1776 "grammar2.tab.c"
    break;

  case 115: /* $@41: %empty  */
#line 181 "grammar2.y"
          {append_in_jsFile("(");}
#line 1782 "grammar2.tab.c"
    break;

  case 116: /* abstract_declarator: '(' $@41 abstract_declarator ')'  */
#line 181 "grammar2.y"
                                                           {append_in_jsFile(")");}
#line 1788 "grammar2.tab.c"
    break;

  case 117: /* abstract_declarator: '[' ']'  */
#line 182 "grammar2.y"
              {append_in_jsFile("[]");}
#line 1794 "grammar2.tab.c"
    break;

  case 118: /* $@42: %empty  */
#line 183 "grammar2.y"
          {append_in_jsFile("[");}
#line 1800 "grammar2.tab.c"
    break;

  case 119: /* abstract_declarator: '[' $@42 constant_expression ']'  */
#line 183 "grammar2.y"
                                                           {append_in_jsFile("]");}
#line 1806 "grammar2.tab.c"
    break;

  case 120: /* abstract_declarator: abstract_declarator '[' ']'  */
#line 184 "grammar2.y"
                                  {append_in_jsFile("[]");}
#line 1812 "grammar2.tab.c"
    break;

  case 121: /* $@43: %empty  */
#line 185 "grammar2.y"
                              {append_in_jsFile("[");}
#line 1818 "grammar2.tab.c"
    break;

  case 122: /* abstract_declarator: abstract_declarator '[' $@43 constant_expression ']'  */
#line 185 "grammar2.y"
                                                                               {append_in_jsFile("]");}
#line 1824 "grammar2.tab.c"
    break;

  case 123: /* abstract_declarator: '(' ')'  */
#line 186 "grammar2.y"
              {append_in_jsFile("()");}
#line 1830 "grammar2.tab.c"
    break;

  case 124: /* $@44: %empty  */
#line 187 "grammar2.y"
          {append_in_jsFile("(");}
#line 1836 "grammar2.tab.c"
    break;

  case 125: /* abstract_declarator: '(' $@44 parameter_list ')'  */
#line 187 "grammar2.y"
                                                      {append_in_jsFile(")");}
#line 1842 "grammar2.tab.c"
    break;

  case 126: /* abstract_declarator: abstract_declarator '(' ')'  */
#line 188 "grammar2.y"
                                  {append_in_jsFile("()");}
#line 1848 "grammar2.tab.c"
    break;

  case 127: /* $@45: %empty  */
#line 189 "grammar2.y"
                              {append_in_jsFile("(");}
#line 1854 "grammar2.tab.c"
    break;

  case 128: /* abstract_declarator: abstract_declarator '(' $@45 parameter_list ')'  */
#line 189 "grammar2.y"
                                                                          {append_in_jsFile(")");}
#line 1860 "grammar2.tab.c"
    break;

  case 130: /* $@46: %empty  */
#line 194 "grammar2.y"
          {append_in_jsFile("{");}
#line 1866 "grammar2.tab.c"
    break;

  case 131: /* initializer: '{' $@46 initializer_list '}'  */
#line 194 "grammar2.y"
                                                        {append_in_jsFile("}");}
#line 1872 "grammar2.tab.c"
    break;

  case 132: /* $@47: %empty  */
#line 195 "grammar2.y"
          {append_in_jsFile("{");}
#line 1878 "grammar2.tab.c"
    break;

  case 133: /* initializer: '{' $@47 initializer_list ',' '}'  */
#line 195 "grammar2.y"
                                                            {append_in_jsFile(", }");}
#line 1884 "grammar2.tab.c"
    break;

  case 135: /* $@48: %empty  */
#line 200 "grammar2.y"
                           {append_in_jsFile(", ");}
#line 1890 "grammar2.tab.c"
    break;

  case 142: /* compound_statement: '{' '}'  */
#line 212 "grammar2.y"
              {append_in_jsFile("{}");}
#line 1896 "grammar2.tab.c"
    break;

  case 143: /* $@49: %empty  */
#line 213 "grammar2.y"
          {append_in_jsFile("{ ");}
#line 1902 "grammar2.tab.c"
    break;

  case 144: /* compound_statement: '{' $@49 statement_list '}'  */
#line 213 "grammar2.y"
                                                       {append_in_jsFile(" }");}
#line 1908 "grammar2.tab.c"
    break;

  case 145: /* $@50: %empty  */
#line 214 "grammar2.y"
          {append_in_jsFile("{ ");}
#line 1914 "grammar2.tab.c"
    break;

  case 146: /* compound_statement: '{' $@50 declaration_list '}'  */
#line 214 "grammar2.y"
                                                         {append_in_jsFile(" }");}
#line 1920 "grammar2.tab.c"
    break;

  case 147: /* $@51: %empty  */
#line 215 "grammar2.y"
          {append_in_jsFile("{ ");}
#line 1926 "grammar2.tab.c"
    break;

  case 148: /* compound_statement: '{' $@51 declaration_list statement_list '}'  */
#line 215 "grammar2.y"
                                                                        {append_in_jsFile(" }");}
#line 1932 "grammar2.tab.c"
    break;

  case 153: /* expression_statement: ';'  */
#line 229 "grammar2.y"
          {append_in_jsFile("\n");}
#line 1938 "grammar2.tab.c"
    break;

  case 154: /* expression_statement: expression ';'  */
#line 230 "grammar2.y"
                     {append_in_jsFile("\n");}
#line 1944 "grammar2.tab.c"
    break;

  case 155: /* $@52: %empty  */
#line 234 "grammar2.y"
             {append_in_jsFile("if(");}
#line 1950 "grammar2.tab.c"
    break;

  case 156: /* $@53: %empty  */
#line 234 "grammar2.y"
                                                       {append_in_jsFile(")");}
#line 1956 "grammar2.tab.c"
    break;

  case 158: /* $@54: %empty  */
#line 235 "grammar2.y"
             {append_in_jsFile("if(");}
#line 1962 "grammar2.tab.c"
    break;

  case 159: /* $@55: %empty  */
#line 235 "grammar2.y"
                                                       {append_in_jsFile(")");}
#line 1968 "grammar2.tab.c"
    break;

  case 160: /* $@56: %empty  */
#line 235 "grammar2.y"
                                                                                               {append_in_jsFile("else");}
#line 1974 "grammar2.tab.c"
    break;

  case 162: /* $@57: %empty  */
#line 239 "grammar2.y"
            {append_in_jsFile("while( ");}
#line 1980 "grammar2.tab.c"
    break;

  case 163: /* $@58: %empty  */
#line 239 "grammar2.y"
                                                              {append_in_jsFile(") ");}
#line 1986 "grammar2.tab.c"
    break;

  case 165: /* jump_statement: RETURN ';'  */
#line 243 "grammar2.y"
                 {append_in_jsFile("return");}
#line 1992 "grammar2.tab.c"
    break;

  case 166: /* $@59: %empty  */
#line 244 "grammar2.y"
             {append_in_jsFile("return ");}
#line 1998 "grammar2.tab.c"
    break;

  case 176: /* $@60: %empty  */
#line 265 "grammar2.y"
      { printf("Comenzando a traducir a JavaScript\n"); create_output_file(); }
#line 2004 "grammar2.tab.c"
    break;

  case 177: /* program: $@60 translation_unit  */
#line 265 "grammar2.y"
                                                                                                 { close_output_file(); }
#line 2010 "grammar2.tab.c"
    break;


#line 2014 "grammar2.tab.c"

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

  return yyresult;
}

#line 267 "grammar2.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la línea %d\n", message, yylineno);
    return -1;
}
