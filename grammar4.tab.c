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
#line 1 "grammar4.y"

#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
int yyerror(char *message);
extern int yylineno;

#line 82 "grammar4.tab.c"

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

#include "grammar4.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_DOUBLE_NUM = 4,                 /* DOUBLE_NUM  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_IDENTIFIER = 8,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_CONST = 10,                     /* CONST  */
  YYSYMBOL_INC_OP = 11,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 12,                    /* DEC_OP  */
  YYSYMBOL_INC_OP_LEFT = 13,               /* INC_OP_LEFT  */
  YYSYMBOL_INC_OP_RIGHT = 14,              /* INC_OP_RIGHT  */
  YYSYMBOL_DEC_OP_LEFT = 15,               /* DEC_OP_LEFT  */
  YYSYMBOL_DEC_OP_RIGHT = 16,              /* DEC_OP_RIGHT  */
  YYSYMBOL_GE_OP = 17,                     /* GE_OP  */
  YYSYMBOL_LE_OP = 18,                     /* LE_OP  */
  YYSYMBOL_EQ_OP = 19,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 20,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 21,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 22,                     /* OR_OP  */
  YYSYMBOL_DECLARE = 23,                   /* DECLARE  */
  YYSYMBOL_DECLARE_ARRAY = 24,             /* DECLARE_ARRAY  */
  YYSYMBOL_ARRAY = 25,                     /* ARRAY  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_BREAK = 28,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 29,                  /* CONTINUE  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_RETURN = 32,                    /* RETURN  */
  YYSYMBOL_PRINTF = 33,                    /* PRINTF  */
  YYSYMBOL_STRLEN = 34,                    /* STRLEN  */
  YYSYMBOL_35_ = 35,                       /* '-'  */
  YYSYMBOL_36_ = 36,                       /* '+'  */
  YYSYMBOL_37_ = 37,                       /* '>'  */
  YYSYMBOL_38_ = 38,                       /* '<'  */
  YYSYMBOL_39_ = 39,                       /* '*'  */
  YYSYMBOL_40_ = 40,                       /* '/'  */
  YYSYMBOL_41_ = 41,                       /* '}'  */
  YYSYMBOL_42_ = 42,                       /* '{'  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '['  */
  YYSYMBOL_46_ = 46,                       /* ']'  */
  YYSYMBOL_47_ = 47,                       /* '='  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* ':'  */
  YYSYMBOL_50_ = 50,                       /* '!'  */
  YYSYMBOL_51_ = 51,                       /* ';'  */
  YYSYMBOL_52_ = 52,                       /* '.'  */
  YYSYMBOL_53_ = 53,                       /* '%'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_program = 55,                   /* program  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_functionList = 57,              /* functionList  */
  YYSYMBOL_function = 58,                  /* function  */
  YYSYMBOL_59_2 = 59,                      /* $@2  */
  YYSYMBOL_60_3 = 60,                      /* $@3  */
  YYSYMBOL_61_4 = 61,                      /* $@4  */
  YYSYMBOL_parameterList = 62,             /* parameterList  */
  YYSYMBOL_63_5 = 63,                      /* $@5  */
  YYSYMBOL_parameter = 64,                 /* parameter  */
  YYSYMBOL_typeName = 65,                  /* typeName  */
  YYSYMBOL_statementList = 66,             /* statementList  */
  YYSYMBOL_statement = 67,                 /* statement  */
  YYSYMBOL_68_6 = 68,                      /* $@6  */
  YYSYMBOL_69_7 = 69,                      /* $@7  */
  YYSYMBOL_70_8 = 70,                      /* $@8  */
  YYSYMBOL_71_9 = 71,                      /* $@9  */
  YYSYMBOL_72_10 = 72,                     /* $@10  */
  YYSYMBOL_73_11 = 73,                     /* $@11  */
  YYSYMBOL_74_12 = 74,                     /* $@12  */
  YYSYMBOL_75_13 = 75,                     /* $@13  */
  YYSYMBOL_76_14 = 76,                     /* $@14  */
  YYSYMBOL_77_15 = 77,                     /* $@15  */
  YYSYMBOL_78_16 = 78,                     /* $@16  */
  YYSYMBOL_79_17 = 79,                     /* $@17  */
  YYSYMBOL_80_18 = 80,                     /* $@18  */
  YYSYMBOL_elseStatement = 81,             /* elseStatement  */
  YYSYMBOL_82_19 = 82,                     /* $@19  */
  YYSYMBOL_exprList = 83,                  /* exprList  */
  YYSYMBOL_84_20 = 84,                     /* $@20  */
  YYSYMBOL_expr = 85,                      /* expr  */
  YYSYMBOL_86_21 = 86,                     /* $@21  */
  YYSYMBOL_87_22 = 87,                     /* $@22  */
  YYSYMBOL_88_23 = 88,                     /* $@23  */
  YYSYMBOL_89_24 = 89,                     /* $@24  */
  YYSYMBOL_operator = 90,                  /* operator  */
  YYSYMBOL_terminalList = 91,              /* terminalList  */
  YYSYMBOL_92_25 = 92,                     /* $@25  */
  YYSYMBOL_terminal = 93                   /* terminal  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   607

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
       2,     2,     2,    50,     2,     2,     2,    53,     2,     2,
      43,    44,    39,    36,    48,    35,    52,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    51,
      38,    47,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    41,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    37,    43,    44,    48,    48,    48,    49,
      49,    53,    54,    54,    58,    59,    63,    64,    65,    69,
      70,    74,    75,    75,    75,    75,    76,    76,    77,    77,
      78,    79,    79,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    85,    86,    87,    87,    88,    89,
      90,    91,    92,    95,    95,    96,    99,   100,   100,   104,
     105,   106,   107,   107,   108,   108,   109,   110,   110,   111,
     111,   112,   113,   114,   115,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   133,   134,   134,
     137,   138,   139,   140
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
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER",
  "DOUBLE_NUM", "INT", "CHAR", "DOUBLE", "IDENTIFIER", "STRING", "CONST",
  "INC_OP", "DEC_OP", "INC_OP_LEFT", "INC_OP_RIGHT", "DEC_OP_LEFT",
  "DEC_OP_RIGHT", "GE_OP", "LE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "DECLARE", "DECLARE_ARRAY", "ARRAY", "FOR", "WHILE", "BREAK", "CONTINUE",
  "IF", "ELSE", "RETURN", "PRINTF", "STRLEN", "'-'", "'+'", "'>'", "'<'",
  "'*'", "'/'", "'}'", "'{'", "'('", "')'", "'['", "']'", "'='", "','",
  "':'", "'!'", "';'", "'.'", "'%'", "$accept", "program", "$@1",
  "functionList", "function", "$@2", "$@3", "$@4", "parameterList", "$@5",
  "parameter", "typeName", "statementList", "statement", "$@6", "$@7",
  "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16",
  "$@17", "$@18", "elseStatement", "$@19", "exprList", "$@20", "expr",
  "$@21", "$@22", "$@23", "$@24", "operator", "terminalList", "$@25",
  "terminal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-102)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-19)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -102,    10,    54,  -102,  -102,  -102,  -102,  -102,    54,    -3,
    -102,   -32,   -29,   -13,    54,  -102,    -8,   -17,    39,    90,
       7,  -102,    12,  -102,    55,    11,  -102,    54,     5,     5,
      21,  -102,  -102,    26,    27,     5,  -102,  -102,    59,    30,
      90,   555,  -102,  -102,    54,    28,     5,     5,  -102,    64,
    -102,   -23,     5,     5,   124,   159,     5,    33,     5,  -102,
      69,   567,     5,     5,   -24,  -102,  -102,    29,    31,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,     5,    90,  -102,  -102,    35,   439,    34,   471,    34,
       5,    36,  -102,  -102,   567,   567,  -102,  -102,  -102,  -102,
     483,     5,   194,     5,    37,   513,   567,     6,  -102,  -102,
    -102,  -102,   567,    44,    38,  -102,  -102,    42,    40,    43,
      32,   229,  -102,    45,   525,  -102,    47,  -102,  -102,    48,
      58,     5,  -102,  -102,     5,  -102,  -102,     5,  -102,  -102,
       5,    90,  -102,    56,    -1,    66,   264,  -102,    34,   299,
     334,    70,    68,  -102,   110,  -102,  -102,  -102,     5,  -102,
    -102,  -102,  -102,  -102,    90,    72,     5,     5,   369,    73,
      74,   404,    75,  -102,  -102,    77,  -102,    78,    84,    86,
    -102,    89,  -102,  -102,  -102,     5,    90,    85,    91,    99,
    -102,    92,  -102,     5,    96,   107,   100,  -102
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    16,    17,    18,     3,     4,     0,
       5,     0,     6,     0,     0,     9,     0,    11,     0,     0,
       0,    12,    14,    90,    93,    92,    91,     0,     0,     0,
       0,    22,    26,     0,     0,     0,    69,    67,     0,     0,
      19,     0,    59,     7,     0,     0,     0,     0,    31,     0,
      93,    92,     0,     0,     0,     0,     0,     0,     0,    28,
       0,    60,     0,     0,     0,    10,    20,    73,    74,    86,
      85,    81,    82,    84,    83,    76,    75,    80,    79,    77,
      78,     0,     0,    13,    15,     0,    56,     0,     0,     0,
       0,     0,    62,    64,    71,    72,    73,    74,    49,    50,
       0,     0,     0,     0,     0,     0,    68,     0,    34,    48,
      51,    52,    66,     0,     0,    57,    92,     0,    87,     0,
       0,     0,    36,     0,     0,    27,     0,    61,    70,     0,
       0,     0,     8,    30,     0,    63,    88,     0,    65,    32,
       0,     0,    23,     0,     0,    38,     0,    58,     0,     0,
       0,     0,     0,    29,     0,    46,    45,    40,     0,    35,
      89,    33,    37,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    24,     0,    47,     0,    55,     0,
      41,     0,    25,    42,    53,     0,     0,     0,     0,     0,
      54,     0,    43,     0,     0,     0,     0,    44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,   142,  -102,  -102,  -102,  -102,   108,  -102,
    -102,    24,   -37,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -101,
    -102,   -28,  -102,  -102,  -102,  -102,  -102,     8,  -102,   -83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,     8,    14,    82,    19,    16,    44,
      17,    38,    39,    40,    57,   152,   178,    58,   103,    90,
     131,   140,   158,   167,   185,   193,   166,   182,   186,    85,
     134,    41,    87,    89,    63,    62,    81,   117,   148,    42
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    55,   126,    66,   118,    11,   120,    61,    23,   129,
       3,    12,    50,    51,    26,    13,    52,    53,    86,    88,
      92,   107,    93,   108,    94,    95,     9,   109,   100,    15,
     102,    21,     9,   147,   105,   106,    20,    23,    18,    34,
      35,    50,   116,    26,   154,   113,   155,    22,    36,    43,
     156,    49,   130,   112,    46,    37,    47,    45,    48,     4,
       5,     6,   121,   -18,    56,   118,   172,    64,    18,    59,
      60,    65,    91,   124,    84,    86,   101,   104,   138,   114,
     110,   127,   111,   122,   187,   132,   135,   141,   136,   133,
     137,   143,   194,    23,   144,     4,     5,    24,    25,    26,
      27,    28,    29,   146,   151,   145,    86,   153,   157,   149,
     164,   163,   150,   165,   174,   181,   177,    30,   170,   179,
      31,   175,    32,    33,    34,    35,   189,   169,   183,   180,
     168,   184,   190,    36,   192,    96,    97,   195,   171,    86,
      37,    69,    70,    71,    72,    73,    74,   191,   196,   188,
      10,   197,    83,     0,     0,     0,   160,    86,     0,    75,
      76,    77,    78,    79,    80,    86,     0,     0,     0,     0,
      96,    97,     0,     0,     0,    98,    69,    70,    71,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,    96,    97,     0,     0,     0,
      99,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,     0,
      96,    97,     0,     0,     0,   125,    69,    70,    71,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,    96,    97,     0,     0,     0,
     139,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,     0,
      96,    97,     0,     0,     0,   159,    69,    70,    71,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,    96,    97,     0,     0,     0,
     161,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,     0,
      96,    97,     0,     0,     0,   162,    69,    70,    71,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,    96,    97,     0,     0,     0,
     173,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,     0,
      96,    97,     0,     0,     0,   176,    69,    70,    71,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
       0,     0,    96,    97,     0,     0,     0,   115,    69,    70,
      71,    72,    73,    74,    96,    97,     0,     0,     0,     0,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     0,     0,     0,     0,     0,   119,    75,    76,
      77,    78,    79,    80,    96,    97,     0,   123,     0,     0,
      69,    70,    71,    72,    73,    74,    96,    97,     0,     0,
       0,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     0,     0,     0,   128,     0,     0,
      75,    76,    77,    78,    79,    80,    67,    68,     0,   142,
       0,     0,    69,    70,    71,    72,    73,    74,    96,    97,
       0,     0,     0,     0,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80
};

static const yytype_int16 yycheck[] =
{
      28,    29,   103,    40,    87,     8,    89,    35,     3,     3,
       0,    43,     7,     8,     9,    44,    11,    12,    46,    47,
      43,    45,    45,    47,    52,    53,     2,    51,    56,    42,
      58,    48,     8,   134,    62,    63,    44,     3,    14,    34,
      35,     7,     8,     9,    45,    82,    47,     8,    43,    42,
      51,    27,    46,    81,    43,    50,    45,    45,    47,     5,
       6,     7,    90,     8,    43,   148,   167,     8,    44,    43,
      43,    41,     8,   101,    46,   103,    43,     8,    46,    44,
      51,    44,    51,    47,   185,    41,    44,    42,    48,    51,
      47,    44,   193,     3,    46,     5,     6,     7,     8,     9,
      10,    11,    12,   131,   141,    47,   134,    51,    42,   137,
      42,    41,   140,     3,    41,    31,    41,    27,    46,    42,
      30,    47,    32,    33,    34,    35,    41,   164,    42,    51,
     158,    42,    41,    43,    42,    11,    12,    41,   166,   167,
      50,    17,    18,    19,    20,    21,    22,    48,    41,   186,
       8,    51,    44,    -1,    -1,    -1,   148,   185,    -1,    35,
      36,    37,    38,    39,    40,   193,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    51,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      51,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    51,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      51,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    51,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      51,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    51,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      51,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    51,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    11,    12,    -1,    -1,    -1,    48,    17,    18,
      19,    20,    21,    22,    11,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    46,    35,    36,
      37,    38,    39,    40,    11,    12,    -1,    44,    -1,    -1,
      17,    18,    19,    20,    21,    22,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      35,    36,    37,    38,    39,    40,    11,    12,    -1,    44,
      -1,    -1,    17,    18,    19,    20,    21,    22,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,    56,     0,     5,     6,     7,    57,    58,    65,
      57,     8,    43,    44,    59,    42,    62,    64,    65,    61,
      44,    48,     8,     3,     7,     8,     9,    10,    11,    12,
      27,    30,    32,    33,    34,    35,    43,    50,    65,    66,
      67,    85,    93,    42,    63,    45,    43,    45,    47,    65,
       7,     8,    11,    12,    85,    85,    43,    68,    71,    43,
      43,    85,    89,    88,     8,    41,    66,    11,    12,    17,
      18,    19,    20,    21,    22,    35,    36,    37,    38,    39,
      40,    90,    60,    62,    46,    83,    85,    86,    85,    87,
      73,     8,    43,    45,    85,    85,    11,    12,    51,    51,
      85,    43,    85,    72,     8,    85,    85,    45,    47,    51,
      51,    51,    85,    66,    44,    48,     8,    91,    93,    46,
      93,    85,    47,    44,    85,    51,    83,    44,    44,     3,
      46,    74,    41,    51,    84,    44,    48,    47,    46,    51,
      75,    42,    44,    44,    46,    47,    85,    83,    92,    85,
      85,    66,    69,    51,    45,    47,    51,    42,    76,    51,
      91,    51,    51,    41,    42,     3,    80,    77,    85,    66,
      46,    85,    83,    51,    41,    47,    51,    41,    70,    42,
      51,    31,    81,    42,    42,    78,    82,    83,    66,    41,
      41,    48,    42,    79,    83,    41,    41,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    56,    55,    57,    57,    59,    60,    58,    61,
      58,    62,    63,    62,    64,    64,    65,    65,    65,    66,
      66,    67,    68,    69,    70,    67,    71,    67,    72,    67,
      67,    73,    67,    67,    74,    67,    75,    67,    76,    67,
      77,    67,    78,    79,    67,    67,    80,    67,    67,    67,
      67,    67,    67,    82,    81,    81,    83,    84,    83,    85,
      85,    85,    86,    85,    87,    85,    85,    88,    85,    89,
      85,    85,    85,    85,    85,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    92,    91,
      93,    93,    93,    93
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     0,     0,    10,     0,
       8,     1,     0,     4,     2,     4,     1,     1,     1,     1,
       2,     7,     0,     0,     0,    11,     0,     4,     0,     6,
       5,     0,     5,     7,     0,     6,     0,     7,     0,     8,
       0,    10,     0,     0,    21,     6,     0,     9,     3,     3,
       3,     3,     3,     0,     5,     0,     1,     0,     4,     1,
       2,     4,     0,     5,     0,     5,     3,     0,     3,     0,
       4,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     1,     1,     1
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
  case 2: /* $@1: %empty  */
