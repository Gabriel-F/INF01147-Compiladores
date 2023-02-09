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

int yylex(void);
void yyerror (char const *s);
extern int get_line_number();


#line 85 "parser.tab.c"

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
  YYSYMBOL_37_ = 37,                       /* ']'  */
  YYSYMBOL_38_ = 38,                       /* '^'  */
  YYSYMBOL_TK_ERRO = 39,                   /* TK_ERRO  */
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
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  151

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
       2,    36,     2,    37,    38,     2,     2,     2,     2,     2,
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
      25,    26,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   111,   111,   112,   114,   115,   116,   117,   130,   131,
     132,   133,   135,   137,   138,   139,   140,   142,   143,   144,
     145,   146,   156,   157,   158,   158,   159,   159,   160,   162,
     163,   163,   164,   164,   179,   180,   181,   182,   183,   184,
     185,   187,   188,   189,   190,   191,   196,   198,   198,   200,
     200,   202,   204,   204,   205,   205,   206,   208,   209,   211,
     213,   215,   224,   225,   225,   227,   227,   229,   229,   229,
     231,   232,   233,   234,   235,   237,   237,   237,   239,   239,
     239,   239,   241,   241,   241,   243,   243,   243,   245,   245,
     247,   247,   247,   249,   249,   255,   255
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
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'['", "']'",
  "'^'", "TK_ERRO", "';'", "','", "'('", "')'", "'{'", "'}'", "$accept",
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

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-13)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      96,   -73,   -73,   -73,   -73,    13,    96,   -21,   -73,   -73,
     -13,   -73,   -73,   -73,    10,   -73,    14,     4,   -73,   -73,
      29,    96,   -73,    17,    31,    44,    41,    15,   -73,    64,
     -73,    16,    63,   -73,   -73,   -73,   -73,   -73,   -73,    70,
     -73,   -73,    21,    84,    72,    75,   -73,    81,   -73,    41,
      41,   -73,   -73,   -73,   -73,   -73,    56,    56,    41,   -73,
     -73,   -73,    98,   100,    57,    12,    54,    36,   -73,   -73,
     -73,   -73,    41,    41,   105,   106,   -73,    82,   -73,    85,
     -73,    41,   -73,    29,   -73,   -73,    96,    79,    83,    56,
      56,   -73,   -73,   -73,    -5,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,   -73,    51,
      86,    87,   -73,   -73,    71,    64,   -73,   -73,   -73,   -73,
     116,   -13,   -73,   -73,   -73,   100,    57,    12,    12,    54,
      54,    54,    54,    36,    36,   -73,   -73,   -73,   -73,    41,
     -73,    41,   -73,   -73,   -13,   -73,   -73,   -73,   118,   -13,
     -73
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     8,     9,    10,    11,     0,     2,     0,     7,     6,
       0,     1,     5,     4,    18,    19,     0,     0,    22,    29,
       0,    25,    17,     0,     0,     0,     0,    93,    31,     0,
      37,     0,     0,    34,    35,    39,    40,    36,    38,     0,
      13,    14,     0,     0,     0,    24,    27,    20,    21,     0,
       0,    41,    45,    43,    44,    42,     0,     0,     0,    90,
      91,    60,    62,    64,    66,    69,    74,    77,    81,    84,
      89,    92,     0,    53,    47,     0,    50,    46,    30,     0,
      33,     0,    16,     0,    28,    23,     0,     0,     0,     0,
       0,    82,    87,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,    52,    55,    56,     0,     0,    32,    51,    15,    26,
       0,     0,    85,    86,    88,    63,    65,    67,    68,    71,
      70,    72,    73,    75,    76,    80,    79,    78,    94,     0,
      61,     0,    48,    49,     0,    59,    95,    54,    57,     0,
      58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,   -73,   -15,   -73,    47,   -73,   108,   126,   -73,
     127,   -73,   -73,   -73,    49,   -73,   -10,   -73,   107,    23,
     -73,    25,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
       1,   -25,    78,    48,    46,    11,     5,     9,   -72,   -45,
     -53,   -73,    22,   -73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    75,    41,    42,    15,     8,    16,
       9,    10,    44,    45,    46,    18,    30,    31,    32,    59,
      33,    76,    77,    34,   110,   111,   112,    35,    36,    37,
      60,   113,    62,    63,    64,    65,    66,    67,    68,    91,
      69,    70,    71,   109
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    61,    29,    92,    92,    14,    43,     1,     2,     3,
       4,    24,    93,    11,    25,    95,    29,    26,    38,     1,
       2,     3,     4,    24,    87,    88,    25,    99,   100,    26,
      27,    17,    38,   135,   136,   137,    92,    92,   124,    39,
     101,   102,    27,    47,   122,   123,    20,   108,    17,    28,
      40,    72,    21,    39,    22,    23,   117,    73,    82,    83,
      17,    78,    51,    52,    53,    54,    55,    27,   105,   106,
     107,    43,    56,    49,    97,    98,    57,    51,    52,    53,
      54,    55,    27,    58,   103,   104,    50,    89,   138,   139,
      74,    90,    51,    52,    53,    54,    55,    81,    58,     1,
       2,     3,     4,    80,   129,   130,   131,   132,   127,   128,
      84,   145,   133,   134,   146,    85,    86,    20,    95,    96,
     -12,   114,   120,   115,   144,   116,   121,   149,   141,   140,
     118,    48,    12,    13,   148,   119,    94,   142,    79,   150,
     143,   147,   126,   125
};

