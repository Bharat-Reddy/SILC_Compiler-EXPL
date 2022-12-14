/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "astree.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "astree.h"
    #include "astree.c"
    int yylex(void);
    char *yytext;
    FILE *ft;
    struct GSTNode *head, *curr;
    char *keyword[20] = {"begin", "end", "read", "write", "if", "else", "then", "endif", "while", "do", "endwhile", "repeat", "until", "int", "str", "decl", "enddecl", "break", "continue", "breakpoint"};


#line 80 "y.tab.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _PLUS = 258,
    _MINUS = 259,
    _MUL = 260,
    _DIV = 261,
    _MOD = 262,
    _NUM = 263,
    _BEGIN = 264,
    _END = 265,
    _READ = 266,
    _WRITE = 267,
    _FINISHED = 268,
    _LT = 269,
    _LE = 270,
    _GT = 271,
    _GE = 272,
    _NE = 273,
    _EQ = 274,
    _IF = 275,
    _THEN = 276,
    _ELSE = 277,
    _ENDIF = 278,
    _WHILE = 279,
    _DO = 280,
    _ENDWHILE = 281,
    _BREAK = 282,
    _CONTINUE = 283,
    _BREAKPOINT = 284,
    _REPEAT = 285,
    _UNTIL = 286,
    _INT = 287,
    _STR = 288,
    _DECL = 289,
    _ENDDECL = 290,
    _ID = 291,
    _STRING = 292
  };
#endif
/* Tokens.  */
#define _PLUS 258
#define _MINUS 259
#define _MUL 260
#define _DIV 261
#define _MOD 262
#define _NUM 263
#define _BEGIN 264
#define _END 265
#define _READ 266
#define _WRITE 267
#define _FINISHED 268
#define _LT 269
#define _LE 270
#define _GT 271
#define _GE 272
#define _NE 273
#define _EQ 274
#define _IF 275
#define _THEN 276
#define _ELSE 277
#define _ENDIF 278
#define _WHILE 279
#define _DO 280
#define _ENDWHILE 281
#define _BREAK 282
#define _CONTINUE 283
#define _BREAKPOINT 284
#define _REPEAT 285
#define _UNTIL 286
#define _INT 287
#define _STR 288
#define _DECL 289
#define _ENDDECL 290
#define _ID 291
#define _STRING 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "astree.y" /* yacc.c:355  */

    struct AST_Node *node;

#line 198 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 215 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
       2,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    29,    29,    30,    32,    33,    35,    38,    42,    46,
      50,    54,    60,    68,    75,    78,    83,    86,    89,    92,
      95,    98,   101,   104,   107,   110,   114,   118,   121,   134,
     135,   137,   142,   147,   151,   155,   159,   168,   177,   186,
     195,   204,   215,   224,   233,   242,   251,   260,   263,   264,
     267,   276
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_PLUS", "_MINUS", "_MUL", "_DIV",
  "_MOD", "_NUM", "_BEGIN", "_END", "_READ", "_WRITE", "_FINISHED", "_LT",
  "_LE", "_GT", "_GE", "_NE", "_EQ", "_IF", "_THEN", "_ELSE", "_ENDIF",
  "_WHILE", "_DO", "_ENDWHILE", "_BREAK", "_CONTINUE", "_BREAKPOINT",
  "_REPEAT", "_UNTIL", "_INT", "_STR", "_DECL", "_ENDDECL", "_ID",
  "_STRING", "';'", "','", "'['", "']'", "'('", "')'", "'='", "'{'", "'}'",
  "$accept", "Declarations", "DeclList", "Decl", "Varlist", "program",
  "Slist", "stmt", "Inputstmt", "Outputstmt", "Assgstmt", "stringExp",
  "Ifstmt", "Whilestmt", "RepeatUntil", "DoWhile", "boolstmt", "expr",
  "id", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    59,    44,
      91,    93,    40,    41,    61,   123,   125
};
# endif