#line 37 "grammar4.y"
        { printf("Comenzando a traducir a JavaScript\n"); create_output_file(); }
#line 1373 "grammar4.tab.c"
    break;

  case 3: /* program: $@1 functionList  */
#line 39 "grammar4.y"
        { close_output_file(); }
#line 1379 "grammar4.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 48 "grammar4.y"
                                {append_in_jsFile("function "); append_in_jsFile((yyvsp[-1].str)); append_in_jsFile("(");}
#line 1385 "grammar4.tab.c"
    break;

  case 7: /* $@3: %empty  */
#line 48 "grammar4.y"
                                                                                                                                    {append_in_jsFile("){ \n");}
#line 1391 "grammar4.tab.c"
    break;

  case 8: /* function: typeName IDENTIFIER '(' $@2 parameterList ')' '{' $@3 statementList '}'  */
#line 48 "grammar4.y"
                                                                                                                                                                                   {append_in_jsFile("\n} \n");}
#line 1397 "grammar4.tab.c"
    break;

  case 9: /* $@4: %empty  */
#line 49 "grammar4.y"
                                       {append_in_jsFile("function "); append_in_jsFile((yyvsp[-3].str)); append_in_jsFile("(){ \n");}
#line 1403 "grammar4.tab.c"
    break;

  case 10: /* function: typeName IDENTIFIER '(' ')' '{' $@4 statementList '}'  */