static const yytype_uint8 yycheck[] =
{
      10,    26,    17,    56,    57,    26,    21,     3,     4,     5,
       6,     7,    57,     0,    10,    20,    31,    13,    17,     3,
       4,     5,     6,     7,    49,    50,    10,    15,    16,    13,
      26,    44,    31,   105,   106,   107,    89,    90,    43,    17,
      28,    29,    26,    26,    89,    90,    36,    72,    44,    45,
      21,    36,    42,    31,    40,    41,    81,    42,    37,    38,
      44,    45,    21,    22,    23,    24,    25,    26,    32,    33,
      34,    86,    31,    42,    17,    18,    35,    21,    22,    23,
      24,    25,    26,    42,    30,    31,    42,    31,    37,    38,
      26,    35,    21,    22,    23,    24,    25,    27,    42,     3,
       4,     5,     6,    40,    99,   100,   101,   102,    97,    98,
      26,   121,   103,   104,   139,    43,    41,    36,    20,    19,
      15,    15,    43,    41,     8,    40,    43,     9,    41,    43,
      83,    23,     6,     6,   144,    86,    58,   114,    31,   149,
     115,   141,    96,    95
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    47,    48,    49,    54,    56,
      57,     0,    54,    56,    26,    53,    55,    44,    61,    62,
      36,    42,    40,    41,     7,    10,    13,    26,    45,    49,
      62,    63,    64,    66,    69,    73,    74,    75,    76,    88,
      21,    51,    52,    49,    58,    59,    60,    26,    53,    42,
      42,    21,    22,    23,    24,    25,    31,    35,    42,    65,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    86,
      87,    88,    36,    42,    26,    50,    67,    68,    45,    64,
      40,    27,    37,    38,    26,    43,    41,    77,    77,    31,
      35,    85,    86,    85,    78,    20,    19,    17,    18,    15,
      16,    28,    29,    30,    31,    32,    33,    34,    77,    89,
      70,    71,    72,    77,    15,    41,    40,    77,    51,    60,
      43,    43,    85,    85,    43,    79,    80,    81,    81,    82,
      82,    82,    82,    83,    83,    84,    84,    84,    37,    38,
      43,    41,    65,    67,     8,    62,    77,    72,    62,     9,
      62
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
#line 111 "parser.y"
                             { arvore = (yyval.no);  }
#line 1545 "parser.tab.c"
    break;

  case 3: /* programa: %empty  */
#line 112 "parser.y"
          { (yyval.no) = 0; }
#line 1551 "parser.tab.c"
    break;

  case 4: /* lista_de_elementos: lista_de_elementos declaracao_funcao  */
#line 114 "parser.y"
                                                         { if((yyvsp[-1].no) == 0){ (yyval.no) = (yyvsp[0].no);} else {(yyval.no) = (yyvsp[-1].no); add_child(&(yyval.no), &(yyvsp[0].no));} }
#line 1557 "parser.tab.c"
    break;

  case 5: /* lista_de_elementos: lista_de_elementos declaracao_var_global  */
#line 115 "parser.y"
                                                             { (yyval.no) = (yyvsp[-1].no); }
#line 1563 "parser.tab.c"
    break;

  case 6: /* lista_de_elementos: declaracao_funcao  */
#line 116 "parser.y"
                                      { (yyval.no) = (yyvsp[0].no); }
#line 1569 "parser.tab.c"
    break;

  case 7: /* lista_de_elementos: declaracao_var_global  */
#line 117 "parser.y"
                                          { }
#line 1575 "parser.tab.c"
    break;

  case 8: /* tipo: TK_PR_INT  */
#line 130 "parser.y"
                  { (yyval.no) = 0; }
#line 1581 "parser.tab.c"
    break;

  case 9: /* tipo: TK_PR_FLOAT  */
#line 131 "parser.y"
                  { (yyval.no) = 0; }
#line 1587 "parser.tab.c"
    break;

  case 10: /* tipo: TK_PR_BOOL  */
#line 132 "parser.y"
                  { (yyval.no) = 0; }
#line 1593 "parser.tab.c"
    break;

  case 11: /* tipo: TK_PR_CHAR  */
#line 133 "parser.y"
                  { (yyval.no) = 0; }
#line 1599 "parser.tab.c"
    break;

  case 12: /* identificador: TK_IDENTIFICADOR  */
#line 135 "parser.y"
                                 { (yyval.no) = create_leaf((yyvsp[0].valor_lexico),IDENTIFICADOR); }
#line 1605 "parser.tab.c"
    break;

  case 16: /* var_multidimensional: TK_IDENTIFICADOR '[' lista_dimensional ']'  */
#line 140 "parser.y"
                                                                 { deleteValue((yyvsp[-3].valor_lexico)); }
#line 1611 "parser.tab.c"
    break;

  case 17: /* declaracao_var_global: tipo lista_de_identificadores ';'  */
#line 142 "parser.y"
                                                         { (yyval.no) = 0;}
#line 1617 "parser.tab.c"
    break;

  case 18: /* lista_de_identificadores: TK_IDENTIFICADOR  */
#line 143 "parser.y"
                                           { deleteValue((yyvsp[0].valor_lexico)); }
#line 1623 "parser.tab.c"
    break;

  case 22: /* declaracao_funcao: cabecalho corpo  */
#line 156 "parser.y"
                                    { (yyval.no) = create_node((yyvsp[-1].valor_lexico), IDENTIFICADOR); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1629 "parser.tab.c"
    break;

  case 23: /* cabecalho: tipo TK_IDENTIFICADOR '(' lista_parametros ')'  */
#line 157 "parser.y"
                                                          { (yyval.valor_lexico) = (yyvsp[-3].valor_lexico); }
#line 1635 "parser.tab.c"
    break;

  case 24: /* lista_parametros: parametros_entrada  */
#line 158 "parser.y"
                                     { (yyval.no) = 0; }
#line 1641 "parser.tab.c"
    break;

  case 25: /* lista_parametros: %empty  */
#line 158 "parser.y"
                                                   { (yyval.no) = 0;}
#line 1647 "parser.tab.c"
    break;

  case 26: /* parametros_entrada: parametros_entrada ',' parametro  */
#line 159 "parser.y"
                                                     { (yyval.no) = 0; }
#line 1653 "parser.tab.c"
    break;

  case 27: /* parametros_entrada: parametro  */
#line 159 "parser.y"
                                                                             { (yyval.no) = 0; }
#line 1659 "parser.tab.c"
    break;

  case 28: /* parametro: tipo TK_IDENTIFICADOR  */
#line 160 "parser.y"
                                 { (yyval.no) = 0; deleteValue((yyvsp[0].valor_lexico));}
#line 1665 "parser.tab.c"
    break;

  case 29: /* corpo: bloco_comandos  */
#line 162 "parser.y"
                       { (yyval.no) = (yyvsp[0].no); }
#line 1671 "parser.tab.c"
    break;

  case 30: /* bloco_comandos: '{' lista_comandos '}'  */
#line 163 "parser.y"
                                         { (yyval.no) = (yyvsp[-1].no); }
#line 1677 "parser.tab.c"
    break;

  case 31: /* bloco_comandos: '{' '}'  */
#line 163 "parser.y"
                                                                {  (yyval.no) = 0; }
#line 1683 "parser.tab.c"
    break;

  case 32: /* lista_comandos: lista_comandos comando ';'  */
#line 164 "parser.y"
                                            { if((yyvsp[-2].no) == 0){ (yyval.no) = (yyvsp[-1].no);} else {(yyval.no) = (yyvsp[-2].no); add_child(&(yyval.no), &(yyvsp[-1].no));} }
#line 1689 "parser.tab.c"
    break;

  case 33: /* lista_comandos: comando ';'  */
#line 164 "parser.y"
                                                                                                                           { (yyval.no) = (yyvsp[-1].no); }
#line 1695 "parser.tab.c"
    break;

  case 34: /* comando: declaracao_var_local  */
#line 179 "parser.y"
                              { (yyval.no) = (yyvsp[0].no);}
#line 1701 "parser.tab.c"
    break;

  case 35: /* comando: atribuicao  */
#line 180 "parser.y"
                    { (yyval.no) = (yyvsp[0].no);}
#line 1707 "parser.tab.c"
    break;

  case 36: /* comando: retorno  */
#line 181 "parser.y"
                 { (yyval.no) = (yyvsp[0].no);}
#line 1713 "parser.tab.c"
    break;

  case 37: /* comando: bloco_comandos  */
#line 182 "parser.y"
                        { (yyval.no) = (yyvsp[0].no);}
#line 1719 "parser.tab.c"
    break;

  case 38: /* comando: chamada_funcao  */
#line 183 "parser.y"
                        { (yyval.no) = (yyvsp[0].no);}
#line 1725 "parser.tab.c"
    break;

  case 39: /* comando: controle_fluxo  */
#line 184 "parser.y"
                        { (yyval.no) = (yyvsp[0].no);}
#line 1731 "parser.tab.c"
    break;

  case 40: /* comando: controle_fluxo_while  */
#line 185 "parser.y"
                              { (yyval.no) = (yyvsp[0].no);}
#line 1737 "parser.tab.c"
    break;

  case 41: /* literal: TK_LIT_INT  */
#line 187 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_INT); }
#line 1743 "parser.tab.c"
    break;

  case 42: /* literal: TK_LIT_CHAR  */
#line 188 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_CHAR); }
#line 1749 "parser.tab.c"
    break;

  case 43: /* literal: TK_LIT_FALSE  */
#line 189 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_BOOL); }
#line 1755 "parser.tab.c"
    break;

  case 44: /* literal: TK_LIT_TRUE  */
#line 190 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_BOOL); }
#line 1761 "parser.tab.c"
    break;

  case 45: /* literal: TK_LIT_FLOAT  */
#line 191 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_FLOAT); }
#line 1767 "parser.tab.c"
    break;

  case 46: /* declaracao_var_local: tipo lista_de_identificadores_local  */
#line 196 "parser.y"
                                                          { (yyval.no) = (yyvsp[0].no); }
#line 1773 "parser.tab.c"
    break;

  case 47: /* identificador_local: TK_IDENTIFICADOR  */
#line 198 "parser.y"
                                      { (yyval.no)=0; deleteValue((yyvsp[0].valor_lexico)); }
#line 1779 "parser.tab.c"
    break;

  case 48: /* identificador_local: identificador TK_OC_LE literal  */
#line 198 "parser.y"
                                                                                                  { (yyval.no) = create_node((yyvsp[-1].valor_lexico), INIC_VAR); add_child(&(yyval.no),&(yyvsp[-2].no)); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1785 "parser.tab.c"
    break;

  case 49: /* lista_de_identificadores_local: lista_de_identificadores_local ',' identificador_local  */
#line 200 "parser.y"
                                                                                       { if((yyvsp[0].no) != 0){(yyval.no) = (yyvsp[0].no); add_child(&(yyval.no), &(yyvsp[-2].no));} }
#line 1791 "parser.tab.c"
    break;

  case 50: /* lista_de_identificadores_local: identificador_local  */
#line 200 "parser.y"
                                                                                                                                                            { (yyval.no) = (yyvsp[0].no); }
#line 1797 "parser.tab.c"
    break;

  case 51: /* atribuicao: identificador_expressao '=' expressao  */
#line 202 "parser.y"
                                                  { (yyval.no) = create_node((yyvsp[-1].valor_lexico), ATRIBUICAO); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1803 "parser.tab.c"
    break;

  case 52: /* lista_argumentos: argumentos_entrada  */
#line 204 "parser.y"
                                     { (yyval.no) = (yyvsp[0].no); }
#line 1809 "parser.tab.c"
    break;

  case 53: /* lista_argumentos: %empty  */
#line 204 "parser.y"
                                                    { (yyval.no) = 0; }
#line 1815 "parser.tab.c"
    break;

  case 54: /* argumentos_entrada: argumentos_entrada ',' argumento  */
#line 205 "parser.y"
                                                     { (yyval.no) = (yyvsp[-2].no); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1821 "parser.tab.c"
    break;

  case 55: /* argumentos_entrada: argumento  */
#line 205 "parser.y"
                                                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 1827 "parser.tab.c"
    break;

  case 56: /* argumento: expressao  */
#line 206 "parser.y"
                     { (yyval.no) = (yyvsp[0].no); }
#line 1833 "parser.tab.c"
    break;

  case 57: /* controle_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_comandos  */
#line 208 "parser.y"
                                                                      { (yyval.no) = create_node((yyvsp[-5].valor_lexico), IF); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1839 "parser.tab.c"
    break;

  case 58: /* controle_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_comandos TK_PR_ELSE bloco_comandos  */
#line 209 "parser.y"
                                                                                               { (yyval.no) = create_node((yyvsp[-7].valor_lexico), IF_ELSE); add_child(&(yyval.no),&(yyvsp[-2].no)); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1845 "parser.tab.c"
    break;

  case 59: /* controle_fluxo_while: TK_PR_WHILE '(' expressao ')' bloco_comandos  */
#line 211 "parser.y"
                                                                   { (yyval.no) = create_node((yyvsp[-4].valor_lexico), WHILE); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1851 "parser.tab.c"
    break;

  case 60: /* retorno: TK_PR_RETURN expressao  */
#line 213 "parser.y"
                                { (yyval.no) = create_node( (yyvsp[-1].valor_lexico), RETURN); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1857 "parser.tab.c"
    break;

  case 61: /* chamada_funcao: TK_IDENTIFICADOR '(' lista_argumentos ')'  */
#line 215 "parser.y"
                                                          { (yyval.no) = create_node((yyvsp[-3].valor_lexico), CHAMADA_FUNC); add_child(&(yyval.no), &(yyvsp[-1].no)); }
#line 1863 "parser.tab.c"
    break;

  case 62: /* expressao: E  */
#line 224 "parser.y"
             { (yyval.no) = (yyvsp[0].no);}
#line 1869 "parser.tab.c"
    break;

  case 63: /* E: E TK_OC_OR T  */
#line 225 "parser.y"
                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_OR); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1875 "parser.tab.c"
    break;

  case 64: /* E: T  */
#line 225 "parser.y"
                                                                                                 { (yyval.no) = (yyvsp[0].no); }
#line 1881 "parser.tab.c"
    break;

  case 65: /* T: T TK_OC_AND F  */
#line 227 "parser.y"
                 { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_AND); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1887 "parser.tab.c"
    break;

  case 66: /* T: F  */
#line 227 "parser.y"
                                                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 1893 "parser.tab.c"
    break;

  case 67: /* F: F TK_OC_EQ G  */
#line 229 "parser.y"
                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_EQ); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1899 "parser.tab.c"
    break;

  case 68: /* F: F TK_OC_NE G  */
#line 229 "parser.y"
                                                                                                            { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_NE); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1905 "parser.tab.c"
    break;

  case 69: /* F: G  */
#line 229 "parser.y"
                                                                                                                                                                                            { (yyval.no) = (yyvsp[0].no); }
#line 1911 "parser.tab.c"
    break;

  case 70: /* G: G TK_OC_GE H  */
#line 231 "parser.y"
                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_GE); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no),&(yyvsp[0].no)); }
#line 1917 "parser.tab.c"
    break;

  case 71: /* G: G TK_OC_LE H  */
#line 232 "parser.y"
                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_LE); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1923 "parser.tab.c"
    break;

  case 72: /* G: G '<' H  */
#line 233 "parser.y"
           { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_LT); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1929 "parser.tab.c"
    break;

  case 73: /* G: G '>' H  */
#line 234 "parser.y"
           { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_GT); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1935 "parser.tab.c"
    break;

  case 74: /* G: H  */
#line 235 "parser.y"
     { (yyval.no) = (yyvsp[0].no); }
#line 1941 "parser.tab.c"
    break;

  case 75: /* H: H '+' I  */
#line 237 "parser.y"
           { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_PLUS); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1947 "parser.tab.c"
    break;

  case 76: /* H: H '-' I  */
#line 237 "parser.y"
                                                                                                   { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_MINUS); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1953 "parser.tab.c"
    break;

  case 77: /* H: I  */
#line 237 "parser.y"
                                                                                                                                                                                      { (yyval.no) = (yyvsp[0].no); }
#line 1959 "parser.tab.c"
    break;

  case 78: /* I: I '%' J  */
#line 239 "parser.y"
           { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_PERCENT); add_child(& (yyval.no), & (yyvsp[-2].no)); add_child(& (yyval.no), & (yyvsp[0].no)); }
#line 1965 "parser.tab.c"
    break;

  case 79: /* I: I '/' J  */
#line 239 "parser.y"
                                                                                                         { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_DIV); add_child(& (yyval.no), & (yyvsp[-2].no)); add_child(& (yyval.no), & (yyvsp[0].no)); }
