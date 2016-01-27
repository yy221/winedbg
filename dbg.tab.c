/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         dbg_parse
#define yylex           dbg_lex
#define yyerror         dbg_error
#define yydebug         dbg_debug
#define yynerrs         dbg_nerrs

#define yylval          dbg_lval
#define yychar          dbg_char

/* Copy the first part of user declarations.  */
#line 1 "dbg.y" /* yacc.c:339  */

/*
 * Parser for command lines in the Wine debugger
 *
 * Copyright 1993 Eric Youngdale
 * Copyright 1995 Morten Welinder
 * Copyright 2000 Eric Pouech
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include "config.h"
#include "wine/port.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "debugger.h"
#include "wine/exception.h"
#include "expr.h"

int dbg_lex(void);
static int dbg_error(const char*);
static void parser(const char*);


#line 114 "dbg.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int dbg_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    tCONT = 258,
    tPASS = 259,
    tSTEP = 260,
    tLIST = 261,
    tNEXT = 262,
    tQUIT = 263,
    tHELP = 264,
    tBACKTRACE = 265,
    tALL = 266,
    tINFO = 267,
    tUP = 268,
    tDOWN = 269,
    tENABLE = 270,
    tDISABLE = 271,
    tBREAK = 272,
    tHBREAK = 273,
    tWATCH = 274,
    tRWATCH = 275,
    tDELETE = 276,
    tSET = 277,
    tPRINT = 278,
    tEXAM = 279,
    tABORT = 280,
    tECHO = 281,
    tCLASS = 282,
    tMAPS = 283,
    tSTACK = 284,
    tSEGMENTS = 285,
    tSYMBOL = 286,
    tREGS = 287,
    tALLREGS = 288,
    tWND = 289,
    tLOCAL = 290,
    tEXCEPTION = 291,
    tHANDLE = 292,
    tPROCESS = 293,
    tTHREAD = 294,
    tEOL = 295,
    tEOF = 296,
    tFRAME = 297,
    tSHARE = 298,
    tMODULE = 299,
    tCOND = 300,
    tDISPLAY = 301,
    tUNDISPLAY = 302,
    tDISASSEMBLE = 303,
    tSTEPI = 304,
    tNEXTI = 305,
    tFINISH = 306,
    tSHOW = 307,
    tDIR = 308,
    tWHATIS = 309,
    tSOURCE = 310,
    tPATH = 311,
    tIDENTIFIER = 312,
    tSTRING = 313,
    tINTVAR = 314,
    tNUM = 315,
    tFORMAT = 316,
    tSYMBOLFILE = 317,
    tRUN = 318,
    tATTACH = 319,
    tDETACH = 320,
    tKILL = 321,
    tMAINTENANCE = 322,
    tTYPE = 323,
    tMINIDUMP = 324,
    tNOPROCESS = 325,
    tCHAR = 326,
    tSHORT = 327,
    tINT = 328,
    tLONG = 329,
    tFLOAT = 330,
    tDOUBLE = 331,
    tUNSIGNED = 332,
    tSIGNED = 333,
    tSTRUCT = 334,
    tUNION = 335,
    tENUM = 336,
    OP_LOR = 337,
    OP_LAND = 338,
    OP_EQ = 339,
    OP_NE = 340,
    OP_LE = 341,
    OP_GE = 342,
    OP_SHL = 343,
    OP_SHR = 344,
    OP_SIGN = 345,
    OP_DEREF = 346,
    OP_DRF = 347,
    OP_SCOPE = 348
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 42 "dbg.y" /* yacc.c:355  */

    struct dbg_lvalue   lvalue;
    char*               string;
    INT_PTR             integer;
    IMAGEHLP_LINE64     listing;
    struct expr*        expression;
    struct type_expr_t  type;

#line 254 "dbg.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE dbg_lval;

int dbg_parse (void);



/* Copy the second part of user declarations.  */

#line 269 "dbg.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  170
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   917

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  347

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   101,     2,     2,     2,    99,    86,     2,
     111,   112,    97,    95,   109,    96,   104,    98,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   108,     2,
      89,   110,    90,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   105,     2,   113,    85,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    84,     2,   102,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    87,
      88,    91,    92,    93,    94,   100,   103,   106,   107
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    95,    95,    96,   100,   101,   102,   103,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   160,   161,
     162,   166,   167,   172,   173,   178,   179,   180,   181,   182,
     188,   189,   193,   194,   195,   196,   197,   201,   202,   203,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   221,   222,   226,   227,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   250,   251,   252,   253,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     299,   300,   301,   305,   306,   307,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   340,   344,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   401,   405,   406,   407,   408,   409,
     410,   411
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tCONT", "tPASS", "tSTEP", "tLIST",
  "tNEXT", "tQUIT", "tHELP", "tBACKTRACE", "tALL", "tINFO", "tUP", "tDOWN",
  "tENABLE", "tDISABLE", "tBREAK", "tHBREAK", "tWATCH", "tRWATCH",
  "tDELETE", "tSET", "tPRINT", "tEXAM", "tABORT", "tECHO", "tCLASS",
  "tMAPS", "tSTACK", "tSEGMENTS", "tSYMBOL", "tREGS", "tALLREGS", "tWND",
  "tLOCAL", "tEXCEPTION", "tHANDLE", "tPROCESS", "tTHREAD", "tEOL", "tEOF",
  "tFRAME", "tSHARE", "tMODULE", "tCOND", "tDISPLAY", "tUNDISPLAY",
  "tDISASSEMBLE", "tSTEPI", "tNEXTI", "tFINISH", "tSHOW", "tDIR",
  "tWHATIS", "tSOURCE", "tPATH", "tIDENTIFIER", "tSTRING", "tINTVAR",
  "tNUM", "tFORMAT", "tSYMBOLFILE", "tRUN", "tATTACH", "tDETACH", "tKILL",
  "tMAINTENANCE", "tTYPE", "tMINIDUMP", "tNOPROCESS", "tCHAR", "tSHORT",
  "tINT", "tLONG", "tFLOAT", "tDOUBLE", "tUNSIGNED", "tSIGNED", "tSTRUCT",
  "tUNION", "tENUM", "OP_LOR", "OP_LAND", "'|'", "'^'", "'&'", "OP_EQ",
  "OP_NE", "'<'", "'>'", "OP_LE", "OP_GE", "OP_SHL", "OP_SHR", "'+'",
  "'-'", "'*'", "'/'", "'%'", "OP_SIGN", "'!'", "'~'", "OP_DEREF", "'.'",
  "'['", "OP_DRF", "OP_SCOPE", "':'", "','", "'='", "'('", "')'", "']'",
  "$accept", "input", "line", "command", "pathname", "cpp_identifier",
  "identifier", "list_arg", "run_command", "list_command",
  "disassemble_command", "set_command", "x_command", "print_command",
  "break_command", "watch_command", "display_command", "info_command",
  "maintenance_command", "noprocess_state", "type_expr", "expr_lvalue",
  "expr_rvalue", "expr", "lvalue_addr", "lvalue", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   124,    94,    38,   339,   340,    60,
      62,   341,   342,   343,   344,    43,    45,    42,    47,    37,
     345,    33,   126,   346,    46,    91,   347,   348,    58,    44,
      61,    40,    41,    93
};
# endif

