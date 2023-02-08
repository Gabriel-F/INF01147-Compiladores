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
#line 2 "parser.y"


#include <stdio.h>
#include <stdlib.h>
#include "ast.h"

extern void *arvore;
//extern void exporta (void *arvore);
//extern void libera (void *arvore);

//#define YYERROR_VERBOSE 1
//#define parse.error verbose

int yylex(void);
void yyerror (char const *s);
extern int get_line_number();


#line 90 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_PR_INT = 3,                  /* TK_PR_INT  */
  YYSYMBOL_TK_PR_FLOAT = 4,                /* TK_PR_FLOAT  */
  YYSYMBOL_TK_PR_BOOL = 5,                 /* TK_PR_BOOL  */
  YYSYMBOL_TK_PR_CHAR = 6,                 /* TK_PR_CHAR  */
  YYSYMBOL_TK_PR_IF = 7,                   /* TK_PR_IF  */
  YYSYMBOL_TK_PR_THEN = 8,                 /* TK_PR_THEN  */
  YYSYMBOL_TK_PR_ELSE = 9,                 /* TK_PR_ELSE  */
  YYSYMBOL_TK_PR_WHILE = 10,               /* TK_PR_WHILE  */
  YYSYMBOL_TK_PR_INPUT = 11,               /* TK_PR_INPUT  */
  YYSYMBOL_TK_PR_OUTPUT = 12,              /* TK_PR_OUTPUT  */
  YYSYMBOL_TK_PR_RETURN = 13,              /* TK_PR_RETURN  */
  YYSYMBOL_TK_PR_FOR = 14,                 /* TK_PR_FOR  */
  YYSYMBOL_TK_OC_LE = 15,                  /* TK_OC_LE  */
  YYSYMBOL_TK_OC_GE = 16,                  /* TK_OC_GE  */
  YYSYMBOL_TK_OC_EQ = 17,                  /* TK_OC_EQ  */
  YYSYMBOL_TK_OC_NE = 18,                  /* TK_OC_NE  */
  YYSYMBOL_TK_OC_AND = 19,                 /* TK_OC_AND  */
  YYSYMBOL_TK_OC_OR = 20,                  /* TK_OC_OR  */
  YYSYMBOL_TK_LIT_INT = 21,                /* TK_LIT_INT  */
  YYSYMBOL_TK_LIT_FLOAT = 22,              /* TK_LIT_FLOAT  */
  YYSYMBOL_TK_LIT_FALSE = 23,              /* TK_LIT_FALSE  */
  YYSYMBOL_TK_LIT_TRUE = 24,               /* TK_LIT_TRUE  */
  YYSYMBOL_TK_LIT_CHAR = 25,               /* TK_LIT_CHAR  */
  YYSYMBOL_TK_IDENTIFICADOR = 26,          /* TK_IDENTIFICADOR  */
  YYSYMBOL_27_ = 27,                       /* '='  */
  YYSYMBOL_28_ = 28,                       /* '<'  */
  YYSYMBOL_29_ = 29,                       /* '>'  */
  YYSYMBOL_30_ = 30,                       /* '+'  */
  YYSYMBOL_31_ = 31,                       /* '-'  */
  YYSYMBOL_32_ = 32,                       /* '*'  */
  YYSYMBOL_33_ = 33,                       /* '/'  */
  YYSYMBOL_34_ = 34,                       /* '%'  */
  YYSYMBOL_35_ = 35,                       /* '!'  */
  YYSYMBOL_36_ = 36,                       /* '['  */
  YYSYMBOL_TK_ERRO = 37,                   /* TK_ERRO  */
  YYSYMBOL_38_ = 38,                       /* '^'  */
  YYSYMBOL_39_ = 39,                       /* ']'  */
  YYSYMBOL_40_ = 40,                       /* ';'  */
  YYSYMBOL_41_ = 41,                       /* ','  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_programa = 47,                  /* programa  */
  YYSYMBOL_lista_de_elementos = 48,        /* lista_de_elementos  */
  YYSYMBOL_tipo = 49,                      /* tipo  */
  YYSYMBOL_identificador = 50,             /* identificador  */
  YYSYMBOL_lista_dimensional_inteiro = 51, /* lista_dimensional_inteiro  */
  YYSYMBOL_lista_dimensional = 52,         /* lista_dimensional  */
  YYSYMBOL_var_multidimensional = 53,      /* var_multidimensional  */
  YYSYMBOL_declaracao_var_global = 54,     /* declaracao_var_global  */
  YYSYMBOL_lista_de_identificadores = 55,  /* lista_de_identificadores  */
  YYSYMBOL_declaracao_funcao = 56,         /* declaracao_funcao  */
  YYSYMBOL_cabecalho = 57,                 /* cabecalho  */
  YYSYMBOL_lista_parametros = 58,          /* lista_parametros  */
  YYSYMBOL_parametros_entrada = 59,        /* parametros_entrada  */
  YYSYMBOL_parametro = 60,                 /* parametro  */
  YYSYMBOL_corpo = 61,                     /* corpo  */
  YYSYMBOL_bloco_comandos = 62,            /* bloco_comandos  */
  YYSYMBOL_lista_comandos = 63,            /* lista_comandos  */
  YYSYMBOL_comando = 64,                   /* comando  */
  YYSYMBOL_literal = 65,                   /* literal  */
  YYSYMBOL_declaracao_var_local = 66,      /* declaracao_var_local  */
  YYSYMBOL_identificador_local = 67,       /* identificador_local  */
  YYSYMBOL_lista_de_identificadores_local = 68, /* lista_de_identificadores_local  */
  YYSYMBOL_atribuicao = 69,                /* atribuicao  */
  YYSYMBOL_lista_argumentos = 70,          /* lista_argumentos  */
  YYSYMBOL_argumentos_entrada = 71,        /* argumentos_entrada  */
  YYSYMBOL_argumento = 72,                 /* argumento  */
  YYSYMBOL_controle_fluxo = 73,            /* controle_fluxo  */
  YYSYMBOL_controle_fluxo_while = 74,      /* controle_fluxo_while  */
  YYSYMBOL_retorno = 75,                   /* retorno  */
  YYSYMBOL_chamada_funcao = 76,            /* chamada_funcao  */
  YYSYMBOL_expressao = 77,                 /* expressao  */
  YYSYMBOL_E = 78,                         /* E  */
  YYSYMBOL_T = 79,                         /* T  */
  YYSYMBOL_F = 80,                         /* F  */
  YYSYMBOL_G = 81,                         /* G  */
  YYSYMBOL_H = 82,                         /* H  */
  YYSYMBOL_I = 83,                         /* I  */
  YYSYMBOL_J = 84,                         /* J  */
  YYSYMBOL_K = 85,                         /* K  */
  YYSYMBOL_L = 86,                         /* L  */
  YYSYMBOL_operando = 87,                  /* operando  */
  YYSYMBOL_identificador_expressao = 88,   /* identificador_expressao  */
  YYSYMBOL_lista_expressoes = 89           /* lista_expressoes  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   146

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


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
       2,     2,     2,    35,     2,     2,     2,    34,     2,     2,
      42,    43,    32,    30,    41,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    40,
      28,    27,    29,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    39,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      25,    26,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   112,   112,   113,   115,   116,   117,   118,   131,   132,
     133,   134,   136,   138,   139,   140,   141,   143,   144,   145,
     146,   147,   157,   158,   159,   159,   160,   160,   161,   163,
     164,   164,   165,   165,   180,   181,   182,   183,   184,   185,
     186,   188,   189,   190,   191,   192,   197,   199,   199,   201,
     201,   203,   205,   205,   206,   206,   207,   209,   210,   212,
     214,   216,   225,   226,   226,   228,   228,   230,   230,   230,
     232,   233,   234,   235,   236,   238,   238,   238,   240,   240,
     240,   240,   242,   242,   242,   244,   244,   244,   246,   246,
     248,   248,   248,   250,   250,   252,   252
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_PR_INT",
  "TK_PR_FLOAT", "TK_PR_BOOL", "TK_PR_CHAR", "TK_PR_IF", "TK_PR_THEN",
  "TK_PR_ELSE", "TK_PR_WHILE", "TK_PR_INPUT", "TK_PR_OUTPUT",
  "TK_PR_RETURN", "TK_PR_FOR", "TK_OC_LE", "TK_OC_GE", "TK_OC_EQ",
  "TK_OC_NE", "TK_OC_AND", "TK_OC_OR", "TK_LIT_INT", "TK_LIT_FLOAT",
  "TK_LIT_FALSE", "TK_LIT_TRUE", "TK_LIT_CHAR", "TK_IDENTIFICADOR", "'='",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'['", "TK_ERRO",
  "'^'", "']'", "';'", "','", "'('", "')'", "'{'", "'}'", "$accept",
  "programa", "lista_de_elementos", "tipo", "identificador",
  "lista_dimensional_inteiro", "lista_dimensional", "var_multidimensional",
  "declaracao_var_global", "lista_de_identificadores", "declaracao_funcao",
  "cabecalho", "lista_parametros", "parametros_entrada", "parametro",
  "corpo", "bloco_comandos", "lista_comandos", "comando", "literal",
  "declaracao_var_local", "identificador_local",
  "lista_de_identificadores_local", "atribuicao", "lista_argumentos",
  "argumentos_entrada", "argumento", "controle_fluxo",
  "controle_fluxo_while", "retorno", "chamada_funcao", "expressao", "E",
  "T", "F", "G", "H", "I", "J", "K", "L", "operando",
  "identificador_expressao", "lista_expressoes", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-56)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      54,   -56,   -56,   -56,   -56,    29,    54,     7,   -56,   -56,
      -3,   -56,   -56,   -56,    45,    11,   -56,     4,     5,   -56,
     -56,    54,    70,   -56,    82,    56,    67,    42,   -29,   -56,
      82,   -56,    17,    74,   -56,   -56,   -56,   -56,   -56,   -56,
      88,    82,    73,    76,   -56,   -56,   -56,    16,   -56,    11,
     -56,    42,    42,   -56,   -56,   -56,   -56,   -56,    57,    57,
      42,   -56,   -56,   -56,    98,   100,    68,    24,    59,    38,
     -56,   -56,   -56,   -56,    42,    42,   105,   -56,    80,   -56,
      83,   -56,    42,   -56,   -56,    54,    70,   -56,    79,    81,
      57,    57,   -56,   -56,   -56,    -1,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,   -56,
      66,    84,    85,   -56,   -56,    72,    82,   -56,   -56,   -56,
     -56,   117,    -3,   -56,   -56,   -56,   100,    68,    24,    24,
      59,    59,    59,    59,    38,    38,   -56,   -56,   -56,    42,
     -56,   -56,    42,   -56,   -56,    -3,   -56,   -56,   -56,   119,
      -3,   -56
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     8,     9,    10,    11,     0,     2,     0,     7,     6,
       0,     1,     5,     4,    12,    18,    19,     0,     0,    22,
      29,    25,     0,    17,     0,     0,     0,     0,    93,    31,
       0,    37,     0,     0,    34,    35,    39,    40,    36,    38,
       0,     0,     0,    24,    27,    13,    14,     0,    12,    20,
      21,     0,     0,    41,    45,    43,    44,    42,     0,     0,
       0,    90,    91,    60,    62,    64,    66,    69,    74,    77,
      81,    84,    89,    92,     0,    53,    47,    50,    46,    30,
       0,    33,     0,    28,    23,     0,     0,    16,     0,     0,
       0,     0,    82,    87,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,     0,    52,    55,    56,     0,     0,    32,    51,    26,
      15,     0,     0,    85,    86,    88,    63,    65,    67,    68,
      71,    70,    72,    73,    75,    76,    80,    79,    78,     0,
      94,    61,     0,    48,    49,     0,    59,    95,    54,    57,
       0,    58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,   -56,   -16,    10,    43,   -56,   106,   125,   -56,
     126,   -56,   -56,   -56,    48,   -56,   -10,   -56,   102,    21,
     -56,    22,   -56,   -56,   -56,   -56,    -5,   -56,   -56,   -56,
      -4,   -26,    86,    46,    44,     8,     0,     6,   -32,   -53,
     -55,   -56,    14,   -56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    76,    46,    47,    16,     8,    17,
       9,    10,    42,    43,    44,    19,    31,    32,    33,    61,
      34,    77,    78,    35,   111,   112,   113,    36,    37,    38,
      62,   114,    64,    65,    66,    67,    68,    69,    70,    92,
      71,    72,    73,   110
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      20,    63,    30,    93,    93,    41,    94,    74,     1,     2,
       3,     4,    25,    75,    39,    26,    30,    15,    27,    96,
       1,     2,     3,     4,    25,    88,    89,    26,    39,    11,
      27,    28,    40,    14,    49,    93,    93,   123,   124,   100,
     101,    18,   125,    28,    23,    24,    40,    22,   109,    18,
      29,    83,   102,   103,    86,    87,   118,     1,     2,     3,
       4,    18,    79,    53,    54,    55,    56,    57,    28,    41,
     106,   107,   108,    58,   136,   137,   138,    59,    53,    54,
      55,    56,    57,    28,    60,    98,    99,    21,    90,   104,
     105,    45,    91,    53,    54,    55,    56,    57,    51,    60,
     130,   131,   132,   133,   139,   140,   128,   129,    48,    52,
     134,   135,   146,   147,    81,    82,    84,    85,    96,    97,
     115,   116,   121,   117,   122,   145,   142,   141,   150,   120,
      50,    12,    13,   119,    80,   149,   143,   148,   144,     0,
     151,   127,   126,     0,     0,     0,    95
};

static const yytype_int16 yycheck[] =
{
      10,    27,    18,    58,    59,    21,    59,    36,     3,     4,
       5,     6,     7,    42,    18,    10,    32,     7,    13,    20,
       3,     4,     5,     6,     7,    51,    52,    10,    32,     0,
      13,    26,    18,    26,    24,    90,    91,    90,    91,    15,
      16,    44,    43,    26,    40,    41,    32,    36,    74,    44,
      45,    41,    28,    29,    38,    39,    82,     3,     4,     5,
       6,    44,    45,    21,    22,    23,    24,    25,    26,    85,
      32,    33,    34,    31,   106,   107,   108,    35,    21,    22,
      23,    24,    25,    26,    42,    17,    18,    42,    31,    30,
      31,    21,    35,    21,    22,    23,    24,    25,    42,    42,
     100,   101,   102,   103,    38,    39,    98,    99,    26,    42,
     104,   105,   122,   139,    40,    27,    43,    41,    20,    19,
      15,    41,    43,    40,    43,     8,    41,    43,     9,    86,
      24,     6,     6,    85,    32,   145,   115,   142,   116,    -1,
     150,    97,    96,    -1,    -1,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    47,    48,    49,    54,    56,
      57,     0,    54,    56,    26,    50,    53,    55,    44,    61,
      62,    42,    36,    40,    41,     7,    10,    13,    26,    45,
      49,    62,    63,    64,    66,    69,    73,    74,    75,    76,
      88,    49,    58,    59,    60,    21,    51,    52,    26,    50,
      53,    42,    42,    21,    22,    23,    24,    25,    31,    35,
      42,    65,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    86,    87,    88,    36,    42,    50,    67,    68,    45,
      64,    40,    27,    50,    43,    41,    38,    39,    77,    77,
      31,    35,    85,    86,    85,    78,    20,    19,    17,    18,
      15,    16,    28,    29,    30,    31,    32,    33,    34,    77,
      89,    70,    71,    72,    77,    15,    41,    40,    77,    60,
      51,    43,    43,    85,    85,    43,    79,    80,    81,    81,
      82,    82,    82,    82,    83,    83,    84,    84,    84,    38,
      39,    43,    41,    65,    67,     8,    62,    77,    72,    62,
       9,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    48,    49,    49,
      49,    49,    50,    51,    52,    52,    53,    54,    55,    55,
      55,    55,    56,    57,    58,    58,    59,    59,    60,    61,
      62,    62,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    66,    67,    67,    68,
      68,    69,    70,    70,    71,    71,    72,    73,    73,    74,
      75,    76,    77,    78,    78,    79,    79,    80,    80,    80,
      81,    81,    81,    81,    81,    82,    82,    82,    83,    83,
      83,    83,    84,    84,    84,    85,    85,    85,    86,    86,
      87,    87,    87,    88,    88,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     1,     1,
       3,     3,     2,     5,     1,     0,     3,     1,     2,     1,
       3,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     3,
       1,     3,     1,     0,     3,     1,     1,     6,     8,     5,
       2,     4,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     2,     2,     1,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     4,     3,     1
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* programa: lista_de_elementos  */
#line 112 "parser.y"
                             { arvore = (yyval.no); }