#line 49 "grammar4.y"
                                                                                                                                            {append_in_jsFile("\n} \n");}
#line 1409 "grammar4.tab.c"
    break;

  case 12: /* $@5: %empty  */
#line 54 "grammar4.y"
                     {append_in_jsFile(", ");}
#line 1415 "grammar4.tab.c"
    break;

  case 14: /* parameter: typeName IDENTIFIER  */
#line 58 "grammar4.y"
                            {append_in_jsFile((yyvsp[0].str));}
#line 1421 "grammar4.tab.c"
    break;

  case 22: /* $@6: %empty  */
#line 75 "grammar4.y"
           {append_in_jsFile("if(");}
#line 1427 "grammar4.tab.c"
    break;

  case 23: /* $@7: %empty  */
#line 75 "grammar4.y"
                                                   {append_in_jsFile("){ \n");}
#line 1433 "grammar4.tab.c"
    break;

  case 24: /* $@8: %empty  */
#line 75 "grammar4.y"
                                                                                                      {append_in_jsFile("\n} \n");}
#line 1439 "grammar4.tab.c"
    break;

  case 26: /* $@9: %empty  */
#line 76 "grammar4.y"
               {append_in_jsFile("return ");}
#line 1445 "grammar4.tab.c"
    break;

  case 27: /* statement: RETURN $@9 expr ';'  */