#define YYPACT_NINF -44

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-44)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -30,    29,    -1,     6,   -26,   -26,   -44,    35,   -44,   133,
     -44,   -23,   -18,    42,   -44,   -44,   -44,    -7,    -4,     7,
      14,    15,    27,    31,    44,    28,    43,   154,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,    40,    77,   -44,    50,
     -44,    53,    -3,     1,     1,   234,   -44,   -44,   -44,   234,
       1,   -44,   -44,    -3,    49,    51,    52,   -44,   -44,     1,
      54,     9,   -44,    55,   262,    57,    90,   110,    72,    56,
     -44,    85,    67,    20,    68,     1,     1,     1,     1,     1,
      87,     1,     1,     1,     1,     1,     1,    84,    92,    80,
     -44,   -44,    82,   -44,   -44,   -44,    24,    24,   -44,   -44,
     -44,   234,     9,     9,     9,     9,     9,     9,   234,    83,
      86,   -44,   174,   194,     1,     1,   234,    89,    91,    81,
      88,   214,   -44,   -44,    94,    95,   103,   -44,   -44,   -44
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     3,     0,     5,     0,
       1,    10,     0,     0,     2,     4,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     6,     0,
       7,     0,     0,     0,     0,     0,    23,    24,    25,     0,
       0,    12,    14,     0,     0,     8,     0,    48,    30,     0,
       0,    29,    49,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    28,     0,    26,    47,    27,    42,    43,    44,    45,
      46,     0,    36,    37,    38,    39,    40,    41,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    34,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,   -44,   135,   142,   -44,   -42,   -25,   -44,   -44,
     -44,    96,   -44,   -44,   -44,   -44,   -43,   -31,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     8,    12,     3,    27,    28,    29,    30,
      31,    60,    32,    33,    34,    35,    63,    64,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      36,    65,    52,    66,     1,    57,    10,    67,     9,    57,
      11,    61,    75,    76,    77,    78,    79,    37,    36,    68,
      38,    39,    61,    75,    76,    77,    78,    79,    73,    77,
      78,    79,    56,    26,    58,    41,    36,    26,    42,    59,
      36,    52,    52,    59,    96,    97,    98,    99,   100,    43,
     102,   103,   104,   105,   106,   107,    44,    36,    36,   112,
      45,     4,     5,    94,     6,    46,   113,     4,     5,    47,
      14,   119,   120,    49,   121,    75,    76,    77,    78,    79,
      40,    39,    48,    50,    53,    54,    55,    52,    52,    26,
      70,    71,    36,    92,    91,    72,    52,    74,    80,    36,
      87,    17,    18,    36,    36,    93,    95,    36,   101,   108,
      19,   110,    36,    90,    20,    21,   109,    22,    23,    24,
      25,    17,    18,   111,   124,   114,    26,   122,   115,   123,
      19,   125,   127,   128,    20,    21,    88,    22,    23,    24,
      25,   129,    15,    16,    17,    18,    26,    13,     0,    69,
       0,     0,     0,    19,     0,     0,    89,    20,    21,     0,
      22,    23,    24,    25,    51,    17,    18,     0,     0,    26,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
       0,    22,    23,    24,    25,    17,    18,     0,     0,     0,
      26,     0,     0,     0,    19,     0,   116,   117,    20,    21,
       0,    22,    23,    24,    25,    17,    18,     0,     0,     0,
      26,     0,     0,     0,    19,     0,     0,     0,    20,    21,
     118,    22,    23,    24,    25,    17,    18,     0,     0,     0,
      26,     0,     0,     0,    19,     0,     0,   126,    20,    21,
       0,    22,    23,    24,    25,    17,    18,     0,     0,     0,
      26,     0,     0,     0,    19,     0,     0,     0,    20,    21,
       0,    22,    23,    24,    25,    75,    76,    77,    78,    79,
      26,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86
};