#line 1550 "parser.tab.c"
    break;

  case 3: /* programa: %empty  */
#line 113 "parser.y"
          { (yyval.no) = 0; }
#line 1556 "parser.tab.c"
    break;

  case 4: /* lista_de_elementos: lista_de_elementos declaracao_funcao  */
#line 115 "parser.y"
                                                         { (yyval.no) = (yyvsp[0].no); add_child(&(yyval.no), &(yyvsp[-1].no)); }
#line 1562 "parser.tab.c"
    break;

  case 5: /* lista_de_elementos: lista_de_elementos declaracao_var_global  */
#line 116 "parser.y"
                                                             { (yyval.no) = (yyvsp[-1].no); }
#line 1568 "parser.tab.c"
    break;

  case 6: /* lista_de_elementos: declaracao_funcao  */
#line 117 "parser.y"
                                      { (yyval.no) = (yyvsp[0].no); }
#line 1574 "parser.tab.c"
    break;

  case 7: /* lista_de_elementos: declaracao_var_global  */
#line 118 "parser.y"
                                          { (yyval.no) = 0; }
#line 1580 "parser.tab.c"
    break;

  case 8: /* tipo: TK_PR_INT  */
#line 131 "parser.y"
                  { (yyval.no) = 0; }
#line 1586 "parser.tab.c"
    break;

  case 9: /* tipo: TK_PR_FLOAT  */