#line 76 "grammar4.y"
                                                      {append_in_jsFile("\n");}
#line 1451 "grammar4.tab.c"
    break;

  case 28: /* $@10: %empty  */
#line 77 "grammar4.y"
                   {append_in_jsFile("console.log(");}
#line 1457 "grammar4.tab.c"
    break;

  case 29: /* statement: PRINTF '(' $@10 exprList ')' ';'  */
#line 77 "grammar4.y"
                                                                         {append_in_jsFile(") \n");}
#line 1463 "grammar4.tab.c"
    break;

  case 31: /* $@11: %empty  */
#line 79 "grammar4.y"
                       {append_in_jsFile((yyvsp[-1].str));append_in_jsFile(" = ");}
#line 1469 "grammar4.tab.c"
    break;

  case 32: /* statement: IDENTIFIER '=' $@11 expr ';'  */
#line 79 "grammar4.y"
                                                                                {append_in_jsFile("\n");}
#line 1475 "grammar4.tab.c"
    break;

  case 34: /* $@12: %empty  */
#line 81 "grammar4.y"
                                {append_in_jsFile("let "); append_in_jsFile((yyvsp[-1].str));append_in_jsFile(" = ");}
#line 1481 "grammar4.tab.c"
    break;

  case 35: /* statement: typeName IDENTIFIER '=' $@12 expr ';'  */