#line 1971 "parser.tab.c"
    break;

  case 80: /* I: I '*' J  */
#line 239 "parser.y"
                                                                                                                                                                                                    { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_MULT); add_child(& (yyval.no), & (yyvsp[-2].no)); add_child(& (yyval.no), & (yyvsp[0].no)); }
#line 1977 "parser.tab.c"
    break;

  case 81: /* I: J  */
#line 239 "parser.y"
                                                                                                                                                                                                                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 1983 "parser.tab.c"
    break;

  case 82: /* J: '-' K  */
#line 241 "parser.y"
         { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_MINUS); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1989 "parser.tab.c"
    break;

  case 83: /* J: '!' K  */
#line 241 "parser.y"
                                                                          { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_NEG); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 1995 "parser.tab.c"
    break;

  case 84: /* J: L  */
#line 241 "parser.y"
                                                                                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 2001 "parser.tab.c"
    break;

  case 85: /* K: '-' K  */
#line 243 "parser.y"
         { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_MINUS); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 2007 "parser.tab.c"
    break;

  case 86: /* K: '!' K  */
#line 243 "parser.y"
                                                                          { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_NEG); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 2013 "parser.tab.c"
    break;

  case 87: /* K: L  */
#line 243 "parser.y"
                                                                                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 2019 "parser.tab.c"
    break;

  case 88: /* L: '(' E ')'  */