#line 132 "parser.y"
                  { (yyval.no) = 0; }
#line 1592 "parser.tab.c"
    break;

  case 10: /* tipo: TK_PR_BOOL  */
#line 133 "parser.y"
                  { (yyval.no) = 0; }
#line 1598 "parser.tab.c"
    break;

  case 11: /* tipo: TK_PR_CHAR  */
#line 134 "parser.y"
                  { (yyval.no) = 0; }
#line 1604 "parser.tab.c"
    break;

  case 12: /* identificador: TK_IDENTIFICADOR  */
#line 136 "parser.y"
                                 { (yyval.no) = create_leaf((yyvsp[0].valor_lexico),IDENTIFICADOR); }
#line 1610 "parser.tab.c"
    break;

  case 22: /* declaracao_funcao: cabecalho corpo  */
#line 157 "parser.y"
                                    { (yyval.no) = create_node((yyvsp[-1].valor_lexico), IDENTIFICADOR); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1616 "parser.tab.c"
    break;

  case 23: /* cabecalho: tipo TK_IDENTIFICADOR '(' lista_parametros ')'  */
#line 158 "parser.y"
                                                          { (yyval.valor_lexico) = (yyvsp[-3].valor_lexico); }
#line 1622 "parser.tab.c"
    break;

  case 24: /* lista_parametros: parametros_entrada  */
#line 159 "parser.y"
                                     { (yyval.no) = 0; }
#line 1628 "parser.tab.c"
    break;

  case 25: /* lista_parametros: %empty  */
#line 159 "parser.y"
                                                   { (yyval.no) = 0;}
#line 1634 "parser.tab.c"
    break;

  case 26: /* parametros_entrada: parametros_entrada ',' parametro  */
#line 160 "parser.y"
                                                     { (yyval.no) = 0; }
#line 1640 "parser.tab.c"
    break;

  case 27: /* parametros_entrada: parametro  */
#line 160 "parser.y"
                                                                             { (yyval.no) = 0; }
#line 1646 "parser.tab.c"
    break;

  case 28: /* parametro: tipo identificador  */
#line 161 "parser.y"
                              { (yyval.no) = 0; }
#line 1652 "parser.tab.c"
    break;

  case 29: /* corpo: bloco_comandos  */
#line 163 "parser.y"
                       { (yyval.no) = (yyvsp[0].no); }
#line 1658 "parser.tab.c"
    break;

  case 30: /* bloco_comandos: '{' lista_comandos '}'  */
#line 164 "parser.y"
                                         { (yyval.no) = (yyvsp[-1].no); }
#line 1664 "parser.tab.c"
    break;

  case 31: /* bloco_comandos: '{' '}'  */
#line 164 "parser.y"
                                                                {  (yyval.no) = 0; }
#line 1670 "parser.tab.c"
    break;

  case 32: /* lista_comandos: lista_comandos comando ';'  */
#line 165 "parser.y"
                                            { (yyval.no) = (yyvsp[-1].no); add_child(&(yyval.no),&(yyvsp[-2].no)); }
#line 1676 "parser.tab.c"
    break;

  case 33: /* lista_comandos: comando ';'  */
#line 165 "parser.y"
                                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 1682 "parser.tab.c"
    break;

  case 34: /* comando: declaracao_var_local  */
#line 180 "parser.y"
                              { (yyval.no) = (yyvsp[0].no);}
#line 1688 "parser.tab.c"
    break;

  case 35: /* comando: atribuicao  */
#line 181 "parser.y"
                    { (yyval.no) = (yyvsp[0].no);}
#line 1694 "parser.tab.c"
    break;

  case 36: /* comando: retorno  */
#line 182 "parser.y"
                 { (yyval.no) = (yyvsp[0].no);}
#line 1700 "parser.tab.c"
    break;

  case 37: /* comando: bloco_comandos  */
#line 183 "parser.y"
                        { (yyval.no) = (yyvsp[0].no);}
#line 1706 "parser.tab.c"
    break;

  case 38: /* comando: chamada_funcao  */
#line 184 "parser.y"
                        { (yyval.no) = (yyvsp[0].no);}
#line 1712 "parser.tab.c"
    break;

  case 39: /* comando: controle_fluxo  */
#line 185 "parser.y"
                        { (yyval.no) = (yyvsp[0].no);}
#line 1718 "parser.tab.c"
    break;

  case 40: /* comando: controle_fluxo_while  */
#line 186 "parser.y"
                              { (yyval.no) = (yyvsp[0].no);}
#line 1724 "parser.tab.c"
    break;

  case 41: /* literal: TK_LIT_INT  */
#line 188 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_INT); }
#line 1730 "parser.tab.c"
    break;

  case 42: /* literal: TK_LIT_CHAR  */
#line 189 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_CHAR); }
#line 1736 "parser.tab.c"
    break;

  case 43: /* literal: TK_LIT_FALSE  */
#line 190 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_BOOL); }
#line 1742 "parser.tab.c"
    break;

  case 44: /* literal: TK_LIT_TRUE  */
#line 191 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_BOOL); }
#line 1748 "parser.tab.c"
    break;

  case 45: /* literal: TK_LIT_FLOAT  */
#line 192 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_FLOAT); }
#line 1754 "parser.tab.c"
    break;

  case 46: /* declaracao_var_local: tipo lista_de_identificadores_local  */
#line 197 "parser.y"
                                                          { (yyval.no) = (yyvsp[0].no); }
#line 1760 "parser.tab.c"
    break;

  case 47: /* identificador_local: identificador  */
#line 199 "parser.y"
                                   { (yyval.no) = 0; }
#line 1766 "parser.tab.c"
    break;

  case 48: /* identificador_local: identificador TK_OC_LE literal  */
#line 199 "parser.y"
                                                                                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), INIC_VAR); add_child(&(yyval.no),&(yyvsp[-2].no)); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1772 "parser.tab.c"
    break;

  case 49: /* lista_de_identificadores_local: lista_de_identificadores_local ',' identificador_local  */