#line 81 "grammar4.y"
                                                                                                                    {append_in_jsFile("\n");}
#line 1487 "grammar4.tab.c"
    break;

  case 36: /* $@13: %empty  */
#line 82 "grammar4.y"
                                      {append_in_jsFile("const "); append_in_jsFile((yyvsp[-1].str));append_in_jsFile(" = ");}
#line 1493 "grammar4.tab.c"
    break;

  case 37: /* statement: CONST typeName IDENTIFIER '=' $@13 expr ';'  */
#line 82 "grammar4.y"
                                                                                                                            {append_in_jsFile("\n");}
#line 1499 "grammar4.tab.c"
    break;

  case 38: /* $@14: %empty  */
#line 83 "grammar4.y"
                                        {append_in_jsFile("let "); append_in_jsFile((yyvsp[-3].str));append_in_jsFile(" = ");}
#line 1505 "grammar4.tab.c"
    break;

  case 39: /* statement: typeName IDENTIFIER '[' ']' '=' $@14 expr ';'  */
#line 83 "grammar4.y"
                                                                                                                           {append_in_jsFile("\n");}
#line 1511 "grammar4.tab.c"
    break;

  case 40: /* $@15: %empty  */
#line 84 "grammar4.y"
                                            {append_in_jsFile("let "); append_in_jsFile((yyvsp[-4].str));append_in_jsFile(" = [");}