#line 245 "parser.y"
             { (yyval.no) = (yyvsp[-1].no); }
#line 2025 "parser.tab.c"
    break;

  case 89: /* L: operando  */
#line 245 "parser.y"
                                     { (yyval.no) = (yyvsp[0].no); }
#line 2031 "parser.tab.c"
    break;

  case 90: /* operando: literal  */
#line 247 "parser.y"
                  { (yyval.no) = (yyvsp[0].no); }
#line 2037 "parser.tab.c"
    break;

  case 91: /* operando: chamada_funcao  */
#line 247 "parser.y"
                                                { (yyval.no) = (yyvsp[0].no); }
#line 2043 "parser.tab.c"
    break;

  case 92: /* operando: identificador_expressao  */
#line 247 "parser.y"
                                                                                       { (yyval.no) = (yyvsp[0].no); }
#line 2049 "parser.tab.c"
    break;

  case 93: /* identificador_expressao: TK_IDENTIFICADOR  */
#line 249 "parser.y"
                                          { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), IDENTIFICADOR); }
#line 2055 "parser.tab.c"
    break;

  case 94: /* identificador_expressao: TK_IDENTIFICADOR '[' lista_expressoes ']'  */
#line 250 "parser.y"
{ (yyval.no) = create_node((yyvsp[-2].valor_lexico), IDENT_EXP); ASTNODE * identLeaf = create_leaf((yyvsp[-3].valor_lexico),IDENTIFICADOR);  add_child(&(yyval.no),&identLeaf); add_child(&(yyval.no),&(yyvsp[-1].no)); deleteValue((yyvsp[0].valor_lexico)); }
#line 2061 "parser.tab.c"
    break;

  case 95: /* lista_expressoes: lista_expressoes '^' expressao  */
#line 255 "parser.y"
                                                 { (yyval.no)=create_node((yyvsp[-1].valor_lexico),LISTA_EXP); add_child(&(yyval.no),&(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); }
#line 2067 "parser.tab.c"
    break;

  case 96: /* lista_expressoes: expressao  */
#line 255 "parser.y"
                                                                                                                                        { (yyval.no) = (yyvsp[0].no); }
#line 2073 "parser.tab.c"
    break;


#line 2077 "parser.tab.c"

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

#line 257 "parser.y"



void yyerror(char const *s){
	printf("%s na linha: %d\n", s,get_line_number());
	
}

