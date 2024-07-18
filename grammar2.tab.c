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

#line 82 "grammar2.tab.c"

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
  YYSYMBOL_LE_OP = 6,                      /* LE_OP  */
  YYSYMBOL_GE_OP = 7,                      /* GE_OP  */
  YYSYMBOL_EQ_OP = 8,                      /* EQ_OP  */
  YYSYMBOL_NE_OP = 9,                      /* NE_OP  */
  YYSYMBOL_AND_OP = 10,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 11,                     /* OR_OP  */
  YYSYMBOL_TYPE_NAME = 12,                 /* TYPE_NAME  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_SHORT = 14,                     /* SHORT  */
  YYSYMBOL_INT = 15,                       /* INT  */
  YYSYMBOL_FLOAT = 16,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 17,                    /* DOUBLE  */
  YYSYMBOL_CONST = 18,                     /* CONST  */
  YYSYMBOL_VOID = 19,                      /* VOID  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_24_ = 24,                       /* '('  */
  YYSYMBOL_25_ = 25,                       /* ')'  */
  YYSYMBOL_26_ = 26,                       /* '['  */
  YYSYMBOL_27_ = 27,                       /* ']'  */
  YYSYMBOL_28_ = 28,                       /* ','  */
  YYSYMBOL_29_ = 29,                       /* '*'  */
  YYSYMBOL_30_ = 30,                       /* '/'  */
  YYSYMBOL_31_ = 31,                       /* '%'  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '<'  */
  YYSYMBOL_35_ = 35,                       /* '>'  */
  YYSYMBOL_36_ = 36,                       /* '?'  */
  YYSYMBOL_37_ = 37,                       /* ':'  */
  YYSYMBOL_38_ = 38,                       /* '='  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* '{'  */
  YYSYMBOL_41_ = 41,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_terminal = 43,                  /* terminal  */
  YYSYMBOL_44_1 = 44,                      /* $@1  */
  YYSYMBOL_extended_expression = 45,       /* extended_expression  */
  YYSYMBOL_46_2 = 46,                      /* $@2  */
  YYSYMBOL_47_3 = 47,                      /* $@3  */
  YYSYMBOL_argument_expression_list = 48,  /* argument_expression_list  */
  YYSYMBOL_49_4 = 49,                      /* $@4  */
  YYSYMBOL_cast_expression = 50,           /* cast_expression  */
  YYSYMBOL_51_5 = 51,                      /* $@5  */
  YYSYMBOL_52_6 = 52,                      /* $@6  */
  YYSYMBOL_multiplicative_expression = 53, /* multiplicative_expression  */
  YYSYMBOL_54_7 = 54,                      /* $@7  */
  YYSYMBOL_55_8 = 55,                      /* $@8  */
  YYSYMBOL_56_9 = 56,                      /* $@9  */
  YYSYMBOL_additive_expression = 57,       /* additive_expression  */
  YYSYMBOL_58_10 = 58,                     /* $@10  */
  YYSYMBOL_59_11 = 59,                     /* $@11  */
  YYSYMBOL_relational_expression = 60,     /* relational_expression  */
  YYSYMBOL_61_12 = 61,                     /* $@12  */
  YYSYMBOL_62_13 = 62,                     /* $@13  */
  YYSYMBOL_63_14 = 63,                     /* $@14  */
  YYSYMBOL_64_15 = 64,                     /* $@15  */
  YYSYMBOL_equality_expression = 65,       /* equality_expression  */
  YYSYMBOL_66_16 = 66,                     /* $@16  */
  YYSYMBOL_67_17 = 67,                     /* $@17  */
  YYSYMBOL_logical_and_expression = 68,    /* logical_and_expression  */
  YYSYMBOL_69_18 = 69,                     /* $@18  */
  YYSYMBOL_logical_or_expression = 70,     /* logical_or_expression  */
  YYSYMBOL_71_19 = 71,                     /* $@19  */
  YYSYMBOL_conditional_expression = 72,    /* conditional_expression  */
  YYSYMBOL_73_20 = 73,                     /* $@20  */
  YYSYMBOL_74_21 = 74,                     /* $@21  */
  YYSYMBOL_assignment_expression = 75,     /* assignment_expression  */
  YYSYMBOL_76_22 = 76,                     /* $@22  */
  YYSYMBOL_constant_expression = 77,       /* constant_expression  */
  YYSYMBOL_expression = 78,                /* expression  */
  YYSYMBOL_79_23 = 79,                     /* $@23  */
  YYSYMBOL_declaration = 80,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 81,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 82,      /* init_declarator_list  */
  YYSYMBOL_83_24 = 83,                     /* $@24  */
  YYSYMBOL_init_declarator = 84,           /* init_declarator  */
  YYSYMBOL_85_25 = 85,                     /* $@25  */
  YYSYMBOL_type_specifier = 86,            /* type_specifier  */
  YYSYMBOL_declarator = 87,                /* declarator  */
  YYSYMBOL_88_26 = 88,                     /* $@26  */
  YYSYMBOL_89_27 = 89,                     /* $@27  */
  YYSYMBOL_90_28 = 90,                     /* $@28  */
  YYSYMBOL_91_29 = 91,                     /* $@29  */
  YYSYMBOL_92_30 = 92,                     /* $@30  */
  YYSYMBOL_93_31 = 93,                     /* $@31  */
  YYSYMBOL_94_32 = 94,                     /* $@32  */
  YYSYMBOL_95_33 = 95,                     /* $@33  */
  YYSYMBOL_96_34 = 96,                     /* $@34  */
  YYSYMBOL_97_35 = 97,                     /* $@35  */
  YYSYMBOL_98_36 = 98,                     /* $@36  */
  YYSYMBOL_99_37 = 99,                     /* $@37  */
  YYSYMBOL_100_38 = 100,                   /* $@38  */
  YYSYMBOL_parameter_list = 101,           /* parameter_list  */
  YYSYMBOL_102_39 = 102,                   /* $@39  */
  YYSYMBOL_parameter_declaration = 103,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 104,          /* identifier_list  */
  YYSYMBOL_105_40 = 105,                   /* $@40  */
  YYSYMBOL_type_name = 106,                /* type_name  */
  YYSYMBOL_specifier_qualifier_list = 107, /* specifier_qualifier_list  */
  YYSYMBOL_abstract_declarator = 108,      /* abstract_declarator  */
  YYSYMBOL_109_41 = 109,                   /* $@41  */
  YYSYMBOL_110_42 = 110,                   /* $@42  */
  YYSYMBOL_111_43 = 111,                   /* $@43  */
  YYSYMBOL_112_44 = 112,                   /* $@44  */
  YYSYMBOL_113_45 = 113,                   /* $@45  */
  YYSYMBOL_initializer = 114,              /* initializer  */
  YYSYMBOL_115_46 = 115,                   /* $@46  */
  YYSYMBOL_116_47 = 116,                   /* $@47  */
  YYSYMBOL_initializer_list = 117,         /* initializer_list  */
  YYSYMBOL_118_48 = 118,                   /* $@48  */
  YYSYMBOL_statement = 119,                /* statement  */
  YYSYMBOL_compound_statement = 120,       /* compound_statement  */
  YYSYMBOL_121_49 = 121,                   /* $@49  */
  YYSYMBOL_122_50 = 122,                   /* $@50  */
  YYSYMBOL_123_51 = 123,                   /* $@51  */
  YYSYMBOL_declaration_list = 124,         /* declaration_list  */
  YYSYMBOL_statement_list = 125,           /* statement_list  */
  YYSYMBOL_expression_statement = 126,     /* expression_statement  */
  YYSYMBOL_selection_statement = 127,      /* selection_statement  */
  YYSYMBOL_128_52 = 128,                   /* $@52  */
  YYSYMBOL_129_53 = 129,                   /* $@53  */
  YYSYMBOL_130_54 = 130,                   /* $@54  */
  YYSYMBOL_131_55 = 131,                   /* $@55  */
  YYSYMBOL_132_56 = 132,                   /* $@56  */
  YYSYMBOL_loop_statement = 133,           /* loop_statement  */
  YYSYMBOL_134_57 = 134,                   /* $@57  */
  YYSYMBOL_135_58 = 135,                   /* $@58  */
  YYSYMBOL_jump_statement = 136,           /* jump_statement  */
  YYSYMBOL_137_59 = 137,                   /* $@59  */
  YYSYMBOL_translation_unit = 138,         /* translation_unit  */
  YYSYMBOL_external_declaration = 139,     /* external_declaration  */
  YYSYMBOL_function_definition = 140,      /* function_definition  */
  YYSYMBOL_program = 141,                  /* program  */
  YYSYMBOL_142_60 = 142                    /* $@60  */
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
#define YYLAST   312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  268

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   278


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
       2,     2,     2,     2,     2,     2,     2,    31,     2,     2,
      24,    25,    29,    32,    28,    33,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    39,
      34,    38,    35,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    26,     2,    27,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    35,    35,    36,    37,    38,    38,    42,    43,    43,
      44,    45,    45,    49,    50,    50,    54,    55,    55,    55,
      59,    60,    60,    61,    61,    62,    62,    66,    67,    67,
      68,    68,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    80,    81,    81,    82,    82,    86,    87,    87,    91,
      92,    92,    96,    97,    97,    97,   101,   102,   102,   106,
     110,   111,   111,   115,   119,   120,   121,   122,   126,   127,
     127,   131,   132,   132,   136,   137,   138,   139,   143,   144,
     144,   145,   145,   146,   147,   147,   147,   147,   148,   148,
     148,   148,   149,   149,   149,   149,   150,   150,   151,   151,
     152,   156,   157,   157,   161,   162,   166,   167,   167,   171,
     172,   176,   177,   178,   179,   183,   183,   184,   185,   185,
     186,   187,   187,   188,   189,   189,   190,   191,   191,   195,
     196,   196,   197,   197,   201,   202,   202,   206,   207,   208,
     209,   210,   214,   215,   215,   216,   216,   217,   217,   221,
     222,   226,   227,   231,   232,   236,   236,   236,   237,   237,
     237,   237,   241,   241,   241,   245,   246,   246,   250,   251,
     255,   256,   260,   261,   262,   263,   267,   267
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
  "NUMBER_LITERAL", "STRING_LITERAL", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "AND_OP", "OR_OP", "TYPE_NAME", "CHAR", "SHORT", "INT", "FLOAT",
  "DOUBLE", "CONST", "VOID", "IF", "ELSE", "WHILE", "RETURN", "'('", "')'",
  "'['", "']'", "','", "'*'", "'/'", "'%'", "'+'", "'-'", "'<'", "'>'",
  "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept", "terminal", "$@1",
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