#line 1517 "grammar4.tab.c"
    break;

  case 41: /* statement: typeName IDENTIFIER '[' ']' '=' '{' $@15 exprList '}' ';'  */
#line 84 "grammar4.y"
                                                                                                                                        { append_in_jsFile("]\n");}
#line 1523 "grammar4.tab.c"
    break;

  case 42: /* $@16: %empty  */
#line 85 "grammar4.y"
                                                                        {append_in_jsFile("let "); append_in_jsFile((yyvsp[-9].str));append_in_jsFile(" = [[");}
#line 1529 "grammar4.tab.c"
    break;

  case 43: /* $@17: %empty  */
#line 85 "grammar4.y"
                                                                                                                                                                         {append_in_jsFile("], [");}
#line 1535 "grammar4.tab.c"
    break;

  case 44: /* statement: typeName IDENTIFIER '[' INTEGER ']' '[' INTEGER ']' '=' '{' '{' $@16 exprList '}' ',' '{' $@17 exprList '}' '}' ';'  */
#line 85 "grammar4.y"
                                                                                                                                                                                                                          { append_in_jsFile("]]\n");}
#line 1541 "grammar4.tab.c"
    break;

  case 45: /* statement: typeName IDENTIFIER '[' INTEGER ']' ';'  */
#line 86 "grammar4.y"
                                                {append_in_jsFile("let "); append_in_jsFile((yyvsp[-4].str));append_in_jsFile("= new Array(");append_in_jsFile((yyvsp[-2].num));append_in_jsFile(") \n");}