#line 201 "parser.y"
                                                                                       { (yyval.no) = (yyvsp[0].no); add_child(&(yyval.no), &(yyvsp[-2].no)); }
#line 1778 "parser.tab.c"
    break;

  case 50: /* lista_de_identificadores_local: identificador_local  */
#line 201 "parser.y"
                                                                                                                                               { (yyval.no) = (yyvsp[0].no); }
#line 1784 "parser.tab.c"
    break;

  case 51: /* atribuicao: identificador_expressao '=' expressao  */
#line 203 "parser.y"
                                                  { (yyval.no) = create_node((yyvsp[-1].valor_lexico), ATRIBUICAO); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1790 "parser.tab.c"
    break;

  case 52: /* lista_argumentos: argumentos_entrada  */
#line 205 "parser.y"
                                     { (yyval.no) = (yyvsp[0].no); }
#line 1796 "parser.tab.c"
    break;

  case 53: /* lista_argumentos: %empty  */
#line 205 "parser.y"
                                                    { (yyval.no) = 0; }
#line 1802 "parser.tab.c"
    break;

  case 54: /* argumentos_entrada: argumentos_entrada ',' argumento  */
#line 206 "parser.y"
                                                     { (yyval.no) = (yyvsp[0].no); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1808 "parser.tab.c"
    break;

  case 55: /* argumentos_entrada: argumento  */
#line 206 "parser.y"
                                                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 1814 "parser.tab.c"
    break;

  case 56: /* argumento: expressao  */
#line 207 "parser.y"
                     { (yyval.no) = (yyvsp[0].no); }
#line 1820 "parser.tab.c"
    break;

  case 57: /* controle_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_comandos  */
#line 209 "parser.y"
                                                                      { (yyval.no) = create_node((yyvsp[-5].valor_lexico), IF); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1826 "parser.tab.c"
    break;

  case 58: /* controle_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_comandos TK_PR_ELSE bloco_comandos  */
#line 210 "parser.y"
                                                                                               { (yyval.no) = create_node((yyvsp[-7].valor_lexico), IF_ELSE); add_child(&(yyval.no),&(yyvsp[-2].no)); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1832 "parser.tab.c"
    break;

  case 59: /* controle_fluxo_while: TK_PR_WHILE '(' expressao ')' bloco_comandos  */
#line 212 "parser.y"
                                                                   { (yyval.no) = create_node((yyvsp[-4].valor_lexico), WHILE); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1838 "parser.tab.c"
    break;

  case 60: /* retorno: TK_PR_RETURN expressao  */
#line 214 "parser.y"
                                { (yyval.no) = create_node( (yyvsp[-1].valor_lexico), RETURN); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1844 "parser.tab.c"
    break;

  case 61: /* chamada_funcao: TK_IDENTIFICADOR '(' lista_argumentos ')'  */
#line 216 "parser.y"
                                                          { (yyval.no) = create_node((yyvsp[-3].valor_lexico), CHAMADA_FUNC); add_child(&(yyval.no), &(yyvsp[-1].no)); }
#line 1850 "parser.tab.c"
    break;

  case 62: /* expressao: E  */
#line 225 "parser.y"
             { (yyval.no) = (yyvsp[0].no);}
#line 1856 "parser.tab.c"
    break;

  case 63: /* E: E TK_OC_OR T  */
#line 226 "parser.y"
                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_OR); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1862 "parser.tab.c"
    break;

  case 64: /* E: T  */
#line 226 "parser.y"
                                                                                                 { (yyval.no) = (yyvsp[0].no); }
#line 1868 "parser.tab.c"
    break;

  case 65: /* T: T TK_OC_AND F  */
#line 228 "parser.y"
                 { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_AND); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1874 "parser.tab.c"
    break;

  case 66: /* T: F  */
#line 228 "parser.y"
                                                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 1880 "parser.tab.c"
    break;

  case 67: /* F: F TK_OC_EQ G  */
#line 230 "parser.y"
                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_EQ); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1886 "parser.tab.c"
    break;

  case 68: /* F: F TK_OC_NE G  */
#line 230 "parser.y"
                                                                                                            { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_NE); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1892 "parser.tab.c"
    break;

  case 69: /* F: G  */
#line 230 "parser.y"
                                                                                                                                                                                            { (yyval.no) = (yyvsp[0].no); }
#line 1898 "parser.tab.c"
    break;

  case 70: /* G: G TK_OC_GE H  */
#line 232 "parser.y"
                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_GE); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1904 "parser.tab.c"
    break;

  case 71: /* G: G TK_OC_LE H  */
#line 233 "parser.y"
                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_LE); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1910 "parser.tab.c"
    break;

  case 72: /* G: G '<' H  */
#line 234 "parser.y"
           { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_LT); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1916 "parser.tab.c"
    break;

  case 73: /* G: G '>' H  */
#line 235 "parser.y"
           { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_GT); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1922 "parser.tab.c"
    break;

  case 74: /* G: H  */
#line 236 "parser.y"
     { (yyval.no) = (yyvsp[0].no); }
#line 1928 "parser.tab.c"
    break;

  case 75: /* H: H '+' I  */
#line 238 "parser.y"
           { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_PLUS); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1934 "parser.tab.c"
    break;

  case 76: /* H: H '-' I  */
#line 238 "parser.y"
                                                                                                   { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_MINUS); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1940 "parser.tab.c"
    break;

  case 77: /* H: I  */
#line 238 "parser.y"
                                                                                                                                                                                      { (yyval.no) = (yyvsp[0].no); }
#line 1946 "parser.tab.c"
    break;

  case 78: /* I: I '%' J  */
#line 240 "parser.y"
           { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_PERCENT); add_child(& (yyval.no), & (yyvsp[-2].no)); add_child(& (yyval.no), & (yyvsp[0].no)); }
#line 1952 "parser.tab.c"
    break;

  case 79: /* I: I '/' J  */
#line 240 "parser.y"
                                                                                                         { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_DIV); add_child(& (yyval.no), & (yyvsp[-2].no)); add_child(& (yyval.no), & (yyvsp[0].no)); }