static const yytype_int8 yycheck[] =
{
       9,    44,    27,    45,    34,     8,     0,    49,     9,     8,
      36,    42,     3,     4,     5,     6,     7,    40,    27,    50,
      38,    39,    53,     3,     4,     5,     6,     7,    59,     5,
       6,     7,    41,    36,    37,    42,    45,    36,    42,    42,
      49,    66,    67,    42,    75,    76,    77,    78,    79,    42,
      81,    82,    83,    84,    85,    86,    42,    66,    67,   101,
      45,    32,    33,    43,    35,    38,   108,    32,    33,    38,
      35,   114,   115,    45,   116,     3,     4,     5,     6,     7,
      38,    39,    38,    40,    44,     8,    36,   112,   113,    36,
      41,    40,   101,     8,    38,    43,   121,    43,    43,   108,
      43,    11,    12,   112,   113,    38,    38,   116,    21,    25,
      20,    31,   121,    41,    24,    25,    24,    27,    28,    29,
      30,    11,    12,    41,    43,    42,    36,    38,    42,    38,
      20,    43,    38,    38,    24,    25,    46,    27,    28,    29,
      30,    38,     7,    10,    11,    12,    36,     5,    -1,    53,
      -1,    -1,    -1,    20,    -1,    -1,    46,    24,    25,    -1,
      27,    28,    29,    30,    10,    11,    12,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,
      -1,    27,    28,    29,    30,    11,    12,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    20,    -1,    22,    23,    24,    25,
      -1,    27,    28,    29,    30,    11,    12,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    11,    12,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    11,    12,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,
      -1,    27,    28,    29,    30,     3,     4,     5,     6,     7,
      36,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    48,    52,    32,    33,    35,    49,    50,     9,
       0,    36,    51,    51,    35,    50,    10,    11,    12,    20,
      24,    25,    27,    28,    29,    30,    36,    53,    54,    55,
      56,    57,    59,    60,    61,    62,    65,    40,    38,    39,
      38,    42,    42,    42,    42,    45,    38,    38,    38,    45,
      40,    10,    54,    44,     8,    36,    65,     8,    37,    42,
      58,    64,    65,    63,    64,    63,    53,    53,    64,    58,
      41,    40,    43,    64,    43,     3,     4,     5,     6,     7,
      43,    14,    15,    16,    17,    18,    19,    43,    46,    46,
      41,    38,     8,    38,    43,    38,    64,    64,    64,    64,
      64,    21,    64,    64,    64,    64,    64,    64,    25,    24,
      31,    41,    53,    53,    42,    42,    22,    23,    26,    63,
      63,    53,    38,    38,    43,    43,    23,    38,    38,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    50,    50,    51,    51,
      51,    51,    52,    52,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    55,    56,    57,    58,
      58,    59,    59,    60,    61,    62,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     3,     3,     3,     6,
       1,     4,     4,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     5,     5,     4,     1,
       1,    10,     8,     8,     9,     9,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     4
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
        case 2:
#line 29 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;printGST(head);}
#line 1405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 30 "astree.y" /* yacc.c:1646  */
    {}
#line 1411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 32 "astree.y" /* yacc.c:1646  */
    {}
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 33 "astree.y" /* yacc.c:1646  */
    {}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 35 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = ASTchangeType(head,(yyvsp[-1].node),INTEGER);
}
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 38 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = ASTchangeType(head,(yyvsp[-1].node),STRING);
}
#line 1439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 42 "astree.y" /* yacc.c:1646  */
    {
    head = InstallID(head,NONE,VARIABLE,1,(yyvsp[0].node)->varname);
    (yyval.node) = makeStatementNode(STATEMENT,STATEMENT,(yyvsp[-2].node),(yyvsp[0].node),",");
}
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "astree.y" /* yacc.c:1646  */
    {
    head = InstallID(head,NONE,ARRAY_VARIABLE,(yyvsp[-1].node)->val,(yyvsp[-3].node)->varname);
    (yyval.node) = makeStatementNode(STATEMENT,STATEMENT,(yyvsp[-5].node),(yyvsp[-3].node),",");
}
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "astree.y" /* yacc.c:1646  */
    {
    head = InstallID(head,NONE,VARIABLE,1,(yyvsp[0].node)->varname);
    (yyval.node) = (yyvsp[0].node);
}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "astree.y" /* yacc.c:1646  */
    {
    head = InstallID(head,NONE,ARRAY_VARIABLE,(yyvsp[-1].node)->val,(yyvsp[-3].node)->varname);
    (yyval.node) = (yyvsp[-3].node);
}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    printf("Parsing completed\n");
    print_tree((yyvsp[-1].node));
    printf("\n");
    code_generator(ft,(yyvsp[-1].node),head);
    exit(1);
}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 68 "astree.y" /* yacc.c:1646  */
    {
        (yyval.node) = (yyvsp[0].node);
        printf("Parsing Completed\n");
        exit(1);
    }
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 75 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeStatementNode(STATEMENT,STATEMENT,(yyvsp[-1].node),(yyvsp[0].node),"STATEMENT");
}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 78 "astree.y" /* yacc.c:1646  */
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 83 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 89 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 92 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 95 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 98 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 101 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 104 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 107 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 114 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeStatementNode(STATEMENT,READ,(yyvsp[-2].node),(struct AST_Node *)NULL,"Read");
}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 118 "astree.y" /* yacc.c:1646  */
    {
    	(yyval.node) = makeStatementNode(STATEMENT,WRITE,(yyvsp[-2].node),(struct AST_Node *)NULL,"Write");
}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 121 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-3].node)->type ,t2 = (yyvsp[-1].node)->type;
    if(t1 == STRING && (t2 == PLUS || t2 == MINUS || t2 == MUL || t2 == DIV || t2 == INTEGER)){
        printf("Variable \"%s\" is a string variable assigning expression\n",(yyvsp[-3].node)->varname);
        exit(1);
    }
    if(t1 == INTEGER && t2 == STRING){
        printf("Variable \"%s\" is an integer variable assigning string value\n",(yyvsp[-3].node)->varname);
        exit(1);
    }
	(yyval.node) = makeExpressionNode(EXPRESSION,ASSIGNMENT,'=',(yyvsp[-3].node),(yyvsp[-1].node),"=");
}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 134 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 135 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 137 "astree.y" /* yacc.c:1646  */
    {
    struct AST_Node *temp1 = makeStatementNode(STATEMENT,IF,(yyvsp[-7].node),(yyvsp[-4].node),"IF");
	struct AST_Node *temp2 = makeStatementNode(STATEMENT,ELSE,(yyvsp[-2].node),(struct AST_Node *)NULL,"ELSE");
	(yyval.node) = makeStatementNode(STATEMENT,IF_ELSE,temp1,temp2,"IF_ELSE");
}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 142 "astree.y" /* yacc.c:1646  */
    {
	struct AST_Node *temp1 = makeStatementNode(STATEMENT,IF,(yyvsp[-5].node),(yyvsp[-2].node),"IF");
	(yyval.node) = makeStatementNode(STATEMENT,IF_ELSE,temp1,(struct AST_Node *)NULL,"IF_ELSE");
}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 147 "astree.y" /* yacc.c:1646  */
    {
	 (yyval.node) = makeStatementNode(LOOP,WHILE,(yyvsp[-5].node),(yyvsp[-2].node),"WHILE");
}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 151 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeStatementNode(LOOP,REPEAT_UNTIL,(yyvsp[-6].node),(yyvsp[-2].node),"REPEAT_UNTIL");
}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 155 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeStatementNode(LOOP,DO_WHILE,(yyvsp[-6].node),(yyvsp[-2].node),"DO_WHILE");
}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 159 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,LT,(yyvsp[-2].node),(yyvsp[0].node),"LT");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 168 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,LE,(yyvsp[-2].node),(yyvsp[0].node),"LE");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 177 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,GT,(yyvsp[-2].node),(yyvsp[0].node),"GT");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 186 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,GE,(yyvsp[-2].node),(yyvsp[0].node),"GE");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 195 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,NE,(yyvsp[-2].node),(yyvsp[0].node),"NE");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 204 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,EQ,(yyvsp[-2].node),(yyvsp[0].node),"EQ");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 215 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeExpressionNode(EXPRESSION,PLUS,'+',(yyvsp[-2].node),(yyvsp[0].node),"+");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 224 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeExpressionNode(EXPRESSION,MINUS,'-',(yyvsp[-2].node),(yyvsp[0].node),"-");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 233 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeExpressionNode(EXPRESSION,MUL,'*',(yyvsp[-2].node),(yyvsp[0].node),"*");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 242 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeExpressionNode(EXPRESSION,DIV,'/',(yyvsp[-2].node),(yyvsp[0].node),"/");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 251 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeExpressionNode(EXPRESSION,MOD,'%',(yyvsp[-2].node),(yyvsp[0].node),"%");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 260 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 263 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 264 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 267 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
    curr = LookUp(head,(yyval.node)->varname);
    if(!curr){
        printf("Variable \"%s\" not declared\n",(yyval.node)->varname);
        exit(1);
    }
    (yyval.node)->type = curr->type;
}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 276 "astree.y" /* yacc.c:1646  */
    {
    curr = LookUp(head,(yyvsp[-3].node)->varname);
    if(!curr){
        printf("Variable \"%s\" not declared\n",(yyvsp[-3].node)->varname);
        exit(1);
    }
    if(curr->type_of_var != ARRAY_VARIABLE){
        printf("Variable \"%s\" not of array type\n",(yyvsp[-3].node)->varname);
        exit(1);
    }
    (yyvsp[-3].node)->type = curr->type;
    (yyval.node) = makeArrVariableNode(ARRAY_VARIABLE,(yyvsp[-3].node)->type,(yyvsp[-3].node),(yyvsp[-1].node),"ARRAY_VARIABLE");
}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1892 "y.tab.c" /* yacc.c:1646  */
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
#line 290 "astree.y" /* yacc.c:1906  */

//-------------------------Auxiliary Functions--------------------------
void yyerror(const char *err){
    printf("yyerror error: %s\n",err);
    return;
}

int main(int argc,char *argv[]){
    head = init_ds(head,keyword);    
    if(argc > 1){
		printf("Generating file as %s\n",argv[1]);
		ft = fopen(argv[1],"w");
		yyparse();
	}
	else{
		printf("Generating file as code.xsm\n");
		ft = fopen("code.xsm","w");
		yyparse();
	}
    return 1;
}