#line 1547 "grammar4.tab.c"
    break;

  case 46: /* $@18: %empty  */
#line 87 "grammar4.y"
                                                {append_in_jsFile("let "); append_in_jsFile((yyvsp[-4].str));append_in_jsFile("= {");append_in_jsFile((yyvsp[-2].num));append_in_jsFile("]");append_in_jsFile("=");}
#line 1553 "grammar4.tab.c"
    break;

  case 47: /* statement: typeName IDENTIFIER '[' INTEGER ']' '=' $@18 expr ';'  */
#line 87 "grammar4.y"
                                                                                                                                                                                                     {append_in_jsFile("\n");}
#line 1559 "grammar4.tab.c"
    break;

  case 48: /* statement: typeName IDENTIFIER ';'  */
#line 88 "grammar4.y"
                                {append_in_jsFile("let "); append_in_jsFile((yyvsp[-1].str));append_in_jsFile("\n");}
#line 1565 "grammar4.tab.c"
    break;

  case 53: /* $@19: %empty  */
#line 95 "grammar4.y"
                 {append_in_jsFile("else{ \n");}
#line 1571 "grammar4.tab.c"
    break;

  case 54: /* elseStatement: ELSE '{' $@19 statementList '}'  */
#line 95 "grammar4.y"
                                                                    {append_in_jsFile("\n} \n");}
#line 1577 "grammar4.tab.c"
    break;

  case 57: /* $@20: %empty  */
#line 100 "grammar4.y"
                 {append_in_jsFile(", ");}
#line 1583 "grammar4.tab.c"
    break;

  case 59: /* expr: terminal  */
#line 104 "grammar4.y"
                  {append_in_jsFile((yyvsp[0].str));}
#line 1589 "grammar4.tab.c"
    break;

  case 62: /* $@21: %empty  */
#line 107 "grammar4.y"
                       {append_in_jsFile((yyvsp[-1].str)); append_in_jsFile("("); }
#line 1595 "grammar4.tab.c"
    break;

  case 63: /* expr: IDENTIFIER '(' $@21 terminalList ')'  */
#line 107 "grammar4.y"
                                                                                        {append_in_jsFile(")");}
#line 1601 "grammar4.tab.c"
    break;

  case 64: /* $@22: %empty  */
#line 108 "grammar4.y"
                       {append_in_jsFile((yyvsp[-1].str)); append_in_jsFile("["); }
#line 1607 "grammar4.tab.c"
    break;

  case 65: /* expr: IDENTIFIER '[' $@22 terminal ']'  */
#line 108 "grammar4.y"
                                                                                     {append_in_jsFile("]");}
#line 1613 "grammar4.tab.c"
    break;

  case 67: /* $@23: %empty  */
#line 110 "grammar4.y"
            {append_in_jsFile("!");}