#line 1958 "parser.tab.c"
    break;

  case 80: /* I: I '*' J  */
#line 240 "parser.y"
                                                                                                                                                                                                    { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_MULT); add_child(& (yyval.no), & (yyvsp[-2].no)); add_child(& (yyval.no), & (yyvsp[0].no)); }
#line 1964 "parser.tab.c"
    break;

  case 81: /* I: J  */
#line 240 "parser.y"
                                                                                                                                                                                                                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 1970 "parser.tab.c"
    break;

  case 82: /* J: '-' K  */
#line 242 "parser.y"
         { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_MINUS); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1976 "parser.tab.c"
    break;

  case 83: /* J: '!' K  */
#line 242 "parser.y"
                                                                          { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_NEG); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1982 "parser.tab.c"
    break;

  case 84: /* J: L  */
#line 242 "parser.y"
                                                                                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 1988 "parser.tab.c"
    break;

  case 85: /* K: '-' K  */
#line 244 "parser.y"
         { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_MINUS); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1994 "parser.tab.c"
    break;

  case 86: /* K: '!' K  */
#line 244 "parser.y"
                                                                          { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_NEG); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 2000 "parser.tab.c"
    break;

  case 87: /* K: L  */
#line 244 "parser.y"
                                                                                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 2006 "parser.tab.c"
    break;

  case 88: /* L: '(' E ')'  */