#define YYPACT_NINF (-212)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-146)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -212,    39,    71,  -212,  -212,  -212,  -212,  -212,   241,  -212,
    -212,  -212,    17,   241,   217,    71,  -212,  -212,  -212,    17,
      48,  -212,   207,  -212,    25,    56,   141,  -212,    17,  -212,
     231,  -212,    73,  -212,  -212,  -212,  -212,   231,  -212,   241,
      49,  -212,    99,    99,   108,   130,  -212,   188,   241,   241,
      70,  -212,  -212,  -212,    17,    18,  -212,    17,    23,  -212,
    -212,    50,  -212,  -212,  -212,   126,  -212,    83,  -212,   246,
      -1,    20,   279,    58,    24,  -212,   134,   139,  -212,  -212,
     155,  -212,   159,  -212,   147,  -212,  -212,   109,  -212,  -212,
      41,  -212,  -212,  -212,  -212,   182,   123,  -212,  -212,  -212,
    -212,   148,  -212,  -212,  -212,  -212,    99,   248,   184,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,   203,   216,  -212,   195,
    -212,    99,  -212,  -212,  -212,  -212,  -212,  -212,   129,    18,
      18,   241,   235,   156,   248,   248,   226,   238,  -212,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,   242,  -212,  -212,    99,    99,
      99,   116,    99,    99,  -212,  -212,     8,   225,  -212,  -212,
    -212,  -212,  -212,  -212,   254,   247,   260,   178,  -212,   262,
    -212,  -212,  -212,   246,   246,    -1,    -1,    -1,    -1,    20,
      20,   279,    58,     1,  -212,    99,   258,   193,   212,   227,
    -212,  -212,  -212,  -212,  -212,   256,    99,  -212,   238,   241,
    -212,    99,   273,   272,  -212,  -212,  -212,  -212,    99,   274,
    -212,  -212,  -212,  -212,    18,  -212,  -212,   257,   244,   275,
    -212,   241,  -212,    99,    99,    99,   276,  -212,   188,   188,
     188,  -212,  -212,  -212,  -212,   245,   277,  -212,  -212,  -212,
    -212,   284,  -212,  -212,  -212,  -212,   188,  -212
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
       0,   162,   166,   153,    16,    56,    60,     0,   151,   137,
       0,   138,   139,   140,   141,     0,     0,    70,   130,   129,
      73,   104,    97,   102,    99,   107,     0,     0,    11,     8,
      21,    23,    25,    28,    30,    37,    39,    33,    35,    42,
      44,    47,    50,    53,    82,    85,     0,     0,   155,     0,
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
      95,   156,   159,   163,     0,   133,    19,     0,     0,     0,
     126,     0,   120,     0,     0,     0,     0,    91,     0,     0,
       0,   136,   116,   125,   119,     0,     0,    15,    55,    87,
     157,     0,   164,   128,   122,   160,     0,   161
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -212,  -212,  -212,   -41,  -212,  -212,  -212,  -212,  -137,  -212,
    -212,   137,  -212,  -212,  -212,    57,  -212,  -212,   133,  -212,
    -212,  -212,  -212,   138,  -212,  -212,   143,  -212,  -212,  -212,
     -38,  -212,  -212,   -48,  -212,   -40,   -97,  -212,    10,    -2,
    -212,  -212,   253,  -212,   -88,     5,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -211,
    -212,   167,  -212,  -212,  -212,   151,    91,  -212,  -212,  -212,
    -212,  -212,   -45,  -212,  -212,   170,  -212,   -72,    63,  -212,
    -212,  -212,    21,   215,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,   297,  -212,  -212,
    -212
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
      48,    49,    30,    90,    91,    92,   168,   248,   169,   249,
     266,    93,   129,   250,    94,   131,    15,    16,    17,     1,
       2
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,    67,    67,    77,    75,    75,    18,    99,   238,   143,
     100,    23,    11,    12,   190,   191,   192,    22,   136,   145,
       4,    62,    63,    64,    32,    11,   115,   116,   -98,   133,
     255,   113,   114,    50,   171,   122,   213,    57,   227,     3,
      51,    10,    65,    37,    62,    63,    64,    51,   102,   214,
      38,   103,    60,   189,   117,   118,   145,   145,    98,    50,
     123,    80,   101,    81,    82,    65,   136,   203,   121,    95,
      96,   207,   208,   209,     4,   104,    33,    29,   105,   236,
      83,    26,   135,    41,     5,    36,     6,    34,     7,     8,
       9,    99,    99,    52,    24,    10,    25,    24,    53,    25,
      56,   188,    62,    63,    64,    51,    51,   108,    35,   109,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    65,   211,   212,    62,    63,    64,    -5,
      -5,    -5,    62,    63,    64,    78,     5,   133,     6,    57,
       7,     8,     9,    80,   133,    81,    82,    65,   134,    80,
      -5,    81,    82,    65,  -145,   210,  -145,    79,  -145,  -145,
    -145,   124,    83,    26,    67,   229,   125,    75,    83,    26,
     174,   108,    24,   109,    25,    67,   260,   261,   262,   128,
      67,   180,    46,   239,   133,   132,    99,    67,   246,   251,
      75,    62,    63,    64,   267,     5,   257,     6,   130,     7,
       8,     9,    67,   224,    67,   256,   225,   258,    80,   148,
      81,    82,    65,   195,   196,   197,   198,    57,   231,   170,
       5,   133,     6,   137,     7,     8,     9,    83,    26,   166,
       5,    24,     6,    25,     7,     8,     9,   232,   179,    57,
     133,    24,   167,    25,     5,    35,     6,    26,     7,     8,
       9,   183,   233,   215,     5,   133,     6,    26,     7,     8,
       9,     5,   184,     6,   185,     7,   144,     9,   204,   253,
     263,    26,   103,   103,   220,   110,   111,   112,  -115,   217,
    -115,   222,   252,   223,   222,   230,   223,   119,   120,   226,
     133,   193,   194,   199,   200,   181,   182,   235,   240,   242,
     201,   247,   254,   259,   264,   265,   202,    97,   178,   237,
     177,   138,    31
};