#define YYPACT_NINF -84

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-84)))

#define YYTABLE_NINF -102

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-102)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     345,   -25,   -35,   -84,    -9,   -19,    14,   -84,    23,    -6,
     102,    19,    33,   110,   125,    66,   104,   -49,   -28,   126,
      58,   344,   361,   -84,    88,   -84,   -84,    56,    87,   374,
      97,   391,    98,   116,   -84,   115,   117,   391,   117,   117,
     134,   124,   -84,   -84,   -16,   117,    -3,   275,   -84,   162,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   128,   -84,   -84,   -84,
     391,   140,   119,   -84,   -22,    96,   -84,   -84,   -84,   -84,
     -84,   172,   391,   178,   391,   181,   -84,   -84,   391,   -84,
     -84,   391,   -84,   -84,   391,   391,   -84,   206,   -84,   -84,
     200,   201,   -84,   202,   203,   -84,   -84,   391,   159,   -37,
     -84,   391,   163,   -36,   391,   165,   391,   165,   210,   214,
     -84,   -83,   -84,   -84,    -1,    15,   391,   220,   165,   176,
     127,   -84,   -84,   -84,   391,   391,   391,   391,   391,   391,
     391,   -13,   -75,   -84,   639,   391,   -84,   -84,   -84,   391,
     391,   639,   -84,   193,   -84,   -84,   -84,   -84,   165,   -84,
     -84,   391,   -84,   -84,   246,   -84,   261,   -84,   295,   -84,
     -84,   -84,   -84,   250,   -84,   -84,    35,   252,   140,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   391,
     -84,   -84,   -84,   -84,   -84,   253,   -84,   258,   -84,   -84,
     -84,   -84,    42,    46,   -84,   -84,   -84,   -84,   639,   255,
     391,   262,   391,   274,   -84,    61,    61,    61,    61,    61,
      61,   250,   -84,     3,   -84,    28,   -84,   -84,   108,   239,
     250,   250,   250,   -81,   577,    92,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   277,   391,   278,   391,   -84,   639,
     639,   391,   -84,   -84,   285,   -84,   225,   165,   -84,   165,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   160,   -84,   165,   -84,   260,   -84,   118,   -84,
     263,   -84,   -84,   -84,   165,   165,   165,   -84,   391,   -84,
     -84,   453,   665,   690,   714,   737,   759,   779,   779,   795,
     795,   795,   795,   809,   809,   276,   276,    61,    61,    61,
     -84,   421,   -84,   248,   -84,   -84,   -84,   -84,   -84,   299,
     -84,    61,   391,   -84,   -84,   -84,   484,   391,   -84,   515,
     391,   -84,   546,   391,   -84,   608,   -84
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    12,    11,    14,    72,    16,     8,     9,    24,
       0,    27,    29,     0,     0,    99,   104,     0,     0,     0,
       0,     0,     0,    23,     0,     5,     6,     0,     0,   115,
     123,    77,    18,    20,    22,     0,    34,     0,     0,     0,
      70,     0,    42,    43,     0,     0,   153,     0,     2,     0,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     7,    13,    15,    60,    61,    59,    65,    73,
       0,     0,     0,    63,    67,    74,    17,    10,    26,    25,
     124,   136,   146,   132,   130,     0,   127,   128,   138,   134,
     148,     0,   142,   143,   144,   125,   135,     0,    28,    30,
       0,     0,   105,     0,     0,   107,    98,     0,     0,    58,
     103,     0,     0,    58,     0,   112,     0,   114,     0,   121,
     109,    61,   226,   225,     0,     0,     0,     0,   227,     0,
     224,   185,   186,   184,     0,     0,     0,     0,     0,     0,
       0,     0,   187,    93,   182,     0,    91,    45,    31,    35,
       0,   116,   122,    78,    19,    21,    32,    33,    58,    40,
      37,    38,    71,    41,     0,   150,     0,    44,     0,   155,
       1,     3,     4,     0,    69,    75,     0,     0,     0,   137,
     183,   147,   131,   129,   133,   139,   149,   145,   126,   140,
     106,   118,   108,   119,    95,     0,   100,     0,   111,   113,
     110,   120,     0,     0,    82,    81,    84,    83,   231,    90,
       0,     0,     0,     0,    94,   222,   217,   216,   221,   218,
     219,     0,   156,   165,   157,   159,   174,   175,   161,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    36,
     117,     0,    39,   151,     0,   154,    64,     0,    66,    68,
      62,    76,   141,    97,   102,    86,    85,    88,    87,    89,
      80,   229,     0,   228,   178,   164,   167,   158,   173,   176,
     163,   169,   160,   168,   179,   180,   181,   177,     0,   220,
     190,     0,   198,   199,   200,   202,   201,   203,   208,   205,
     204,   207,   206,   209,   210,   211,   212,   213,   214,   215,
     189,     0,   188,   197,    79,   152,   230,   166,   172,   171,
     162,   223,     0,   191,   196,   170,     0,     0,   192,     0,
       0,   193,     0,     0,   194,     0,   195
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   300,   -84,   428,   204,     4,   -65,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -20,   -61,   -29,   -84,   -84
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    47,    48,    49,    72,    73,   142,    75,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
     233,   180,   181,   144,   129,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     151,   143,   146,   -96,  -101,    78,   175,   168,    66,    74,
     204,   153,   202,   203,   221,    62,   297,   159,   173,   109,
     113,   115,   117,   183,   128,    63,   206,   185,   164,    66,
     186,   298,   177,   187,   188,    77,   235,    65,    66,    67,
     158,    68,   158,   158,    66,   131,   132,   133,   114,   158,
     174,    64,   165,   275,    79,   169,   205,   277,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   116,
     177,   177,   207,   135,    76,    74,   285,    69,    70,    98,
     286,   166,   136,   137,   138,   177,   -58,   194,   139,   140,
      71,   196,    66,    99,   198,   268,   199,   208,   141,   276,
     262,   287,   288,   278,   289,   290,   215,   216,   217,   218,
     219,   220,   234,   271,   214,   121,   148,   122,   123,    80,
     259,   260,    65,    66,    67,   258,   106,   100,   272,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   103,   118,    94,    95,   147,   149,    96,    66,
     131,   132,   133,   124,   125,   126,   101,   152,   154,   127,
      65,    66,    67,   107,   110,   254,   255,   256,   156,   257,
     102,   104,   119,    65,    66,    67,   155,   267,   135,   291,
     269,   292,    74,   282,   163,   105,   120,   136,   137,   138,
     280,   328,   162,   139,   140,   329,    65,    66,    67,    97,
      68,   111,   172,   141,   300,   178,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   284,   321,   176,   323,   173,
     179,   211,   212,   213,   294,   295,   296,    70,   182,   184,
     189,   324,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     190,   191,   192,   193,   254,   255,   256,   195,   257,   331,
     200,   197,   177,   326,   201,   170,     1,   209,     2,     3,
       4,     5,     6,     7,     8,     9,   210,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   261,   336,   263,   264,   265,    66,   339,   270,
     293,   342,   279,   273,   345,    25,    26,    27,   274,   281,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   283,   -63,   327,   320,   322,   330,    39,    40,    41,
      42,    43,    44,   325,    45,    46,     1,   171,     2,     3,
       4,     5,     6,     7,     8,     9,  -102,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   335,   251,   252,   253,     0,   266,     0,     0,
     254,   255,   256,     0,   257,    25,    26,    27,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    66,   131,   132,   133,   134,     0,    39,    40,    41,
      42,    43,    44,     0,    45,    46,     0,     0,    66,   131,
     132,   133,   145,     0,     0,     0,     0,     0,     0,     0,
     135,    66,   131,   132,   133,   150,     0,     0,     0,   136,
     137,   138,     0,   108,   112,   139,   140,   135,    66,   131,
     132,   133,     0,     0,     0,   141,   136,   137,   138,     0,
     135,     0,   139,   140,   157,     0,   160,   161,     0,   136,
     137,   138,   141,   167,     0,   139,   140,   135,     0,     0,
       0,     0,     0,     0,     0,   141,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,     0,   141,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,     0,     0,     0,     0,   254,   255,   256,     0,   257,
       0,     0,     0,     0,   334,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,     0,     0,     0,     0,   254,   255,   256,
       0,   257,   332,     0,     0,   333,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,     0,     0,     0,     0,   254,   255,
     256,     0,   257,   337,     0,     0,   338,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,     0,     0,     0,     0,   254,
     255,   256,     0,   257,   340,     0,     0,   341,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,     0,     0,     0,     0,
     254,   255,   256,     0,   257,   343,     0,     0,   344,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,     0,     0,     0,
       0,   254,   255,   256,     0,   257,     0,     0,     0,   299,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,     0,     0,
       0,     0,   254,   255,   256,     0,   257,     0,     0,     0,
     346,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,     0,
       0,     0,     0,   254,   255,   256,     0,   257,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,     0,     0,     0,     0,   254,
     255,   256,     0,   257,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
       0,     0,     0,     0,   254,   255,   256,     0,   257,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,     0,     0,     0,     0,   254,   255,
     256,     0,   257,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,     0,     0,     0,
       0,   254,   255,   256,     0,   257,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,     0,
       0,     0,     0,   254,   255,   256,     0,   257,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,     0,
       0,     0,     0,   254,   255,   256,     0,   257,   247,   248,
     249,   250,   251,   252,   253,     0,     0,     0,     0,   254,
     255,   256,     0,   257,   249,   250,   251,   252,   253,     0,
       0,     0,     0,   254,   255,   256,     0,   257
};