#line 246 "parser.y"
             { (yyval.no) = (yyvsp[-1].no); }
#line 2012 "parser.tab.c"
    break;

  case 89: /* L: operando  */
#line 246 "parser.y"
                                     { (yyval.no) = (yyvsp[0].no); }
#line 2018 "parser.tab.c"
    break;

  case 90: /* operando: literal  */
#line 248 "parser.y"
                  { (yyval.no) = (yyvsp[0].no); }
#line 2024 "parser.tab.c"
    break;

  case 91: /* operando: chamada_funcao  */
#line 248 "parser.y"
                                                { (yyval.no) = (yyvsp[0].no); }
#line 2030 "parser.tab.c"
    break;

  case 92: /* operando: identificador_expressao  */
#line 248 "parser.y"
                                                                                       { (yyval.no) = (yyvsp[0].no); }
#line 2036 "parser.tab.c"
    break;

  case 93: /* identificador_expressao: TK_IDENTIFICADOR  */
#line 250 "parser.y"
                                          { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), IDENTIFICADOR); }
#line 2042 "parser.tab.c"
    break;

  case 94: /* identificador_expressao: TK_IDENTIFICADOR '[' lista_expressoes ']'  */
#line 250 "parser.y"
                                                                                                                               { (yyval.no) = create_node((yyvsp[-2].valor_lexico), IDENT_EXP); ASTNODE * identLeaf = create_leaf((yyvsp[-3].valor_lexico),IDENTIFICADOR);  add_child(&(yyval.no),&identLeaf); add_child(&(yyval.no),&(yyvsp[-1].no)); }
#line 2048 "parser.tab.c"
    break;

  case 95: /* lista_expressoes: lista_expressoes '^' expressao  */
#line 252 "parser.y"
                                                 { (yyval.no) = (yyvsp[0].no); add_child(& (yyval.no), & (yyvsp[-2].no)); }
#line 2054 "parser.tab.c"
    break;

  case 96: /* lista_expressoes: expressao  */
#line 252 "parser.y"
                                                                                                 { (yyval.no) = (yyvsp[0].no); }
#line 2060 "parser.tab.c"
    break;


#line 2064 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 254 "parser.y"


void yyerror(char const *s){
	printf("%s na linha: %d\n", s,get_line_number());
	
}