#line 1619 "grammar4.tab.c"
    break;

  case 68: /* expr: '!' $@23 expr  */
#line 110 "grammar4.y"
                                          {append_in_jsFile("\n");}
#line 1625 "grammar4.tab.c"
    break;

  case 69: /* $@24: %empty  */
#line 111 "grammar4.y"
           {append_in_jsFile("(");}
#line 1631 "grammar4.tab.c"
    break;

  case 70: /* expr: '(' $@24 expr ')'  */
#line 111 "grammar4.y"
                                             {append_in_jsFile(")\n");}
#line 1637 "grammar4.tab.c"
    break;

  case 75: /* operator: '+'  */
#line 119 "grammar4.y"
            {append_in_jsFile("+");}
#line 1643 "grammar4.tab.c"
    break;

  case 76: /* operator: '-'  */
#line 120 "grammar4.y"
              {append_in_jsFile("-");}
#line 1649 "grammar4.tab.c"
    break;

  case 77: /* operator: '*'  */
#line 121 "grammar4.y"
              {append_in_jsFile("*");}
#line 1655 "grammar4.tab.c"
    break;

  case 78: /* operator: '/'  */
#line 122 "grammar4.y"
              {append_in_jsFile("/");}
#line 1661 "grammar4.tab.c"
    break;

  case 79: /* operator: '<'  */
#line 123 "grammar4.y"
              {append_in_jsFile("<");}
#line 1667 "grammar4.tab.c"
    break;

  case 80: /* operator: '>'  */
#line 124 "grammar4.y"
              {append_in_jsFile(">");}
#line 1673 "grammar4.tab.c"
    break;

  case 81: /* operator: EQ_OP  */
#line 125 "grammar4.y"
                {append_in_jsFile("==");}
#line 1679 "grammar4.tab.c"
    break;

  case 82: /* operator: NE_OP  */
#line 126 "grammar4.y"
                {append_in_jsFile("!=");}
#line 1685 "grammar4.tab.c"
    break;

  case 83: /* operator: OR_OP  */
#line 127 "grammar4.y"
                {append_in_jsFile("||");}
#line 1691 "grammar4.tab.c"
    break;

  case 84: /* operator: AND_OP  */
#line 128 "grammar4.y"
                 {append_in_jsFile("&&");}
#line 1697 "grammar4.tab.c"
    break;

  case 85: /* operator: LE_OP  */
#line 129 "grammar4.y"
                {append_in_jsFile("<=");}
#line 1703 "grammar4.tab.c"
    break;

  case 86: /* operator: GE_OP  */
#line 130 "grammar4.y"
                {append_in_jsFile(">=");}
#line 1709 "grammar4.tab.c"
    break;

  case 87: /* terminalList: terminal  */
#line 133 "grammar4.y"
                 {append_in_jsFile((yyvsp[0].str));}
#line 1715 "grammar4.tab.c"
    break;

  case 88: /* $@25: %empty  */
#line 134 "grammar4.y"
                       {append_in_jsFile(", "); append_in_jsFile((yyvsp[0].str)); }
#line 1721 "grammar4.tab.c"
    break;

  case 90: /* terminal: INTEGER  */
#line 137 "grammar4.y"
                {char num_str[20]; snprintf(num_str, sizeof(num_str), "%d", (yyvsp[0].num)); (yyval.str) = strdup(num_str);}
#line 1727 "grammar4.tab.c"
    break;

  case 91: /* terminal: STRING  */
#line 138 "grammar4.y"
                 {(yyval.str) = strdup((yyvsp[0].str));}
#line 1733 "grammar4.tab.c"
    break;

  case 92: /* terminal: IDENTIFIER  */
#line 139 "grammar4.y"
                   {(yyval.str) = strdup((yyvsp[0].str));}
#line 1739 "grammar4.tab.c"
    break;


#line 1743 "grammar4.tab.c"

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

#line 142 "grammar4.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la línea %d\n", message, yylineno);
    return -1;
}