static const yytype_int16 yycheck[] =
{
      29,    21,    22,    40,    40,    11,    71,    10,    57,     5,
      11,    31,    95,    96,    27,    40,    97,    37,   101,    15,
      16,    17,    18,    84,    20,    60,    11,    88,    44,    57,
      91,   112,   107,    94,    95,    12,   111,    56,    57,    58,
      36,    60,    38,    39,    57,    58,    59,    60,    97,    45,
      70,    60,    68,    11,    60,    58,    57,    11,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    97,
     107,   107,    57,    86,    60,    71,    73,    96,    97,    60,
      77,    97,    95,    96,    97,   107,   108,   107,   101,   102,
     109,   111,    57,    60,   114,    60,   116,   126,   111,    57,
     161,    73,    74,    57,    76,    77,   135,   136,   137,   138,
     139,   140,   141,   178,   134,    57,    60,    59,    60,    17,
     149,   150,    56,    57,    58,   145,    60,    17,   189,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    17,    17,    42,    43,    58,    60,    46,    57,
      58,    59,    60,    95,    96,    97,    46,    60,    60,   101,
      56,    57,    58,    97,    60,   104,   105,   106,    53,   108,
      60,    46,    46,    56,    57,    58,    60,   173,    86,    71,
     176,    73,   178,   212,    60,    60,    60,    95,    96,    97,
     210,    73,    58,   101,   102,    77,    56,    57,    58,    97,
      60,    97,    40,   111,   112,   109,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   221,   255,   108,   257,   101,
      58,   104,   105,   106,   230,   231,   232,    97,    60,    58,
      34,   261,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      60,    60,    60,    60,   104,   105,   106,   108,   108,   298,
      60,   108,   107,   113,    60,     0,     1,    57,     3,     4,
       5,     6,     7,     8,     9,    10,   110,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   109,   332,    58,    44,    11,    57,   337,    57,
      71,   340,    57,    60,   343,    40,    41,    42,    60,    57,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    57,   107,    73,    57,    57,    73,    62,    63,    64,
      65,    66,    67,    58,    69,    70,     1,    47,     3,     4,
       5,     6,     7,     8,     9,    10,   108,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    73,    97,    98,    99,    -1,   173,    -1,    -1,
     104,   105,   106,    -1,   108,    40,    41,    42,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    57,    58,    59,    60,    61,    -1,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    -1,    -1,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    57,    58,    59,    60,    61,    -1,    -1,    -1,    95,
      96,    97,    -1,    15,    16,   101,   102,    86,    57,    58,
      59,    60,    -1,    -1,    -1,   111,    95,    96,    97,    -1,
      86,    -1,   101,   102,    36,    -1,    38,    39,    -1,    95,
      96,    97,   111,    45,    -1,   101,   102,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    95,    96,    97,    -1,
      -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,   108,
      -1,    -1,    -1,    -1,   113,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,   108,   109,    -1,    -1,   112,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,   105,
     106,    -1,   108,   109,    -1,    -1,   112,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,
     105,   106,    -1,   108,   109,    -1,    -1,   112,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,   108,   109,    -1,    -1,   112,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,   104,   105,   106,    -1,   108,    -1,    -1,    -1,   112,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,   105,   106,    -1,   108,    -1,    -1,    -1,
     112,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,   108,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,
     105,   106,    -1,   108,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,   104,   105,   106,    -1,   108,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,   105,
     106,    -1,   108,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,   104,   105,   106,    -1,   108,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,   108,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,   108,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,
     105,   106,    -1,   108,    95,    96,    97,    98,    99,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    40,    41,    42,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    62,
      63,    64,    65,    66,    67,    69,    70,   115,   116,   117,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,    40,    60,    60,    56,    57,    58,    60,    96,
      97,   109,   118,   119,   120,   121,    60,    12,    11,    60,
      17,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    42,    43,    46,    97,    60,    60,
      17,    46,    60,    17,    46,    60,    60,    97,   118,   120,
      60,    97,   118,   120,    97,   120,    97,   120,    17,    46,
      60,    57,    59,    60,    95,    96,    97,   101,   120,   138,
     139,    58,    59,    60,    61,    86,    95,    96,    97,   101,
     102,   111,   120,   135,   137,    61,   135,    58,    60,    60,
      61,   137,    60,   135,    60,    60,    53,   118,   120,   135,
     118,   118,    58,    60,    44,    68,    97,   118,    10,    58,
       0,   116,    40,   101,   135,   121,   108,   107,   109,    58,
     135,   136,    60,   136,    58,   136,   136,   136,   136,    34,
      60,    60,    60,    60,   135,   108,   135,   108,   135,   135,
      60,    60,    95,    96,    11,    57,    11,    57,   137,    57,
     110,   104,   105,   106,   135,   137,   137,   137,   137,   137,
     137,    27,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,   134,   137,   111,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   104,   105,   106,   108,   135,   137,
     137,   109,   136,    58,    44,    11,   119,   120,    60,   120,
      57,   121,   136,    60,    60,    11,    57,    11,    57,    57,
     135,    57,   137,    57,   120,    73,    77,    73,    74,    76,
      77,    71,    73,    71,   120,   120,   120,    97,   112,   112,
     112,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
      57,   137,    57,   137,   135,    58,   113,    73,    73,    77,
      73,   137,   109,   112,   113,    73,   137,   109,   112,   137,
     109,   112,   137,   109,   112,   137,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   114,   115,   115,   116,   116,   116,   116,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   118,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     122,   122,   123,   123,   123,   123,   123,   124,   124,   124,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   129,   129,   129,   129,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   132,   133,   133,   133,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   135,   136,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   138,   139,   139,   139,   139,   139,
     139,   139
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     2,     1,     1,
       2,     1,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     2,     2,     1,     2,     1,
       2,     2,     2,     2,     1,     2,     3,     2,     2,     3,
       2,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     2,
       1,     2,     1,     2,     2,     3,     4,     1,     2,     4,
       4,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       3,     2,     3,     2,     3,     3,     2,     4,     2,     1,
       3,     2,     4,     2,     1,     2,     3,     2,     3,     2,
       3,     3,     2,     3,     2,     1,     2,     3,     3,     3,
       3,     2,     2,     1,     2,     2,     3,     2,     2,     3,
       2,     3,     2,     3,     2,     2,     2,     3,     2,     3,
       3,     4,     2,     2,     2,     3,     2,     3,     2,     3,
       2,     3,     4,     1,     3,     2,     1,     1,     2,     1,
       2,     1,     3,     2,     2,     1,     3,     2,     2,     2,
       4,     3,     3,     2,     1,     1,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     4,     6,     8,    10,    12,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     2,     2,     4,     1,     1,     1,     1,     3,     3,
       4,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 4:
#line 100 "dbg.y" /* yacc.c:1646  */
    { expr_free_all(); }
#line 1731 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 102 "dbg.y" /* yacc.c:1646  */
    { return 1; }
#line 1737 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 103 "dbg.y" /* yacc.c:1646  */
    { yyerrok; expr_free_all(); }
#line 1743 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 107 "dbg.y" /* yacc.c:1646  */
    { return 1; }
#line 1749 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 108 "dbg.y" /* yacc.c:1646  */
    { print_help(); }
#line 1755 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 109 "dbg.y" /* yacc.c:1646  */
    { info_help(); }
#line 1761 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 110 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_EXCEPTION_NOT_HANDLED, 0, 0); }
#line 1767 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 111 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 1,  dbg_exec_cont); }
#line 1773 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 112 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, (yyvsp[0].integer), dbg_exec_cont); }
#line 1779 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 113 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 1,  dbg_exec_step_into_line); }
#line 1785 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 114 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, (yyvsp[0].integer), dbg_exec_step_into_line); }
#line 1791 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 115 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 1,  dbg_exec_step_over_line); }
#line 1797 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 116 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, (yyvsp[0].integer), dbg_exec_step_over_line); }
#line 1803 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 117 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 1,  dbg_exec_step_into_insn); }
#line 1809 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 118 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, (yyvsp[0].integer), dbg_exec_step_into_insn); }
#line 1815 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 119 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 1,  dbg_exec_step_over_insn); }
#line 1821 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 120 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, (yyvsp[0].integer), dbg_exec_step_over_insn); }
#line 1827 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 121 "dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 0,  dbg_exec_finish); }
#line 1833 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 122 "dbg.y" /* yacc.c:1646  */
    { abort(); }
#line 1839 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 123 "dbg.y" /* yacc.c:1646  */
    { stack_backtrace(dbg_curr_tid); }
#line 1845 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 124 "dbg.y" /* yacc.c:1646  */
    { stack_backtrace((yyvsp[0].integer)); }
#line 1851 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 125 "dbg.y" /* yacc.c:1646  */
    { stack_backtrace(-1); }
#line 1857 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 126 "dbg.y" /* yacc.c:1646  */
    { stack_set_frame(dbg_curr_thread->curr_frame + 1);  }
#line 1863 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 127 "dbg.y" /* yacc.c:1646  */
    { stack_set_frame(dbg_curr_thread->curr_frame + (yyvsp[0].integer)); }
#line 1869 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 128 "dbg.y" /* yacc.c:1646  */
    { stack_set_frame(dbg_curr_thread->curr_frame - 1);  }
#line 1875 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 129 "dbg.y" /* yacc.c:1646  */
    { stack_set_frame(dbg_curr_thread->curr_frame - (yyvsp[0].integer)); }
#line 1881 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 130 "dbg.y" /* yacc.c:1646  */
    { stack_set_frame((yyvsp[0].integer)); }
#line 1887 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 131 "dbg.y" /* yacc.c:1646  */
    { source_show_path(); }
#line 1893 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 132 "dbg.y" /* yacc.c:1646  */
    { source_add_path((yyvsp[0].string)); }
#line 1899 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 133 "dbg.y" /* yacc.c:1646  */
    { source_nuke_path(dbg_curr_process); }
#line 1905 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 134 "dbg.y" /* yacc.c:1646  */
    { break_add_condition((yyvsp[0].integer), NULL); }
#line 1911 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 135 "dbg.y" /* yacc.c:1646  */
    { break_add_condition((yyvsp[-1].integer), (yyvsp[0].expression)); }
#line 1917 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 136 "dbg.y" /* yacc.c:1646  */
    { parser((yyvsp[0].string)); }
#line 1923 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 137 "dbg.y" /* yacc.c:1646  */
    { symbol_read_symtable((yyvsp[0].string), 0); }
#line 1929 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 138 "dbg.y" /* yacc.c:1646  */
    { symbol_read_symtable((yyvsp[-1].string), (yyvsp[0].integer)); }
#line 1935 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 139 "dbg.y" /* yacc.c:1646  */
    { dbg_printf("type = "); types_print_type(&(yyvsp[0].lvalue).type, FALSE); dbg_printf("\n"); }
#line 1941 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 140 "dbg.y" /* yacc.c:1646  */
    { dbg_attach_debuggee((yyvsp[0].integer), FALSE); dbg_active_wait_for_first_exception(); }
#line 1947 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 141 "dbg.y" /* yacc.c:1646  */
    { dbg_curr_process->process_io->close_process(dbg_curr_process, FALSE); }
#line 1953 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 142 "dbg.y" /* yacc.c:1646  */
    { dbg_curr_process->process_io->close_process(dbg_curr_process, TRUE); }
#line 1959 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 143 "dbg.y" /* yacc.c:1646  */
    { minidump_write((yyvsp[0].string), (dbg_curr_thread && dbg_curr_thread->in_exception) ? &dbg_curr_thread->excpt_record : NULL);}
#line 1965 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 144 "dbg.y" /* yacc.c:1646  */
    { dbg_printf("%s\n", (yyvsp[0].string)); }
#line 1971 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 160 "dbg.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1977 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 161 "dbg.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1983 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 162 "dbg.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1989 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 166 "dbg.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1995 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 167 "dbg.y" /* yacc.c:1646  */
    { (yyval.string) = lexeme_alloc_size(strlen((yyvsp[-2].string)) + 2 + strlen((yyvsp[0].string)) + 1);
                                       sprintf((yyval.string), "%s::%s", (yyvsp[-2].string), (yyvsp[0].string)); }
#line 2002 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 172 "dbg.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 2008 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 173 "dbg.y" /* yacc.c:1646  */
    { (yyval.string) = lexeme_alloc_size(strlen((yyvsp[-2].string)) + 1 + strlen((yyvsp[0].string)) + 1);
                                       sprintf((yyval.string), "%s!%s", (yyvsp[-2].string), (yyvsp[0].string)); }
#line 2015 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 178 "dbg.y" /* yacc.c:1646  */
    { (yyval.listing).FileName = NULL; (yyval.listing).LineNumber = (yyvsp[0].integer); }
#line 2021 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 179 "dbg.y" /* yacc.c:1646  */
    { (yyval.listing).FileName = (yyvsp[-2].string); (yyval.listing).LineNumber = (yyvsp[0].integer); }
#line 2027 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 180 "dbg.y" /* yacc.c:1646  */
    { symbol_get_line(NULL, (yyvsp[0].string), &(yyval.listing)); }
#line 2033 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 181 "dbg.y" /* yacc.c:1646  */
    { symbol_get_line((yyvsp[-2].string), (yyvsp[0].string), &(yyval.listing)); }
#line 2039 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 182 "dbg.y" /* yacc.c:1646  */
    { DWORD disp; ADDRESS64 addr; (yyval.listing).SizeOfStruct = sizeof((yyval.listing));
                                  types_extract_as_address(&(yyvsp[0].lvalue), &addr);
                                  SymGetLineFromAddr64(dbg_curr_process->handle, (ULONG_PTR)memory_to_linear_addr(& addr), &disp, & (yyval.listing)); }
#line 2047 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 188 "dbg.y" /* yacc.c:1646  */
    { dbg_run_debuggee(NULL); }
#line 2053 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 189 "dbg.y" /* yacc.c:1646  */
    { dbg_run_debuggee((yyvsp[0].string)); }
#line 2059 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 193 "dbg.y" /* yacc.c:1646  */
    { source_list(NULL, NULL, 10); }
#line 2065 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 194 "dbg.y" /* yacc.c:1646  */
    { source_list(NULL,  NULL, -10); }
#line 2071 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 195 "dbg.y" /* yacc.c:1646  */
    { source_list(& (yyvsp[0].listing), NULL, 10); }
#line 2077 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 196 "dbg.y" /* yacc.c:1646  */
    { source_list(NULL, & (yyvsp[0].listing), -10); }
#line 2083 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 197 "dbg.y" /* yacc.c:1646  */
    { source_list(& (yyvsp[-2].listing), & (yyvsp[0].listing), 0); }
#line 2089 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 201 "dbg.y" /* yacc.c:1646  */
    { memory_disassemble(NULL, NULL, 10); }
#line 2095 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 202 "dbg.y" /* yacc.c:1646  */
    { memory_disassemble(&(yyvsp[0].lvalue), NULL, 10); }
#line 2101 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 203 "dbg.y" /* yacc.c:1646  */
    { memory_disassemble(&(yyvsp[-2].lvalue), &(yyvsp[0].lvalue), 0); }
#line 2107 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 207 "dbg.y" /* yacc.c:1646  */
    { types_store_value(&(yyvsp[-2].lvalue), &(yyvsp[0].lvalue)); }
#line 2113 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 208 "dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(TRUE, NULL, (yyvsp[0].string)); }
#line 2119 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 209 "dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(TRUE, NULL, "all"); }
#line 2125 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 210 "dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(FALSE, NULL, (yyvsp[0].string)); }
#line 2131 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 211 "dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(FALSE, NULL, "all"); }
#line 2137 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 212 "dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(TRUE, (yyvsp[-2].string), (yyvsp[0].string)); }
#line 2143 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 213 "dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(TRUE, (yyvsp[-2].string), "all"); }
#line 2149 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 214 "dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(FALSE, (yyvsp[-2].string), (yyvsp[0].string)); }
#line 2155 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 215 "dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(FALSE, (yyvsp[-2].string), "all"); }
#line 2161 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 216 "dbg.y" /* yacc.c:1646  */
    { dbg_set_option((yyvsp[-1].string), (yyvsp[0].string)); }
#line 2167 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 217 "dbg.y" /* yacc.c:1646  */
    { dbg_set_option((yyvsp[0].string), NULL); }
#line 2173 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 221 "dbg.y" /* yacc.c:1646  */
    { memory_examine(&(yyvsp[0].lvalue), 1, 'x'); }
#line 2179 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 222 "dbg.y" /* yacc.c:1646  */
    { memory_examine(&(yyvsp[0].lvalue), (yyvsp[-1].integer) >> 8, (yyvsp[-1].integer) & 0xff); }
#line 2185 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 226 "dbg.y" /* yacc.c:1646  */
    { print_value(&(yyvsp[0].lvalue), 0, 0); }
#line 2191 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 227 "dbg.y" /* yacc.c:1646  */
    { if (((yyvsp[-1].integer) >> 8) == 1) print_value(&(yyvsp[0].lvalue), (yyvsp[-1].integer) & 0xff, 0); else dbg_printf("Count is meaningless in print command\n"); }
#line 2197 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 231 "dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lvalue(&(yyvsp[0].lvalue), TRUE); }
#line 2203 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 232 "dbg.y" /* yacc.c:1646  */
    { break_add_break_from_id((yyvsp[0].string), -1, TRUE); }
#line 2209 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 233 "dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno((yyvsp[-2].string), (yyvsp[0].integer), TRUE); }
#line 2215 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 234 "dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno(NULL, (yyvsp[0].integer), TRUE); }
#line 2221 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 235 "dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno(NULL, -1, TRUE); }
#line 2227 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 236 "dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lvalue(&(yyvsp[0].lvalue), FALSE); }
#line 2233 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 237 "dbg.y" /* yacc.c:1646  */
    { break_add_break_from_id((yyvsp[0].string), -1, FALSE); }
#line 2239 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 238 "dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno((yyvsp[-2].string), (yyvsp[0].integer), FALSE); }
#line 2245 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 239 "dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno(NULL, (yyvsp[0].integer), FALSE); }
#line 2251 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 240 "dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno(NULL, -1, FALSE); }
#line 2257 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 241 "dbg.y" /* yacc.c:1646  */
    { break_enable_xpoint((yyvsp[0].integer), TRUE); }
#line 2263 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 242 "dbg.y" /* yacc.c:1646  */
    { break_enable_xpoint((yyvsp[0].integer), TRUE); }
#line 2269 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 243 "dbg.y" /* yacc.c:1646  */
    { break_enable_xpoint((yyvsp[0].integer), FALSE); }
#line 2275 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 244 "dbg.y" /* yacc.c:1646  */
    { break_enable_xpoint((yyvsp[0].integer), FALSE); }
#line 2281 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 245 "dbg.y" /* yacc.c:1646  */
    { break_delete_xpoint((yyvsp[0].integer)); }
#line 2287 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 246 "dbg.y" /* yacc.c:1646  */
    { break_delete_xpoint((yyvsp[0].integer)); }
#line 2293 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 250 "dbg.y" /* yacc.c:1646  */
    { break_add_watch_from_lvalue(&(yyvsp[0].lvalue), TRUE); }
#line 2299 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 251 "dbg.y" /* yacc.c:1646  */
    { break_add_watch_from_id((yyvsp[0].string), TRUE); }
#line 2305 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 252 "dbg.y" /* yacc.c:1646  */
    { break_add_watch_from_lvalue(&(yyvsp[0].lvalue), FALSE); }
#line 2311 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 253 "dbg.y" /* yacc.c:1646  */
    { break_add_watch_from_id((yyvsp[0].string), FALSE); }
#line 2317 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 258 "dbg.y" /* yacc.c:1646  */
    { display_print(); }
#line 2323 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 259 "dbg.y" /* yacc.c:1646  */
    { display_add((yyvsp[0].expression), 1, 0); }
#line 2329 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 260 "dbg.y" /* yacc.c:1646  */
    { display_add((yyvsp[0].expression), (yyvsp[-1].integer) >> 8, (yyvsp[-1].integer) & 0xff); }
#line 2335 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 261 "dbg.y" /* yacc.c:1646  */
    { display_enable((yyvsp[0].integer), TRUE); }
#line 2341 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 262 "dbg.y" /* yacc.c:1646  */
    { display_enable((yyvsp[0].integer), FALSE); }
#line 2347 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 263 "dbg.y" /* yacc.c:1646  */
    { display_delete((yyvsp[0].integer)); }
#line 2353 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 264 "dbg.y" /* yacc.c:1646  */
    { display_delete(-1); }
#line 2359 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 265 "dbg.y" /* yacc.c:1646  */
    { display_delete((yyvsp[0].integer)); }
#line 2365 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 266 "dbg.y" /* yacc.c:1646  */
    { display_delete(-1); }
#line 2371 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 270 "dbg.y" /* yacc.c:1646  */
    { break_info(); }
#line 2377 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 271 "dbg.y" /* yacc.c:1646  */
    { info_win32_module(0); }
#line 2383 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 272 "dbg.y" /* yacc.c:1646  */
    { info_win32_module((yyvsp[0].integer)); }
#line 2389 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 273 "dbg.y" /* yacc.c:1646  */
    { be_cpu->print_context(dbg_curr_thread->handle, &dbg_context, 0); }
#line 2395 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 274 "dbg.y" /* yacc.c:1646  */
    { be_cpu->print_context(dbg_curr_thread->handle, &dbg_context, 1); }
#line 2401 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 275 "dbg.y" /* yacc.c:1646  */
    { info_win32_segments((yyvsp[0].integer) >> 3, 1); }
#line 2407 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 276 "dbg.y" /* yacc.c:1646  */
    { info_win32_segments(0, -1); }
#line 2413 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 277 "dbg.y" /* yacc.c:1646  */
    { stack_info((yyvsp[0].integer)); }
#line 2419 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 278 "dbg.y" /* yacc.c:1646  */
    { stack_info(-1); }
#line 2425 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 279 "dbg.y" /* yacc.c:1646  */
    { symbol_info((yyvsp[0].string)); }
#line 2431 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 280 "dbg.y" /* yacc.c:1646  */
    { symbol_info_locals(); }
#line 2437 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 281 "dbg.y" /* yacc.c:1646  */
    { display_info(); }
#line 2443 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 282 "dbg.y" /* yacc.c:1646  */
    { info_win32_class(NULL, NULL); }
#line 2449 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 283 "dbg.y" /* yacc.c:1646  */
    { info_win32_class(NULL, (yyvsp[0].string)); }
#line 2455 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 284 "dbg.y" /* yacc.c:1646  */
    { info_win32_window(NULL, FALSE); }
#line 2461 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 285 "dbg.y" /* yacc.c:1646  */
    { info_win32_window((HWND)(yyvsp[0].integer), FALSE); }
#line 2467 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 286 "dbg.y" /* yacc.c:1646  */
    { info_win32_window(NULL, TRUE); }
#line 2473 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 287 "dbg.y" /* yacc.c:1646  */
    { info_win32_window((HWND)(yyvsp[0].integer), TRUE); }
#line 2479 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 288 "dbg.y" /* yacc.c:1646  */
    { info_win32_processes(); }
#line 2485 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 289 "dbg.y" /* yacc.c:1646  */
    { info_win32_threads(); }
#line 2491 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 290 "dbg.y" /* yacc.c:1646  */
    { info_win32_frame_exceptions(dbg_curr_tid); }
#line 2497 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 291 "dbg.y" /* yacc.c:1646  */
    { info_win32_frame_exceptions((yyvsp[0].integer)); }
#line 2503 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 292 "dbg.y" /* yacc.c:1646  */
    { info_win32_virtual(dbg_curr_pid); }
#line 2509 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 293 "dbg.y" /* yacc.c:1646  */
    { info_win32_virtual((yyvsp[0].integer)); }
#line 2515 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 294 "dbg.y" /* yacc.c:1646  */
    { info_win32_exception(); }
#line 2521 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 295 "dbg.y" /* yacc.c:1646  */
    { info_win32_handle((HWND)(yyvsp[0].integer)); }
#line 2527 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 299 "dbg.y" /* yacc.c:1646  */
    { print_types(); }
#line 2533 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 300 "dbg.y" /* yacc.c:1646  */
    { tgt_module_load((yyvsp[0].string), FALSE); }
#line 2539 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 301 "dbg.y" /* yacc.c:1646  */
    { tgt_module_load((yyvsp[0].string), TRUE); }
#line 2545 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 305 "dbg.y" /* yacc.c:1646  */
    {}
#line 2551 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 306 "dbg.y" /* yacc.c:1646  */
    { stack_backtrace(-1); }
#line 2557 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 307 "dbg.y" /* yacc.c:1646  */
    { dbg_printf("No process loaded, cannot execute '%s'\n", (yyvsp[0].string)); }
#line 2563 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 311 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_char; }
#line 2569 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 312 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_signed_int; }
#line 2575 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 313 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_signed_long_int; }
#line 2581 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 314 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_signed_long_int; }
#line 2587 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 315 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_unsigned_int; }
#line 2593 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 316 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_unsigned_int; }
#line 2599 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 317 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_unsigned_long_int; }
#line 2605 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 318 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_unsigned_long_int; }
#line 2611 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 319 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_signed_short_int; }
#line 2617 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 320 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_signed_short_int; }
#line 2623 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 321 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_unsigned_short_int; }
#line 2629 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 322 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_unsigned_short_int; }
#line 2635 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 323 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_signed_char_int; }
#line 2641 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 324 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_unsigned_char_int; }
#line 2647 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 325 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_unsigned_longlong_int; }
#line 2653 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 326 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_unsigned_longlong_int; }
#line 2659 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 327 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_signed_longlong_int; }
#line 2665 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 328 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_signed_longlong_int; }
#line 2671 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 329 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_short_real; }
#line 2677 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 330 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_real; }
#line 2683 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 331 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_type_id; (yyval.type).deref_count = 0; (yyval.type).u.type.module = 0; (yyval.type).u.type.id = dbg_itype_long_real; }
#line 2689 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 332 "dbg.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type); (yyval.type).deref_count++; }
#line 2695 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 333 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_udt_class; (yyval.type).deref_count = 0; (yyval.type).u.name = (yyvsp[0].string); }
#line 2701 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 334 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_udt_struct; (yyval.type).deref_count = 0; (yyval.type).u.name = (yyvsp[0].string); }
#line 2707 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 335 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_udt_union; (yyval.type).deref_count = 0; (yyval.type).u.name = (yyvsp[0].string); }
#line 2713 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 336 "dbg.y" /* yacc.c:1646  */
    { (yyval.type).type = type_expr_enumeration; (yyval.type).deref_count = 0; (yyval.type).u.name = (yyvsp[0].string); }
#line 2719 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 340 "dbg.y" /* yacc.c:1646  */
    { (yyval.lvalue) = expr_eval((yyvsp[0].expression)); }
#line 2725 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 344 "dbg.y" /* yacc.c:1646  */
    { (yyval.integer) = types_extract_as_integer(&(yyvsp[0].lvalue)); }
#line 2731 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 354 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_sconstant((yyvsp[0].integer)); }
#line 2737 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 355 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_string((yyvsp[0].string)); }
#line 2743 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 356 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_internal_var((yyvsp[0].string)); }
#line 2749 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 357 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_symbol((yyvsp[0].string)); }
#line 2755 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 358 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_pstruct((yyvsp[-2].expression), (yyvsp[0].string)); }
#line 2761 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 359 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_struct((yyvsp[-2].expression), (yyvsp[0].string)); }
#line 2767 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 360 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-2].string), 0); }
#line 2773 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 361 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-3].string), 1, (yyvsp[-1].expression)); }
#line 2779 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 362 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-5].string), 2, (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2785 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 363 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-7].string), 3, (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2791 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 364 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-9].string), 4, (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2797 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 365 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-11].string), 5, (yyvsp[-9].expression), (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2803 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 366 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_ARR, (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2809 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 367 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_SEG, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2815 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 368 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2821 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 369 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2827 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 370 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_OR, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2833 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 371 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_AND, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2839 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 372 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_XOR, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2845 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 373 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2851 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 374 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2857 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 375 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2863 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 376 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2869 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 377 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2875 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 378 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_NE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2881 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 379 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_SHL, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2887 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 380 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_SHR, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2893 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 381 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_ADD, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2899 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 382 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_SUB, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2905 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 383 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_MUL, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2911 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 384 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_DIV, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2917 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 385 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_REM, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2923 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 386 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_NEG, (yyvsp[0].expression)); }
#line 2929 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 387 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2935 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 388 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_NOT, (yyvsp[0].expression)); }
#line 2941 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 389 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_LNOT, (yyvsp[0].expression)); }
#line 2947 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 390 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2953 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 391 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_DEREF, (yyvsp[0].expression)); }
#line 2959 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 392 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_ADDR, (yyvsp[0].expression)); }
#line 2965 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 393 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_typecast(&(yyvsp[-2].type), (yyvsp[0].expression)); }
#line 2971 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 401 "dbg.y" /* yacc.c:1646  */
    { (yyval.lvalue) = expr_eval((yyvsp[0].expression)); }
#line 2977 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 405 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_sconstant((yyvsp[0].integer)); }
#line 2983 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 406 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_internal_var((yyvsp[0].string)); }
#line 2989 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 407 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_symbol((yyvsp[0].string)); }
#line 2995 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 408 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_pstruct((yyvsp[-2].expression), (yyvsp[0].string)); }
#line 3001 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 409 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_struct((yyvsp[-2].expression), (yyvsp[0].string)); }
#line 3007 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 410 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_ARR, (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 3013 "dbg.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 411 "dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_FORCE_DEREF, (yyvsp[0].expression)); }
#line 3019 "dbg.tab.c" /* yacc.c:1646  */
    break;


#line 3023 "dbg.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 414 "dbg.y" /* yacc.c:1906  */


static LONG WINAPI wine_dbg_cmd(EXCEPTION_POINTERS *eptr)
{
    switch (eptr->ExceptionRecord->ExceptionCode)
    {
    case DEBUG_STATUS_INTERNAL_ERROR:
        dbg_printf("\nWineDbg internal error\n");
        break;
    case DEBUG_STATUS_NO_SYMBOL:
        dbg_printf("\nUndefined symbol\n");
        break;
    case DEBUG_STATUS_DIV_BY_ZERO:
        dbg_printf("\nDivision by zero\n");
        break;
    case DEBUG_STATUS_BAD_TYPE:
        dbg_printf("\nNo type or type mismatch\n");
        break;
    case DEBUG_STATUS_NO_FIELD:
        dbg_printf("\nNo such field in structure or union\n");
        break;
    case DEBUG_STATUS_CANT_DEREF:
        dbg_printf("\nDereference failed (not a pointer, or out of array bounds)\n");
        break;
    case DEBUG_STATUS_ABORT:
        break;
    case DEBUG_STATUS_NOT_AN_INTEGER:
        dbg_printf("\nNeeding an integral value\n");
        break;
    case CONTROL_C_EXIT:
        /* this is generally sent by a ctrl-c when we run winedbg outside of wineconsole */
        /* stop the debuggee, and continue debugger execution, we will be reentered by the
         * debug events generated by stopping
         */
        dbg_interrupt_debuggee();
        return EXCEPTION_CONTINUE_EXECUTION;
    default:
        dbg_printf("\nException %x\n", eptr->ExceptionRecord->ExceptionCode);
        break;
    }

    return EXCEPTION_EXECUTE_HANDLER;
}

static HANDLE dbg_parser_input;
static HANDLE dbg_parser_output;

int      input_fetch_entire_line(const char* pfx, char** line)
{
    char*       buffer;
    char        ch;
    DWORD	nread;
    size_t      len, alloc;

    /* as of today, console handles can be file handles... so better use file APIs rather than
     * console's
     */
    WriteFile(dbg_parser_output, pfx, strlen(pfx), &nread, NULL);

    buffer = HeapAlloc(GetProcessHeap(), 0, alloc = 16);
    assert(buffer != NULL);

    len = 0;
    do
    {
        if (!ReadFile(dbg_parser_input, &ch, 1, &nread, NULL) || nread == 0)
        {
            HeapFree(GetProcessHeap(), 0, buffer);
            return -1;
        }

        if (len + 2 > alloc)
        {
            while (len + 2 > alloc) alloc *= 2;
            buffer = dbg_heap_realloc(buffer, alloc);
        }
        buffer[len++] = ch;
    }
    while (ch != '\n');
    buffer[len] = '\0';

    *line = buffer;
    return len;
}

int input_read_line(const char* pfx, char* buf, int size)
{
    char*       line = NULL;

    int len = input_fetch_entire_line(pfx, &line);
    if (len < 0) return 0;
    /* remove trailing \n and \r */
    while (len > 0 && (line[len - 1] == '\n' || line[len - 1] == '\r')) len--;
    len = min(size - 1, len);
    memcpy(buf, line, len);
    buf[len] = '\0';
    HeapFree(GetProcessHeap(), 0, line);
    return 1;
}

/***********************************************************************
 *           parser_handle
 *
 * Debugger command line parser
 */
void	parser_handle(HANDLE input)
{
    BOOL 	        ret_ok;
    HANDLE              in_copy  = dbg_parser_input;
    HANDLE              out_copy = dbg_parser_output;

    ret_ok = FALSE;

    if (input != INVALID_HANDLE_VALUE)
    {
        dbg_parser_output = INVALID_HANDLE_VALUE;
        dbg_parser_input  = input;
    }
    else
    {
        dbg_parser_output = GetStdHandle(STD_OUTPUT_HANDLE);
        dbg_parser_input  = GetStdHandle(STD_INPUT_HANDLE);
    }

    do
    {
       __TRY
       {
	  ret_ok = TRUE;
	  dbg_parse();
       }
       __EXCEPT(wine_dbg_cmd)
       {
	  ret_ok = FALSE;
       }
       __ENDTRY;
       lexeme_flush();
    } while (!ret_ok);

    dbg_parser_input  = in_copy;
    dbg_parser_output = out_copy;
}

static void parser(const char* filename)
{
    HANDLE h = CreateFileA(filename, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0L, 0);
    if (h != INVALID_HANDLE_VALUE)
    {
        parser_handle(h);
        CloseHandle(h);
    }
}

static int dbg_error(const char* s)
{
    dbg_printf("%s\n", s);
    return 0;
}

HANDLE parser_generate_command_file(const char* pmt, ...)
{
    HANDLE      hFile;
    char        path[MAX_PATH], file[MAX_PATH];
    DWORD       w;
    const char* p;

    GetTempPathA(sizeof(path), path);
    GetTempFileNameA(path, "WD", 0, file);
    hFile = CreateFileA(file, GENERIC_READ|GENERIC_WRITE|DELETE, FILE_SHARE_DELETE, 
                        NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_DELETE_ON_CLOSE, 0);
    if (hFile != INVALID_HANDLE_VALUE)
    {
        va_list ap;

        WriteFile(hFile, pmt, strlen(pmt), &w, 0);
        va_start(ap, pmt);
        while ((p = va_arg(ap, const char*)) != NULL)
        {
            WriteFile(hFile, "\n", 1, &w, 0);
            WriteFile(hFile, p, strlen(p), &w, 0);
        }
        va_end(ap);
        WriteFile(hFile, "\nquit\n", 6, &w, 0);
        SetFilePointer(hFile, 0, NULL, FILE_BEGIN);
    }
    return hFile;
}