static const yytype_int16 yycheck[] =
{
       2,    42,    43,    43,    42,    43,     8,    55,   219,   106,
      55,    13,     2,    15,   151,   152,   153,    12,    90,   107,
       3,     3,     4,     5,    19,    15,     6,     7,     3,    28,
     241,    32,    33,    28,   131,    11,    28,    39,    37,     0,
      30,    24,    24,    22,     3,     4,     5,    37,    25,    41,
      25,    28,     3,   150,    34,    35,   144,   145,    40,    54,
      36,    20,    57,    22,    23,    24,   138,   164,    10,    48,
      49,   168,   169,   170,     3,    25,    28,    14,    28,   216,
      39,    40,    41,    27,    13,    22,    15,    39,    17,    18,
      19,   139,   140,    30,    24,    24,    26,    24,    25,    26,
      37,   149,     3,     4,     5,    95,    96,    24,    38,    26,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    24,   172,   173,     3,     4,     5,     3,
       4,     5,     3,     4,     5,    27,    13,    28,    15,   141,
      17,    18,    19,    20,    28,    22,    23,    24,    39,    20,
      24,    22,    23,    24,    13,    39,    15,    27,    17,    18,
      19,    27,    39,    40,   205,   205,    27,   205,    39,    40,
      41,    24,    24,    26,    26,   216,   248,   249,   250,    24,
     221,    25,    41,   221,    28,    38,   234,   228,   228,   234,
     228,     3,     4,     5,   266,    13,   244,    15,    39,    17,
      18,    19,   243,    25,   245,   243,    28,   245,    20,    25,
      22,    23,    24,   156,   157,   158,   159,   219,    25,    24,
      13,    28,    15,    41,    17,    18,    19,    39,    40,    26,
      13,    24,    15,    26,    17,    18,    19,    25,     3,   241,
      28,    24,    26,    26,    13,    38,    15,    40,    17,    18,
      19,    25,    25,    28,    13,    28,    15,    40,    17,    18,
      19,    13,    24,    15,    26,    17,    18,    19,    26,    25,
      25,    40,    28,    28,    27,    29,    30,    31,    24,    25,
      26,    24,    25,    26,    24,    27,    26,     8,     9,    27,
      28,   154,   155,   160,   161,   144,   145,    41,    25,    27,
     162,    27,    27,    27,    27,    21,   163,    54,   141,   218,
     140,    96,    15
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   141,   142,     0,     3,    13,    15,    17,    18,    19,
      24,    80,    81,    86,    87,   138,   139,   140,    81,    88,
      82,    84,    87,    81,    24,    26,    40,    80,    81,   120,
     124,   139,    87,    28,    39,    38,   120,   124,    25,    99,
     100,    27,    89,    90,    93,    96,    41,   121,   122,   123,
      87,    80,   120,    25,    83,    85,   120,    81,   101,   103,
       3,   104,     3,     4,     5,    24,    43,    45,    50,    53,
      57,    60,    65,    68,    70,    72,    77,    77,    27,    27,
      20,    22,    23,    39,    45,    72,    75,    78,   119,   120,
     125,   126,   127,   133,   136,   124,   124,    84,    40,    75,
     114,    87,    25,    28,    25,    28,    44,    51,    24,    26,
      29,    30,    31,    32,    33,     6,     7,    34,    35,     8,
       9,    10,    11,    36,    27,    27,    94,    97,    24,   134,
      39,   137,    38,    28,    39,    41,   119,    41,   125,   115,
     116,   102,   105,    78,    18,    86,   106,   107,    25,    47,
      46,    54,    55,    56,    58,    59,    63,    64,    61,    62,
      66,    67,    69,    71,    73,    91,    26,    26,   128,   130,
      24,    78,    76,    79,    41,   114,   117,   117,   103,     3,
      25,   107,   107,    25,    24,    26,   108,    48,    75,    78,
      50,    50,    50,    53,    53,    57,    57,    57,    57,    60,
      60,    65,    68,    78,    26,    95,    98,    78,    78,    78,
      39,    75,    75,    28,    41,    28,    52,    25,   109,   112,
      27,   110,    24,    26,    25,    28,    27,    37,    92,    77,
      27,    25,    25,    25,   118,    41,    50,   108,   101,    72,
      25,   113,    27,   111,    49,    74,    77,    27,   129,   131,
     135,   114,    25,    25,    27,   101,    72,    75,    72,    27,
     119,   119,   119,    25,    27,    21,   132,   119
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    43,    44,    43,    45,    46,    45,
      45,    47,    45,    48,    49,    48,    50,    51,    52,    50,
      53,    54,    53,    55,    53,    56,    53,    57,    58,    57,
      59,    57,    60,    61,    60,    62,    60,    63,    60,    64,
      60,    65,    66,    65,    67,    65,    68,    69,    68,    70,
      71,    70,    72,    73,    74,    72,    75,    76,    75,    77,
      78,    79,    78,    80,    81,    81,    81,    81,    82,    83,
      82,    84,    85,    84,    86,    86,    86,    86,    87,    88,
      87,    89,    87,    87,    90,    91,    92,    87,    93,    94,
      95,    87,    96,    97,    98,    87,    99,    87,   100,    87,
      87,   101,   102,   101,   103,   103,   104,   105,   104,   106,
     106,   107,   107,   107,   107,   109,   108,   108,   110,   108,
     108,   111,   108,   108,   112,   108,   108,   113,   108,   114,
     115,   114,   116,   114,   117,   118,   117,   119,   119,   119,
     119,   119,   120,   121,   120,   122,   120,   123,   120,   124,
     124,   125,   125,   126,   126,   128,   129,   127,   130,   131,
     132,   127,   134,   135,   133,   136,   137,   136,   138,   138,
     139,   139,   140,   140,   140,   140,   142,   141
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
#line 38 "grammar2.y"
          {append_in_jsFile("( ");}
#line 1434 "grammar2.tab.c"
    break;

  case 6: /* terminal: '(' $@1 expression ')'  */
#line 38 "grammar2.y"
                                                   {append_in_jsFile(" )");}
#line 1440 "grammar2.tab.c"
    break;

  case 8: /* $@2: %empty  */
#line 43 "grammar2.y"
                              {append_in_jsFile("[ ");}
#line 1446 "grammar2.tab.c"
    break;

  case 9: /* extended_expression: extended_expression '[' $@2 expression ']'  */
#line 43 "grammar2.y"
                                                                       {append_in_jsFile(" ]");}
#line 1452 "grammar2.tab.c"
    break;

  case 10: /* extended_expression: extended_expression '(' ')'  */
#line 44 "grammar2.y"
                                  {append_in_jsFile("()");}
#line 1458 "grammar2.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 45 "grammar2.y"
                              {append_in_jsFile("( ");}
#line 1464 "grammar2.tab.c"
    break;

  case 12: /* extended_expression: extended_expression '(' $@3 argument_expression_list ')'  */
#line 45 "grammar2.y"
                                                                                     {append_in_jsFile(" )");}
#line 1470 "grammar2.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 50 "grammar2.y"
                                   {append_in_jsFile(", ");}
#line 1476 "grammar2.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 55 "grammar2.y"
          {append_in_jsFile("( ");}
#line 1482 "grammar2.tab.c"
    break;

  case 18: /* $@6: %empty  */
#line 55 "grammar2.y"
                                                  {append_in_jsFile(" )");}
#line 1488 "grammar2.tab.c"
    break;

  case 21: /* $@7: %empty  */
#line 60 "grammar2.y"
                                    {append_in_jsFile(" * ");}
#line 1494 "grammar2.tab.c"
    break;

  case 23: /* $@8: %empty  */
#line 61 "grammar2.y"
                                    {append_in_jsFile(" / ");}
#line 1500 "grammar2.tab.c"
    break;

  case 25: /* $@9: %empty  */
#line 62 "grammar2.y"
                                    {append_in_jsFile(" % ");}
#line 1506 "grammar2.tab.c"
    break;

  case 28: /* $@10: %empty  */
#line 67 "grammar2.y"
                              {append_in_jsFile(" + ");}
#line 1512 "grammar2.tab.c"
    break;

  case 30: /* $@11: %empty  */
#line 68 "grammar2.y"
                              {append_in_jsFile(" - ");}
#line 1518 "grammar2.tab.c"
    break;

  case 33: /* $@12: %empty  */
#line 73 "grammar2.y"
                                {append_in_jsFile(" < ");}
#line 1524 "grammar2.tab.c"
    break;

  case 35: /* $@13: %empty  */
#line 74 "grammar2.y"
                                {append_in_jsFile(" > ");}
#line 1530 "grammar2.tab.c"
    break;

  case 37: /* $@14: %empty  */
#line 75 "grammar2.y"
                                  {append_in_jsFile(" <= ");}
#line 1536 "grammar2.tab.c"
    break;

  case 39: /* $@15: %empty  */
#line 76 "grammar2.y"
                                  {append_in_jsFile(" >= ");}
#line 1542 "grammar2.tab.c"
    break;

  case 42: /* $@16: %empty  */
#line 81 "grammar2.y"
                                {append_in_jsFile(" == ");}
#line 1548 "grammar2.tab.c"
    break;

  case 44: /* $@17: %empty  */
#line 82 "grammar2.y"
                                {append_in_jsFile(" != ");}
#line 1554 "grammar2.tab.c"
    break;

  case 47: /* $@18: %empty  */
#line 87 "grammar2.y"
                                    {append_in_jsFile(" && ");}
#line 1560 "grammar2.tab.c"
    break;

  case 50: /* $@19: %empty  */
#line 92 "grammar2.y"
                                  {append_in_jsFile(" || ");}
#line 1566 "grammar2.tab.c"
    break;

  case 53: /* $@20: %empty  */
#line 97 "grammar2.y"
                                {append_in_jsFile(" ? ");}
#line 1572 "grammar2.tab.c"
    break;

  case 54: /* $@21: %empty  */
#line 97 "grammar2.y"
                                                                          {append_in_jsFile(":");}
#line 1578 "grammar2.tab.c"
    break;

  case 57: /* $@22: %empty  */
#line 102 "grammar2.y"
                              {append_in_jsFile(" = ");}
#line 1584 "grammar2.tab.c"
    break;

  case 61: /* $@23: %empty  */
#line 111 "grammar2.y"
                     {append_in_jsFile(", ");}
#line 1590 "grammar2.tab.c"
    break;

  case 63: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 115 "grammar2.y"
                                                     {append_in_jsFile("\n");}
#line 1596 "grammar2.tab.c"
    break;

  case 69: /* $@24: %empty  */
#line 127 "grammar2.y"
                               {append_in_jsFile(", ");}
#line 1602 "grammar2.tab.c"
    break;

  case 72: /* $@25: %empty  */
#line 132 "grammar2.y"
                     {append_in_jsFile(" = ");}
#line 1608 "grammar2.tab.c"
    break;

  case 79: /* $@26: %empty  */
#line 144 "grammar2.y"
          {append_in_jsFile("(");}
#line 1614 "grammar2.tab.c"
    break;

  case 80: /* declarator: '(' $@26 declarator ')'  */
#line 144 "grammar2.y"
                                                  {append_in_jsFile(")");}
#line 1620 "grammar2.tab.c"
    break;

  case 81: /* $@27: %empty  */
#line 145 "grammar2.y"
                     {append_in_jsFile("[");}
#line 1626 "grammar2.tab.c"
    break;

  case 82: /* declarator: declarator '[' $@27 constant_expression ']'  */
#line 145 "grammar2.y"
                                                                      {append_in_jsFile("]");}
#line 1632 "grammar2.tab.c"
    break;

  case 83: /* declarator: declarator '[' ']'  */
#line 146 "grammar2.y"
                         {append_in_jsFile("[]");}
#line 1638 "grammar2.tab.c"
    break;

  case 84: /* $@28: %empty  */
#line 147 "grammar2.y"
                     {append_in_jsFile("[");}
#line 1644 "grammar2.tab.c"
    break;

  case 85: /* $@29: %empty  */
#line 147 "grammar2.y"
                                                                     {append_in_jsFile("]");}
#line 1650 "grammar2.tab.c"
    break;

  case 86: /* $@30: %empty  */
#line 147 "grammar2.y"
                                                                                                  {append_in_jsFile("[");}
#line 1656 "grammar2.tab.c"
    break;

  case 87: /* declarator: declarator '[' $@28 constant_expression ']' $@29 '[' $@30 constant_expression ']'  */
#line 147 "grammar2.y"
                                                                                                                                                   {append_in_jsFile("]");}
#line 1662 "grammar2.tab.c"
    break;

  case 88: /* $@31: %empty  */
#line 148 "grammar2.y"
                     {append_in_jsFile("[");}
#line 1668 "grammar2.tab.c"
    break;

  case 89: /* $@32: %empty  */
#line 148 "grammar2.y"
                                                 {append_in_jsFile("]");}
#line 1674 "grammar2.tab.c"
    break;

  case 90: /* $@33: %empty  */
#line 148 "grammar2.y"
                                                                             {append_in_jsFile("[");}
#line 1680 "grammar2.tab.c"
    break;

  case 91: /* declarator: declarator '[' $@31 ']' $@32 '[' $@33 constant_expression ']'  */
#line 148 "grammar2.y"
                                                                                                                              {append_in_jsFile("]");}
#line 1686 "grammar2.tab.c"
    break;

  case 92: /* $@34: %empty  */
#line 149 "grammar2.y"
                     {append_in_jsFile("[");}
#line 1692 "grammar2.tab.c"
    break;

  case 93: /* $@35: %empty  */
#line 149 "grammar2.y"
                                                  {append_in_jsFile("]");}
#line 1698 "grammar2.tab.c"
    break;

  case 94: /* $@36: %empty  */
#line 149 "grammar2.y"
                                                                               {append_in_jsFile("[");}
#line 1704 "grammar2.tab.c"
    break;

  case 95: /* declarator: declarator '[' $@34 ']' $@35 '[' $@36 ']'  */
#line 149 "grammar2.y"
                                                                                                            {append_in_jsFile("]");}
#line 1710 "grammar2.tab.c"
    break;

  case 96: /* $@37: %empty  */
#line 150 "grammar2.y"
                     {append_in_jsFile("(");}
#line 1716 "grammar2.tab.c"
    break;

  case 97: /* declarator: declarator '(' $@37 parameter_list ')'  */
#line 150 "grammar2.y"
                                                                 {append_in_jsFile(")");}
#line 1722 "grammar2.tab.c"
    break;

  case 98: /* $@38: %empty  */
#line 151 "grammar2.y"
                     {append_in_jsFile("(");}
#line 1728 "grammar2.tab.c"
    break;

  case 99: /* declarator: declarator '(' $@38 identifier_list ')'  */
#line 151 "grammar2.y"
                                                                  {append_in_jsFile(")");}
#line 1734 "grammar2.tab.c"
    break;

  case 100: /* declarator: declarator '(' ')'  */
#line 152 "grammar2.y"
                         {append_in_jsFile("()");}
#line 1740 "grammar2.tab.c"
    break;

  case 102: /* $@39: %empty  */
#line 157 "grammar2.y"
                         {append_in_jsFile(", ");}
#line 1746 "grammar2.tab.c"
    break;

  case 107: /* $@40: %empty  */
#line 167 "grammar2.y"
                          {append_in_jsFile(", ");}
#line 1752 "grammar2.tab.c"
    break;

  case 115: /* $@41: %empty  */
#line 183 "grammar2.y"
          {append_in_jsFile("(");}
#line 1758 "grammar2.tab.c"
    break;

  case 116: /* abstract_declarator: '(' $@41 abstract_declarator ')'  */
#line 183 "grammar2.y"
                                                           {append_in_jsFile(")");}
#line 1764 "grammar2.tab.c"
    break;

  case 117: /* abstract_declarator: '[' ']'  */
#line 184 "grammar2.y"
              {append_in_jsFile("[]");}
#line 1770 "grammar2.tab.c"
    break;

  case 118: /* $@42: %empty  */
#line 185 "grammar2.y"
          {append_in_jsFile("[");}
#line 1776 "grammar2.tab.c"
    break;

  case 119: /* abstract_declarator: '[' $@42 conditional_expression ']'  */
#line 185 "grammar2.y"
                                                              {append_in_jsFile("]");}
#line 1782 "grammar2.tab.c"
    break;

  case 120: /* abstract_declarator: abstract_declarator '[' ']'  */
#line 186 "grammar2.y"
                                  {append_in_jsFile("[]");}
#line 1788 "grammar2.tab.c"
    break;

  case 121: /* $@43: %empty  */
#line 187 "grammar2.y"
                              {append_in_jsFile("[");}
#line 1794 "grammar2.tab.c"
    break;

  case 122: /* abstract_declarator: abstract_declarator '[' $@43 conditional_expression ']'  */
#line 187 "grammar2.y"
                                                                                  {append_in_jsFile("]");}
#line 1800 "grammar2.tab.c"
    break;

  case 123: /* abstract_declarator: '(' ')'  */
#line 188 "grammar2.y"
              {append_in_jsFile("()");}
#line 1806 "grammar2.tab.c"
    break;

  case 124: /* $@44: %empty  */
#line 189 "grammar2.y"
          {append_in_jsFile("(");}
#line 1812 "grammar2.tab.c"
    break;

  case 125: /* abstract_declarator: '(' $@44 parameter_list ')'  */
#line 189 "grammar2.y"
                                                      {append_in_jsFile(")");}
#line 1818 "grammar2.tab.c"
    break;

  case 126: /* abstract_declarator: abstract_declarator '(' ')'  */
#line 190 "grammar2.y"
                                  {append_in_jsFile("()");}
#line 1824 "grammar2.tab.c"
    break;

  case 127: /* $@45: %empty  */
#line 191 "grammar2.y"
                              {append_in_jsFile("(");}
#line 1830 "grammar2.tab.c"
    break;

  case 128: /* abstract_declarator: abstract_declarator '(' $@45 parameter_list ')'  */
#line 191 "grammar2.y"
                                                                          {append_in_jsFile(")");}
#line 1836 "grammar2.tab.c"
    break;

  case 130: /* $@46: %empty  */
#line 196 "grammar2.y"
          {append_in_jsFile("{");}
#line 1842 "grammar2.tab.c"
    break;

  case 131: /* initializer: '{' $@46 initializer_list '}'  */
#line 196 "grammar2.y"
                                                        {append_in_jsFile("}");}
#line 1848 "grammar2.tab.c"
    break;

  case 132: /* $@47: %empty  */
#line 197 "grammar2.y"
          {append_in_jsFile("{");}
#line 1854 "grammar2.tab.c"
    break;

  case 133: /* initializer: '{' $@47 initializer_list ',' '}'  */
#line 197 "grammar2.y"
                                                            {append_in_jsFile(", }");}
#line 1860 "grammar2.tab.c"
    break;

  case 135: /* $@48: %empty  */
#line 202 "grammar2.y"
                           {append_in_jsFile(", ");}
#line 1866 "grammar2.tab.c"
    break;

  case 142: /* compound_statement: '{' '}'  */
#line 214 "grammar2.y"
              {append_in_jsFile("{}");}
#line 1872 "grammar2.tab.c"
    break;

  case 143: /* $@49: %empty  */
#line 215 "grammar2.y"
          {append_in_jsFile("{ ");}
#line 1878 "grammar2.tab.c"
    break;

  case 144: /* compound_statement: '{' $@49 statement_list '}'  */
#line 215 "grammar2.y"
                                                       {append_in_jsFile(" }");}
#line 1884 "grammar2.tab.c"
    break;

  case 145: /* $@50: %empty  */
#line 216 "grammar2.y"
          {append_in_jsFile("{ ");}
#line 1890 "grammar2.tab.c"
    break;

  case 146: /* compound_statement: '{' $@50 declaration_list '}'  */
#line 216 "grammar2.y"
                                                         {append_in_jsFile(" }");}
#line 1896 "grammar2.tab.c"
    break;

  case 147: /* $@51: %empty  */
#line 217 "grammar2.y"
          {append_in_jsFile("{ ");}
#line 1902 "grammar2.tab.c"
    break;

  case 148: /* compound_statement: '{' $@51 declaration_list statement_list '}'  */
#line 217 "grammar2.y"
                                                                        {append_in_jsFile(" }");}
#line 1908 "grammar2.tab.c"
    break;

  case 153: /* expression_statement: ';'  */
#line 231 "grammar2.y"
          {append_in_jsFile("\n");}
#line 1914 "grammar2.tab.c"
    break;

  case 154: /* expression_statement: expression ';'  */
#line 232 "grammar2.y"
                     {append_in_jsFile("\n");}
#line 1920 "grammar2.tab.c"
    break;

  case 155: /* $@52: %empty  */
#line 236 "grammar2.y"
             {append_in_jsFile("if(");}
#line 1926 "grammar2.tab.c"
    break;

  case 156: /* $@53: %empty  */
#line 236 "grammar2.y"
                                                      {append_in_jsFile(")");}
#line 1932 "grammar2.tab.c"
    break;

  case 158: /* $@54: %empty  */
#line 237 "grammar2.y"
             {append_in_jsFile("if(");}
#line 1938 "grammar2.tab.c"
    break;

  case 159: /* $@55: %empty  */
#line 237 "grammar2.y"
                                                      {append_in_jsFile(")");}
#line 1944 "grammar2.tab.c"
    break;

  case 160: /* $@56: %empty  */
#line 237 "grammar2.y"
                                                                                              {append_in_jsFile("else");}
#line 1950 "grammar2.tab.c"
    break;

  case 162: /* $@57: %empty  */
#line 241 "grammar2.y"
            {append_in_jsFile("while( ");}
#line 1956 "grammar2.tab.c"
    break;

  case 163: /* $@58: %empty  */
#line 241 "grammar2.y"
                                                              {append_in_jsFile(") ");}
#line 1962 "grammar2.tab.c"
    break;

  case 165: /* jump_statement: RETURN ';'  */
#line 245 "grammar2.y"
                 {append_in_jsFile("return");}
#line 1968 "grammar2.tab.c"
    break;

  case 166: /* $@59: %empty  */
#line 246 "grammar2.y"
             {append_in_jsFile("return ");}
#line 1974 "grammar2.tab.c"
    break;

  case 176: /* $@60: %empty  */
#line 267 "grammar2.y"
          { printf("Comenzando a traducir a JavaScript\n"); create_output_file(); }
#line 1980 "grammar2.tab.c"
    break;

  case 177: /* program: $@60 translation_unit  */
#line 267 "grammar2.y"
                                                                                                     { close_output_file(); }
#line 1986 "grammar2.tab.c"
    break;


#line 1990 "grammar2.tab.c"

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

#line 269 "grammar2.y"


void yyerror(const char *s) {
    fflush(stdout);
    printf("\nError: %s\n", s);
}
