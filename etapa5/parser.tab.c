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
#line 4 "parser.y"



#include <stdlib.h>
#include "ast.h"
#include "stack.h"

extern void *arvore;

int yylex(void);
void yyerror (char const *s);
extern int get_line_number();


extern void *stack;
int currType = 0;

int sizeOfCurrentFrame = 0;

char mainLabel[10];

extern Array arr;


#line 96 "parser.tab.c"

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
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_lista_parametros = 59,          /* lista_parametros  */
  YYSYMBOL_parametros_entrada = 60,        /* parametros_entrada  */
  YYSYMBOL_parametro = 61,                 /* parametro  */
  YYSYMBOL_corpo = 62,                     /* corpo  */
  YYSYMBOL_bloco_comandos = 63,            /* bloco_comandos  */
  YYSYMBOL_lista_comandos = 64,            /* lista_comandos  */
  YYSYMBOL_push_stack = 65,                /* push_stack  */
  YYSYMBOL_comando = 66,                   /* comando  */
  YYSYMBOL_literal = 67,                   /* literal  */
  YYSYMBOL_declaracao_var_local = 68,      /* declaracao_var_local  */
  YYSYMBOL_identificador_local = 69,       /* identificador_local  */
  YYSYMBOL_lista_de_identificadores_local = 70, /* lista_de_identificadores_local  */
  YYSYMBOL_atribuicao = 71,                /* atribuicao  */
  YYSYMBOL_lista_argumentos = 72,          /* lista_argumentos  */
  YYSYMBOL_argumentos_entrada = 73,        /* argumentos_entrada  */
  YYSYMBOL_argumento = 74,                 /* argumento  */
  YYSYMBOL_controle_fluxo = 75,            /* controle_fluxo  */
  YYSYMBOL_controle_fluxo_while = 76,      /* controle_fluxo_while  */
  YYSYMBOL_retorno = 77,                   /* retorno  */
  YYSYMBOL_chamada_funcao = 78,            /* chamada_funcao  */
  YYSYMBOL_expressao = 79,                 /* expressao  */
  YYSYMBOL_E = 80,                         /* E  */
  YYSYMBOL_T = 81,                         /* T  */
  YYSYMBOL_F = 82,                         /* F  */
  YYSYMBOL_G = 83,                         /* G  */
  YYSYMBOL_H = 84,                         /* H  */
  YYSYMBOL_I = 85,                         /* I  */
  YYSYMBOL_J = 86,                         /* J  */
  YYSYMBOL_K = 87,                         /* K  */
  YYSYMBOL_L = 88,                         /* L  */
  YYSYMBOL_operando = 89,                  /* operando  */
  YYSYMBOL_identificador_expressao = 90,   /* identificador_expressao  */
  YYSYMBOL_lista_expressoes = 91           /* lista_expressoes  */
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
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

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
static const yytype_int16 yyrline[] =
{
       0,   127,   127,   128,   131,   136,   137,   138,   151,   152,
     153,   154,   156,   158,   159,   160,   161,   163,   164,   165,
     166,   167,   177,   199,   199,   200,   200,   201,   201,   202,
     204,   206,   206,   207,   212,   227,   229,   230,   231,   232,
     233,   234,   235,   237,   238,   239,   240,   241,   246,   248,
     248,   267,   267,   269,   295,   298,   299,   302,   303,   305,
     318,   331,   339,   345,   365,   366,   371,   373,   378,   380,
     385,   390,   393,   399,   405,   411,   418,   420,   429,   438,
     440,   441,   450,   459,   461,   466,   479,   481,   481,   481,
     483,   483,   485,   485,   485,   487,   501,   507,   507
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
  "cabecalho", "$@1", "lista_parametros", "parametros_entrada",
  "parametro", "corpo", "bloco_comandos", "lista_comandos", "push_stack",
  "comando", "literal", "declaracao_var_local", "identificador_local",
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

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-36)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      80,  -104,  -104,  -104,  -104,     5,  -104,   -11,    80,    80,
     -24,  -104,   -17,  -104,    26,  -104,  -104,     3,  -104,  -104,
      15,   -19,  -104,    17,    10,    19,    34,   -12,  -104,    42,
      43,   -24,     7,  -104,  -104,  -104,  -104,  -104,  -104,    70,
    -104,  -104,    33,    80,    67,  -104,    34,    34,  -104,  -104,
    -104,  -104,  -104,    56,    56,    34,  -104,  -104,  -104,   101,
     105,    72,    11,    75,    41,  -104,  -104,  -104,  -104,    34,
      34,   108,   110,  -104,    85,  -104,  -104,    28,    34,  -104,
      15,   102,    84,    88,  -104,    87,    89,    56,    56,  -104,
    -104,  -104,    -6,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,  -104,    73,    90,    93,
    -104,  -104,    71,    42,  -104,  -104,  -104,  -104,  -104,    80,
     123,  -104,  -104,  -104,  -104,   105,    72,    11,    11,    75,
      75,    75,    75,    41,    41,  -104,  -104,  -104,  -104,    34,
    -104,    34,  -104,  -104,  -104,  -104,   -24,  -104,  -104,   -24,
    -104,   126,  -104,   -24,  -104
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     8,     9,    10,    11,     0,     2,     0,     7,     6,
       0,     1,    18,    19,     0,     5,     4,    35,    22,    30,
       0,     0,    17,     0,     0,     0,     0,    95,    32,     0,
       0,     0,     0,    36,    37,    41,    42,    38,    40,     0,
      13,    14,     0,    26,    20,    21,     0,     0,    43,    47,
      45,    46,    44,     0,     0,     0,    92,    93,    62,    64,
      66,    68,    71,    76,    79,    83,    86,    91,    94,     0,
      55,    49,     0,    52,    48,    31,    39,    34,     0,    16,
       0,     0,     0,    25,    28,     0,     0,     0,     0,    84,
      89,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    54,
      57,    58,     0,     0,    33,    53,    15,    29,    24,     0,
       0,    35,    87,    88,    90,    65,    67,    69,    70,    73,
      72,    74,    75,    77,    78,    82,    81,    80,    96,     0,
      63,     0,    50,    51,    27,    35,     0,    97,    56,     0,
      61,    59,    35,     0,    60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -104,  -104,   104,   -15,  -104,    57,  -104,   113,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,    20,  -104,   -31,    61,  -103,
    -104,    29,  -104,    27,  -104,  -104,  -104,  -104,     1,  -104,
    -104,  -104,   -14,   -25,    91,    50,    51,    21,     2,    18,
       4,   -37,   -42,  -104,   -13,  -104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    72,    41,    42,    13,     8,    14,
       9,    10,    21,    82,    83,    84,    18,    19,    30,    31,
      32,    56,    33,    73,    74,    34,   108,   109,   110,    35,
      36,    37,    57,   111,    59,    60,    61,    62,    63,    64,
      65,    89,    66,    67,    68,   107
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,    58,    29,    38,    39,    11,     1,     2,     3,     4,
      24,    90,    90,    25,    93,    12,    26,    91,   146,    20,
      17,    85,    86,    43,    69,   -23,    97,    98,    81,    27,
      70,     1,     2,     3,     4,    24,    40,   124,    25,    99,
     100,    26,   149,    44,   106,    90,    90,    77,    28,   153,
     122,   123,    46,   115,    27,    48,    49,    50,    51,    52,
      27,    47,    29,    38,    39,    53,    22,    23,    71,    54,
      79,    80,   -35,   103,   104,   105,    55,    48,    49,    50,
      51,    52,    27,     1,     2,     3,     4,    87,    75,    95,
      96,    88,    48,    49,    50,    51,    52,    78,    55,   129,
     130,   131,   132,    20,    81,   101,   102,   135,   136,   137,
     138,   139,    15,    16,   147,   150,   127,   128,   151,   133,
     134,    93,   154,   -12,    94,   112,   113,   118,   117,   119,
     120,   145,   121,   140,   141,   152,    45,   116,   114,   144,
     143,   142,   148,   125,     0,   126,    92
};

static const yytype_int16 yycheck[] =
{
      31,    26,    17,    17,    17,     0,     3,     4,     5,     6,
       7,    53,    54,    10,    20,    26,    13,    54,   121,    36,
      44,    46,    47,    42,    36,    42,    15,    16,    43,    26,
      42,     3,     4,     5,     6,     7,    21,    43,    10,    28,
      29,    13,   145,    26,    69,    87,    88,    40,    45,   152,
      87,    88,    42,    78,    26,    21,    22,    23,    24,    25,
      26,    42,    77,    77,    77,    31,    40,    41,    26,    35,
      37,    38,    44,    32,    33,    34,    42,    21,    22,    23,
      24,    25,    26,     3,     4,     5,     6,    31,    45,    17,
      18,    35,    21,    22,    23,    24,    25,    27,    42,    97,
      98,    99,   100,    36,   119,    30,    31,   103,   104,   105,
      37,    38,     8,     9,   139,   146,    95,    96,   149,   101,
     102,    20,   153,    15,    19,    15,    41,    43,    26,    41,
      43,     8,    43,    43,    41,     9,    23,    80,    77,   119,
     113,   112,   141,    93,    -1,    94,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    47,    48,    49,    54,    56,
      57,     0,    26,    53,    55,    48,    48,    44,    62,    63,
      36,    58,    40,    41,     7,    10,    13,    26,    45,    49,
      64,    65,    66,    68,    71,    75,    76,    77,    78,    90,
      21,    51,    52,    42,    26,    53,    42,    42,    21,    22,
      23,    24,    25,    31,    35,    42,    67,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    88,    89,    90,    36,
      42,    26,    50,    69,    70,    45,    63,    40,    27,    37,
      38,    49,    59,    60,    61,    79,    79,    31,    35,    87,
      88,    87,    80,    20,    19,    17,    18,    15,    16,    28,
      29,    30,    31,    32,    33,    34,    79,    91,    72,    73,
      74,    79,    15,    41,    64,    79,    51,    26,    43,    41,
      43,    43,    87,    87,    43,    81,    82,    83,    83,    84,
      84,    84,    84,    85,    85,    86,    86,    86,    37,    38,
      43,    41,    67,    69,    61,     8,    65,    79,    74,    65,
      63,    63,     9,    65,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    48,    49,    49,
      49,    49,    50,    51,    52,    52,    53,    54,    55,    55,
      55,    55,    56,    58,    57,    59,    59,    60,    60,    61,
      62,    63,    63,    64,    64,    65,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    68,    69,
      69,    70,    70,    71,    72,    72,    73,    73,    74,    75,
      75,    76,    77,    78,    79,    80,    80,    81,    81,    82,
      82,    82,    83,    83,    83,    83,    83,    84,    84,    84,
      85,    85,    85,    85,    86,    86,    86,    87,    87,    87,
      88,    88,    89,    89,    89,    90,    90,    91,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     1,     1,
       3,     3,     2,     0,     6,     1,     0,     3,     1,     2,
       1,     3,     2,     3,     2,     0,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     3,     1,     3,     1,     0,     3,     1,     1,     7,
      10,     6,     2,     4,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     2,     1,     2,     2,     1,
       3,     1,     1,     1,     1,     1,     4,     3,     1
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
#line 127 "parser.y"
                             { arvore = (yyval.no);  pop(stack); char fullCode[10000]; strcpy(fullCode,initializeRegisters((yyval.no)->code)); strcat(fullCode,jumpToMain(mainLabel)); strcat(fullCode,(yyval.no)->code); strcat(fullCode,"halt\n"); strcpy((yyval.no)->code,fullCode);  }
#line 1558 "parser.tab.c"
    break;

  case 3: /* programa: %empty  */
#line 128 "parser.y"
          { (yyval.no) = 0; }
#line 1564 "parser.tab.c"
    break;

  case 4: /* lista_de_elementos: declaracao_funcao lista_de_elementos  */
#line 131 "parser.y"
                                                        { (yyval.no) = (yyvsp[-1].no); add_child(&(yyval.no), &(yyvsp[0].no)); 
      if((yyvsp[0].no) != NULL){
            strcat((yyval.no)->code,(yyvsp[0].no)->code);
      }
}
#line 1574 "parser.tab.c"
    break;

  case 5: /* lista_de_elementos: declaracao_var_global lista_de_elementos  */
#line 136 "parser.y"
                                                             { (yyval.no) = (yyvsp[0].no); }
#line 1580 "parser.tab.c"
    break;

  case 6: /* lista_de_elementos: declaracao_funcao  */
#line 137 "parser.y"
                                      { (yyval.no) = (yyvsp[0].no); }
#line 1586 "parser.tab.c"
    break;

  case 7: /* lista_de_elementos: declaracao_var_global  */
#line 138 "parser.y"
                                          { (yyval.no) = 0;}
#line 1592 "parser.tab.c"
    break;

  case 8: /* tipo: TK_PR_INT  */
#line 151 "parser.y"
                  { (yyval.no) = 0; currType = INT_TYPE;}
#line 1598 "parser.tab.c"
    break;

  case 9: /* tipo: TK_PR_FLOAT  */
#line 152 "parser.y"
                  { (yyval.no) = 0; currType = FLOAT_TYPE;}
#line 1604 "parser.tab.c"
    break;

  case 10: /* tipo: TK_PR_BOOL  */
#line 153 "parser.y"
                  { (yyval.no) = 0; currType = BOOL_TYPE;}
#line 1610 "parser.tab.c"
    break;

  case 11: /* tipo: TK_PR_CHAR  */
#line 154 "parser.y"
                  { (yyval.no) = 0; currType = CHAR_TYPE;}
#line 1616 "parser.tab.c"
    break;

  case 12: /* identificador: TK_IDENTIFICADOR  */
#line 156 "parser.y"
                                 {if(isDecl(stack,*(yyvsp[0].valor_lexico))) { printErrorDecl(*(yyvsp[0].valor_lexico),find(stack,(yyvsp[0].valor_lexico)->input)); exit (ERR_DECLARED);} addItem(stack, createItem(VARIABLE,currType,*(yyvsp[0].valor_lexico))); (yyval.no) = create_leaf((yyvsp[0].valor_lexico),IDENTIFICADOR, currType); }
#line 1622 "parser.tab.c"
    break;

  case 13: /* lista_dimensional_inteiro: TK_LIT_INT  */
#line 158 "parser.y"
                                      { insertArray(&arr,atoi((yyvsp[0].valor_lexico)->input)); }
#line 1628 "parser.tab.c"
    break;

  case 16: /* var_multidimensional: TK_IDENTIFICADOR '[' lista_dimensional ']'  */
#line 161 "parser.y"
                                                                 { if(isDecl(stack,*(yyvsp[-3].valor_lexico))) { printErrorDecl(*(yyvsp[-3].valor_lexico),find(stack,(yyvsp[-3].valor_lexico)->input)); exit(ERR_DECLARED);} addItem(stack, createItemArray(ARRAY,currType,*(yyvsp[-3].valor_lexico),&arr)); if(!checkUse(stack,*(yyvsp[-3].valor_lexico), ARRAY)){ exit(printErrorUse(*(yyvsp[-3].valor_lexico),ARRAY, find(stack,(yyvsp[-3].valor_lexico)->input))); } deleteValue((yyvsp[-3].valor_lexico)); }
#line 1634 "parser.tab.c"
    break;

  case 17: /* declaracao_var_global: tipo lista_de_identificadores ';'  */
#line 163 "parser.y"
                                                         { (yyval.no) = 0;}
#line 1640 "parser.tab.c"
    break;

  case 18: /* lista_de_identificadores: TK_IDENTIFICADOR  */
#line 164 "parser.y"
                                           { if(isDecl(stack,*(yyvsp[0].valor_lexico))) { printErrorDecl(*(yyvsp[0].valor_lexico),find(stack,(yyvsp[0].valor_lexico)->input)); exit (ERR_DECLARED);} addItem(stack, createItem(VARIABLE,currType,*(yyvsp[0].valor_lexico))); deleteValue((yyvsp[0].valor_lexico)); }
#line 1646 "parser.tab.c"
    break;

  case 20: /* lista_de_identificadores: lista_de_identificadores ',' TK_IDENTIFICADOR  */
#line 166 "parser.y"
                                                                        { if(isDecl(stack,*(yyvsp[0].valor_lexico))) { printErrorDecl(*(yyvsp[0].valor_lexico),find(stack,(yyvsp[0].valor_lexico)->input)); exit (ERR_DECLARED);} addItem(stack, createItem(VARIABLE,currType,*(yyvsp[0].valor_lexico))); deleteValue((yyvsp[0].valor_lexico));}
#line 1652 "parser.tab.c"
    break;

  case 22: /* declaracao_funcao: cabecalho corpo  */
#line 177 "parser.y"
                                    { (yyval.no) = create_node((yyvsp[-1].valor_lexico), IDENTIFICADOR); add_child(&(yyval.no), &(yyvsp[0].no));
      //strcpy($$->code,$2->code);   

      //Do the function things
      // ....
      char * rotulo = generateRotulo();
      insertFunctionLabel(stack,(yyvsp[-1].valor_lexico)->input,rotulo);
      updateSizeOfCurrentFrame(stack, (yyvsp[-1].valor_lexico)->input, sizeOfCurrentFrame); //It is important when we create a new Frame
      if(strcmp((yyvsp[-1].valor_lexico)->input,"main") == 0){
            strcpy(mainLabel,rotulo);
      }
      if((yyvsp[0].no) != NULL){
            strcat((yyval.no)->code,rotulo);
            strcat((yyval.no)->code,": \n");
            strcat((yyval.no)->code,genFrame(stack,(yyvsp[-1].valor_lexico)->input));
            
            strcat((yyval.no)->code,(yyvsp[0].no)->code);
            
      }
     
      sizeOfCurrentFrame = 0; 
 }
#line 1679 "parser.tab.c"
    break;

  case 23: /* $@1: %empty  */
#line 199 "parser.y"
                                 { if(isDecl(stack,*(yyvsp[0].valor_lexico))) { printErrorDecl(*(yyvsp[0].valor_lexico),find(stack,(yyvsp[0].valor_lexico)->input)); exit (ERR_DECLARED);} addItem(stack, createItem(FUNCTION,currType,*(yyvsp[0].valor_lexico))); push(stack); }
#line 1685 "parser.tab.c"
    break;

  case 24: /* cabecalho: tipo TK_IDENTIFICADOR $@1 '(' lista_parametros ')'  */
#line 199 "parser.y"
                                                                                                                                                                                                                      { (yyval.valor_lexico) = (yyvsp[-4].valor_lexico); }
#line 1691 "parser.tab.c"
    break;

  case 25: /* lista_parametros: parametros_entrada  */
#line 200 "parser.y"
                                     { (yyval.no) = 0; }
#line 1697 "parser.tab.c"
    break;

  case 26: /* lista_parametros: %empty  */
#line 200 "parser.y"
                                                   { (yyval.no) = 0;}
#line 1703 "parser.tab.c"
    break;

  case 27: /* parametros_entrada: parametros_entrada ',' parametro  */
#line 201 "parser.y"
                                                     { (yyval.no) = 0; }
#line 1709 "parser.tab.c"
    break;

  case 28: /* parametros_entrada: parametro  */
#line 201 "parser.y"
                                                                             { (yyval.no) = 0; }
#line 1715 "parser.tab.c"
    break;

  case 29: /* parametro: tipo TK_IDENTIFICADOR  */
#line 202 "parser.y"
                                 { if(isDecl(stack,*(yyvsp[0].valor_lexico))) { printErrorDecl(*(yyvsp[0].valor_lexico),find(stack,(yyvsp[0].valor_lexico)->input)); exit (ERR_DECLARED);} addItem(stack, createItem(VARIABLE,currType,*(yyvsp[0].valor_lexico))); sizeOfCurrentFrame+=4; (yyval.no) = 0; deleteValue((yyvsp[0].valor_lexico));}
#line 1721 "parser.tab.c"
    break;

  case 30: /* corpo: bloco_comandos  */
#line 204 "parser.y"
                       { (yyval.no) = (yyvsp[0].no); }
#line 1727 "parser.tab.c"
    break;

  case 31: /* bloco_comandos: '{' lista_comandos '}'  */
#line 206 "parser.y"
                                         { (yyval.no) = (yyvsp[-1].no); pop(stack); }
#line 1733 "parser.tab.c"
    break;

  case 32: /* bloco_comandos: '{' '}'  */
#line 206 "parser.y"
                                                                            {  (yyval.no) = 0; pop(stack); }
#line 1739 "parser.tab.c"
    break;

  case 33: /* lista_comandos: comando ';' lista_comandos  */
#line 207 "parser.y"
                                           { if((yyvsp[-2].no) == 0) { (yyval.no) = (yyvsp[0].no); } else { (yyval.no) = (yyvsp[-2].no); add_child(&(yyval.no), &(yyvsp[0].no));
      if((yyval.no) != NULL && (yyvsp[0].no) != NULL){
            strcat((yyval.no)->code,(yyvsp[0].no)->code);
      }

 } }
#line 1750 "parser.tab.c"
    break;

  case 34: /* lista_comandos: comando ';'  */
#line 212 "parser.y"
                    { (yyval.no) = (yyvsp[-1].no); }
#line 1756 "parser.tab.c"
    break;

  case 35: /* push_stack: %empty  */
#line 227 "parser.y"
            { push(stack); }
#line 1762 "parser.tab.c"
    break;

  case 36: /* comando: declaracao_var_local  */
#line 229 "parser.y"
                              { (yyval.no) = (yyvsp[0].no);}
#line 1768 "parser.tab.c"
    break;

  case 37: /* comando: atribuicao  */
#line 230 "parser.y"
                    { (yyval.no) = (yyvsp[0].no);}
#line 1774 "parser.tab.c"
    break;

  case 38: /* comando: retorno  */
#line 231 "parser.y"
                 { (yyval.no) = (yyvsp[0].no);}
#line 1780 "parser.tab.c"
    break;

  case 39: /* comando: push_stack bloco_comandos  */
#line 232 "parser.y"
                                   { (yyval.no) = (yyvsp[0].no);}
#line 1786 "parser.tab.c"
    break;

  case 40: /* comando: chamada_funcao  */
#line 233 "parser.y"
                        { (yyval.no) = (yyvsp[0].no);}
#line 1792 "parser.tab.c"
    break;

  case 41: /* comando: controle_fluxo  */
#line 234 "parser.y"
                        { (yyval.no) = (yyvsp[0].no);}
#line 1798 "parser.tab.c"
    break;

  case 42: /* comando: controle_fluxo_while  */
#line 235 "parser.y"
                              { (yyval.no) = (yyvsp[0].no);}
#line 1804 "parser.tab.c"
    break;

  case 43: /* literal: TK_LIT_INT  */
#line 237 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_INT, INT_TYPE); /*addItem(stack, createItem(LITERAL,INT_TYPE,*$1));*/ (yyval.no)->temp = generateTemp(); char valStr[100]; sprintf(valStr,"%d",(yyvsp[0].valor_lexico)->tokenValue.valInt); strcpy((yyval.no)->code,generateCode("loadI",valStr,(yyval.no)->temp, NULL));  }
#line 1810 "parser.tab.c"
    break;

  case 44: /* literal: TK_LIT_CHAR  */
#line 238 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_CHAR, CHAR_TYPE); /*addItem(stack, createItem(LITERAL,CHAR_TYPE,*$1)); */}
#line 1816 "parser.tab.c"
    break;

  case 45: /* literal: TK_LIT_FALSE  */
#line 239 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_BOOL, BOOL_TYPE); /*addItem(stack, createItem(LITERAL,BOOL_TYPE,*$1));*/}
#line 1822 "parser.tab.c"
    break;

  case 46: /* literal: TK_LIT_TRUE  */
#line 240 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_BOOL, BOOL_TYPE); /*addItem(stack, createItem(LITERAL,BOOL_TYPE,*$1));*/}
#line 1828 "parser.tab.c"
    break;

  case 47: /* literal: TK_LIT_FLOAT  */
#line 241 "parser.y"
                      { (yyval.no) = create_leaf((yyvsp[0].valor_lexico), VAL_LIT_FLOAT, FLOAT_TYPE); /*addItem(stack, createItem(LITERAL,FLOAT_TYPE,*$1));*/}
#line 1834 "parser.tab.c"
    break;

  case 48: /* declaracao_var_local: tipo lista_de_identificadores_local  */
#line 246 "parser.y"
                                                          { (yyval.no) = (yyvsp[0].no); }
#line 1840 "parser.tab.c"
    break;

  case 49: /* identificador_local: TK_IDENTIFICADOR  */
#line 248 "parser.y"
                                      { if(isDecl(stack,*(yyvsp[0].valor_lexico))) { printErrorDecl(*(yyvsp[0].valor_lexico),find(stack,(yyvsp[0].valor_lexico)->input)); exit (ERR_DECLARED); sizeOfCurrentFrame+=4; } addItem(stack, createItem(VARIABLE,currType,*(yyvsp[0].valor_lexico))); (yyval.no)=0; deleteValue((yyvsp[0].valor_lexico)); sizeOfCurrentFrame+=4; }
#line 1846 "parser.tab.c"
    break;

  case 50: /* identificador_local: identificador TK_OC_LE literal  */
#line 248 "parser.y"
                                                                                                                                                                                                                                                                                             { (yyval.no) = create_node((yyvsp[-1].valor_lexico), INIC_VAR); add_child(&(yyval.no),&(yyvsp[-2].no)); add_child(&(yyval.no),&(yyvsp[0].no)); int ret = doCoercion((yyval.no),INIC_VAR); if(ret != 0) exit (ret); 
      sizeOfCurrentFrame+=4; 
//Inicialization
//
      strcpy((yyval.no)->code,(yyvsp[0].no)->code); char valStr[100];
      TNODE * offs = getOffset(stack,(yyvsp[-2].no)->value->input);
      if(offs->isGlobal){
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
            strcat((yyval.no)->code,generateCode("storeAI",strdup((yyvsp[0].no)->temp),"rbss",valStr));
      }else{
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
            strcat((yyval.no)->code,generateCode("storeAI",strdup((yyvsp[0].no)->temp),"rfp",valStr));
      }

      //char valStr[100]; sprintf(valStr,"%d",getOffset(stack,$1->value->input));
      //strcat($$->code,generateCode("storeAI",strdup($3->temp),"rfp",valStr));

}
#line 1869 "parser.tab.c"
    break;

  case 51: /* lista_de_identificadores_local: lista_de_identificadores_local ',' identificador_local  */
#line 267 "parser.y"
                                                                                       { if((yyvsp[0].no) != 0){(yyval.no) = (yyvsp[0].no); add_child(&(yyval.no), &(yyvsp[-2].no));} }
#line 1875 "parser.tab.c"
    break;

  case 52: /* lista_de_identificadores_local: identificador_local  */
#line 267 "parser.y"
                                                                                                                                                            { (yyval.no) = (yyvsp[0].no); }
#line 1881 "parser.tab.c"
    break;

  case 53: /* atribuicao: identificador_expressao '=' expressao  */
#line 269 "parser.y"
                                                  {(yyval.no) = create_node((yyvsp[-1].valor_lexico), ATRIBUICAO); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no),&(yyvsp[0].no)); int ret = doCoercion((yyval.no),ATRIBUICAO); if(ret != 0) exit (ret);
      strcpy((yyval.no)->code,(yyvsp[0].no)->code); char valStr[100];

      TNODE * found = find(stack,(yyvsp[0].no)->value->input);
      

      TNODE * offs = getOffset(stack,(yyvsp[-2].no)->value->input);
      //printf("Funcao: %s , category: %d\n",found->lexical_value.input,found->category);
      if(offs->isGlobal){
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
           // if(found != NULL && found->category == FUNCTION){
           //       strcat($$->code,generateCode("getValueOfFunction","rbss",valStr, NULL));
           // }else
                  strcat((yyval.no)->code,generateCode("storeAI",strdup((yyvsp[0].no)->temp),"rbss",valStr));
      }else{
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
            //if(found != NULL && found->category == FUNCTION)
            //      strcat($$->code,generateCode("getValueOfFunction","rfp",valStr, NULL));
            //else 
                  strcat((yyval.no)->code,generateCode("storeAI",strdup((yyvsp[0].no)->temp),"rfp",valStr));
      }
}
#line 1908 "parser.tab.c"
    break;

  case 54: /* lista_argumentos: argumentos_entrada  */
#line 295 "parser.y"
                                     { (yyval.no) = (yyvsp[0].no); 
      strcat((yyval.no)->code,setArguments((yyval.no)));

}
#line 1917 "parser.tab.c"
    break;

  case 55: /* lista_argumentos: %empty  */
#line 298 "parser.y"
    { (yyval.no) = 0; }
#line 1923 "parser.tab.c"
    break;

  case 56: /* argumentos_entrada: argumentos_entrada ',' argumento  */
#line 299 "parser.y"
                                                     { (yyval.no) = (yyvsp[-2].no); add_child(&(yyval.no), &(yyvsp[0].no)); 
      strcat((yyval.no)->code,(yyvsp[0].no)->code);

}
#line 1932 "parser.tab.c"
    break;

  case 57: /* argumentos_entrada: argumento  */
#line 302 "parser.y"
              { (yyval.no) = (yyvsp[0].no); }
#line 1938 "parser.tab.c"
    break;

  case 58: /* argumento: expressao  */
#line 303 "parser.y"
                     { (yyval.no) = (yyvsp[0].no); }
#line 1944 "parser.tab.c"
    break;

  case 59: /* controle_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN push_stack bloco_comandos  */
#line 305 "parser.y"
                                                                                 { (yyval.no) = create_node((yyvsp[-6].valor_lexico), IF); add_child(&(yyval.no),&(yyvsp[-4].no)); add_child(&(yyval.no),&(yyvsp[0].no)); int ret = doCoercion((yyval.no),IF); if(ret != 0) exit (ret);  
      //True = any value different than 0
      //False = 0
      //Should stay even when $7 is Null because can have side effects
      strcpy((yyval.no)->code,(yyvsp[-4].no)->code);
      if((yyvsp[0].no) != NULL){
            strcat((yyval.no)->code,generateCode("if",(yyvsp[-4].no)->temp, (yyvsp[0].no)->code, NULL)); //Pass expression value and the code of command block
      }
            //strcat($$->code,"\n");
      
      


}
#line 1963 "parser.tab.c"
    break;

  case 60: /* controle_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN push_stack bloco_comandos TK_PR_ELSE push_stack bloco_comandos  */
#line 318 "parser.y"
                                                                                                         { (yyval.no) = create_node((yyvsp[-9].valor_lexico), IF_ELSE); add_child(&(yyval.no),&(yyvsp[-7].no)); add_child(&(yyval.no),&(yyvsp[-3].no)); add_child(&(yyval.no),&(yyvsp[0].no)); int ret = doCoercion((yyval.no),IF_ELSE); if(ret != 0) exit (ret);
      
      strcpy((yyval.no)->code,(yyvsp[-7].no)->code);
      if((yyvsp[-3].no) != NULL && (yyvsp[0].no) != NULL){
            strcat((yyval.no)->code,generateCode("if_else",(yyvsp[-7].no)->temp, (yyvsp[-3].no)->code, (yyvsp[0].no)->code)); //Pass expression value and the code of command block
      }else if((yyvsp[-3].no) == NULL){
            strcat((yyval.no)->code,generateCode("if_else",(yyvsp[-7].no)->temp, NULL, (yyvsp[0].no)->code)); //Pass expression value and the code of command block
      }else if((yyvsp[0].no) == NULL){
            strcat((yyval.no)->code,generateCode("if_else",(yyvsp[-7].no)->temp, (yyvsp[-3].no)->code, NULL)); //Pass expression value and the code of command block
      }

 }
#line 1980 "parser.tab.c"
    break;

  case 61: /* controle_fluxo_while: TK_PR_WHILE '(' expressao ')' push_stack bloco_comandos  */
#line 331 "parser.y"
                                                                              { (yyval.no) = create_node((yyvsp[-5].valor_lexico), WHILE); add_child(&(yyval.no), &(yyvsp[-3].no)); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),WHILE); if(ret != 0) exit (ret); 
      strcpy((yyval.no)->code,(yyvsp[-3].no)->code);
      if((yyvsp[0].no) != NULL){
            strcat((yyval.no)->code,generateCode("while",(yyvsp[-3].no)->temp, (yyvsp[0].no)->code, (yyvsp[-3].no)->code)); //Pass expression value and the code of command block
      }

}
#line 1992 "parser.tab.c"
    break;

  case 62: /* retorno: TK_PR_RETURN expressao  */
#line 339 "parser.y"
                                { (yyval.no) = create_node( (yyvsp[-1].valor_lexico), RETURN); add_child(&(yyval.no),&(yyvsp[0].no)); int ret = doCoercion((yyval.no),UN_OP); if(ret != 0) exit (ret); 
      strcpy((yyval.no)->code,(yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("return",(yyvsp[0].no)->temp, NULL, NULL));
      strcat((yyval.no)->code,genEpilogue());
}
#line 2002 "parser.tab.c"
    break;

  case 63: /* chamada_funcao: TK_IDENTIFICADOR '(' lista_argumentos ')'  */
#line 345 "parser.y"
                                                          {if(isUndecl(stack,*(yyvsp[-3].valor_lexico))) { printErrorUndecl(*(yyvsp[-3].valor_lexico)); exit (ERR_UNDECLARED); } if(!checkUse(stack,*(yyvsp[-3].valor_lexico), FUNCTION)){ exit ( printErrorUse(*(yyvsp[-3].valor_lexico),FUNCTION, find(stack,(yyvsp[-3].valor_lexico)->input))); } (yyval.no) = create_node((yyvsp[-3].valor_lexico), CHAMADA_FUNC); add_child(&(yyval.no), &(yyvsp[-1].no)); int ret = doCoercionWithType((yyval.no),CHAMADA_FUNC,getType(stack,*(yyvsp[-3].valor_lexico))); if(ret != 0) exit (ret);

      char * label = getFunctionLabel(stack,(yyvsp[-3].valor_lexico)->input);
      //printf("go to label: %s",label);
      char *functionToBeCalled = (yyvsp[-3].valor_lexico)->input;
      //printf("prologue: %s\n",getPrologue(stack, functionToBeCalled));
      strcat((yyval.no)->code,(yyvsp[-1].no)->code);
      strcat((yyval.no)->code,getPrologue(stack, functionToBeCalled));
      (yyval.no)->temp = generateTemp();
      strcat((yyval.no)->code,generateCode("getValueOfFunction",(yyval.no)->temp,NULL, NULL));

 }
#line 2019 "parser.tab.c"
    break;

  case 64: /* expressao: E  */
#line 365 "parser.y"
             { (yyval.no) = (yyvsp[0].no);}
#line 2025 "parser.tab.c"
    break;

  case 65: /* E: E TK_OC_OR T  */
#line 366 "parser.y"
                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_OR); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); 
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code, (yyvsp[-2].no)->code);
      strcat((yyval.no)->code, (yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("or",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp)); // will generate tempOpaca inside generateCode
}
#line 2036 "parser.tab.c"
    break;

  case 66: /* E: T  */
#line 371 "parser.y"
       { (yyval.no) = (yyvsp[0].no); }
#line 2042 "parser.tab.c"
    break;

  case 67: /* T: T TK_OC_AND F  */
#line 373 "parser.y"
                 { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_AND); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); 
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code, (yyvsp[-2].no)->code);
      strcat((yyval.no)->code, (yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("and",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp)); // will generate tempOpaca inside generateCode
}
#line 2053 "parser.tab.c"
    break;

  case 68: /* T: F  */
#line 378 "parser.y"
      { (yyval.no) = (yyvsp[0].no); }
#line 2059 "parser.tab.c"
    break;

  case 69: /* F: F TK_OC_EQ G  */
#line 380 "parser.y"
                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_EQ); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); 
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code, (yyvsp[-2].no)->code);
      strcat((yyval.no)->code, (yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("cmp_EQ",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp)); // will generate tempOpaca inside generateCode
}
#line 2070 "parser.tab.c"
    break;

  case 70: /* F: F TK_OC_NE G  */
#line 385 "parser.y"
                  { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_NE); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); 
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code, (yyvsp[-2].no)->code);
      strcat((yyval.no)->code, (yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("cmp_NE",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp)); // will generate tempOpaca inside generateCode
}
#line 2081 "parser.tab.c"
    break;

  case 71: /* F: G  */
#line 390 "parser.y"
      { (yyval.no) = (yyvsp[0].no); }
#line 2087 "parser.tab.c"
    break;

  case 72: /* G: G TK_OC_GE H  */
#line 393 "parser.y"
                { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_GE); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no),&(yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); 
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code, (yyvsp[-2].no)->code);
      strcat((yyval.no)->code, (yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("cmp_GE",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp)); // will generate tempOpaca inside generateCode

}
#line 2099 "parser.tab.c"
    break;

  case 73: /* G: G TK_OC_LE H  */
#line 399 "parser.y"
                 { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_LE); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); 
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code, (yyvsp[-2].no)->code);
      strcat((yyval.no)->code, (yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("cmp_LE",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp)); // will generate tempOpaca inside generateCode

}
#line 2111 "parser.tab.c"
    break;

  case 74: /* G: G '<' H  */
#line 405 "parser.y"
            { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_LT); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); 
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code, (yyvsp[-2].no)->code);
      strcat((yyval.no)->code, (yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("cmp_LT",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp)); // will generate tempOpaca inside generateCode

}
#line 2123 "parser.tab.c"
    break;

  case 75: /* G: G '>' H  */
#line 411 "parser.y"
             { (yyval.no) = create_node((yyvsp[-1].valor_lexico), EXP_GT); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); 
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code, (yyvsp[-2].no)->code);
      strcat((yyval.no)->code, (yyvsp[0].no)->code);
      printf("%s\n", (yyval.no)->code);
      strcat((yyval.no)->code,generateCode("cmp_GT",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp)); // will generate tempOpaca inside generateCode

}
#line 2136 "parser.tab.c"
    break;

  case 76: /* G: H  */
#line 418 "parser.y"
      { (yyval.no) = (yyvsp[0].no); }
#line 2142 "parser.tab.c"
    break;

  case 77: /* H: H '+' I  */
#line 420 "parser.y"
           { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_PLUS); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); 

      //BIN_PLUS
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code,(yyvsp[-2].no)->code);
      strcat((yyval.no)->code,(yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("add",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp));

}
#line 2156 "parser.tab.c"
    break;

  case 78: /* H: H '-' I  */
#line 429 "parser.y"
          { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_MINUS); add_child(&(yyval.no), &(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret);

      //BIN_MINUS
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code,(yyvsp[-2].no)->code);
      strcat((yyval.no)->code,(yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("sub",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp));

}
#line 2170 "parser.tab.c"
    break;

  case 79: /* H: I  */
#line 438 "parser.y"
    { (yyval.no) = (yyvsp[0].no); }
#line 2176 "parser.tab.c"
    break;

  case 80: /* I: I '%' J  */
#line 440 "parser.y"
           { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_PERCENT); add_child(& (yyval.no), & (yyvsp[-2].no)); add_child(& (yyval.no), & (yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); }
#line 2182 "parser.tab.c"
    break;

  case 81: /* I: I '/' J  */
#line 441 "parser.y"
          { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_DIV); add_child(& (yyval.no), & (yyvsp[-2].no)); add_child(& (yyval.no), & (yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); 

      //BIN_DIV
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code,(yyvsp[-2].no)->code);
      strcat((yyval.no)->code,(yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("div",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp));

}
#line 2196 "parser.tab.c"
    break;

  case 82: /* I: I '*' J  */
#line 450 "parser.y"
          { (yyval.no) = create_node((yyvsp[-1].valor_lexico), BIN_MULT); add_child(& (yyval.no), & (yyvsp[-2].no)); add_child(& (yyval.no), & (yyvsp[0].no)); int ret = doCoercion((yyval.no),BIN_OP); if(ret != 0) exit (ret); 

      //BIN_MULT
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code,(yyvsp[-2].no)->code);
      strcat((yyval.no)->code,(yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("mult",(yyvsp[-2].no)->temp,(yyvsp[0].no)->temp,(yyval.no)->temp));

}
#line 2210 "parser.tab.c"
    break;

  case 83: /* I: J  */
#line 459 "parser.y"
    { (yyval.no) = (yyvsp[0].no); }
#line 2216 "parser.tab.c"
    break;

  case 84: /* J: '-' K  */
#line 461 "parser.y"
         { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_MINUS); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),UN_OP); if(ret != 0) exit (ret); 
      (yyval.no)->temp = generateTemp();
      strcpy((yyval.no)->code,(yyvsp[0].no)->code);
      strcat((yyval.no)->code,generateCode("neg",(yyvsp[0].no)->temp,(yyval.no)->temp,NULL));

}
#line 2227 "parser.tab.c"
    break;

  case 85: /* J: '!' K  */
#line 466 "parser.y"
          { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_NEG); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),UN_OP); if(ret != 0) exit (ret); 

      //Fazer depois
      //cpm_eq K 0 => tempOpaca
      //cbr tempOpaca -> labelEqual0, labelEqual1;
      //labelEqual0: 
      //    loadI 0 => temp
      //    jumpI -> labelDepois
      //labelEqual1:
      //    loadI 0 => temp
      //labelDepois:
      //    nop

}
#line 2246 "parser.tab.c"
    break;

  case 86: /* J: L  */
#line 479 "parser.y"
      { (yyval.no) = (yyvsp[0].no); }
#line 2252 "parser.tab.c"
    break;

  case 87: /* K: '-' K  */
#line 481 "parser.y"
         { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_MINUS); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),UN_OP); if(ret != 0) exit (ret); }
#line 2258 "parser.tab.c"
    break;

  case 88: /* K: '!' K  */
#line 481 "parser.y"
                                                                                                                                   { (yyval.no) = create_node((yyvsp[-1].valor_lexico), UN_NEG); add_child(&(yyval.no), &(yyvsp[0].no)); int ret = doCoercion((yyval.no),UN_OP); if(ret != 0) exit (ret); }
#line 2264 "parser.tab.c"
    break;

  case 89: /* K: L  */
#line 481 "parser.y"
                                                                                                                                                                                                                                                       { (yyval.no) = (yyvsp[0].no); }
#line 2270 "parser.tab.c"
    break;

  case 90: /* L: '(' E ')'  */
#line 483 "parser.y"
             { (yyval.no) = (yyvsp[-1].no); }
#line 2276 "parser.tab.c"
    break;

  case 91: /* L: operando  */
#line 483 "parser.y"
                                     { (yyval.no) = (yyvsp[0].no); }
#line 2282 "parser.tab.c"
    break;

  case 92: /* operando: literal  */
#line 485 "parser.y"
                  { (yyval.no) = (yyvsp[0].no); }
#line 2288 "parser.tab.c"
    break;

  case 93: /* operando: chamada_funcao  */
#line 485 "parser.y"
                                                { (yyval.no) = (yyvsp[0].no); }
#line 2294 "parser.tab.c"
    break;

  case 94: /* operando: identificador_expressao  */
#line 485 "parser.y"
                                                                                       { (yyval.no) = (yyvsp[0].no); }
#line 2300 "parser.tab.c"
    break;

  case 95: /* identificador_expressao: TK_IDENTIFICADOR  */
#line 487 "parser.y"
                                          { if(isUndecl(stack,*(yyvsp[0].valor_lexico))) { printErrorUndecl(*(yyvsp[0].valor_lexico)); exit (ERR_UNDECLARED); } if(!checkUse(stack,*(yyvsp[0].valor_lexico), VARIABLE)){ exit (printErrorUse(*(yyvsp[0].valor_lexico),VARIABLE, find(stack,(yyvsp[0].valor_lexico)->input))); } (yyval.no) = create_leaf((yyvsp[0].valor_lexico), IDENTIFICADOR, getType(stack,*(yyvsp[0].valor_lexico))); 

      (yyval.no)->temp = generateTemp();
      char valStr[100];
      TNODE * offs = getOffset(stack,(yyvsp[0].valor_lexico)->input);
      if(offs->isGlobal){
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
            strcat((yyval.no)->code,generateCode("loadAI","rbss", valStr,(yyval.no)->temp));
      }else{
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
            strcat((yyval.no)->code,generateCode("loadAI","rfp", valStr,(yyval.no)->temp));
      }
      

}
#line 2320 "parser.tab.c"
    break;

  case 96: /* identificador_expressao: TK_IDENTIFICADOR '[' lista_expressoes ']'  */
#line 502 "parser.y"
{  if(isUndecl(stack,*(yyvsp[-3].valor_lexico))) { printErrorUndecl(*(yyvsp[-3].valor_lexico)); exit (ERR_UNDECLARED); } if(!checkUse(stack,*(yyvsp[-3].valor_lexico), ARRAY)){ exit( printErrorUse(*(yyvsp[-3].valor_lexico),ARRAY, find(stack,(yyvsp[-3].valor_lexico)->input))) ;} (yyval.no) = create_node((yyvsp[-2].valor_lexico), IDENT_EXP); ASTNODE * identLeaf = create_leaf((yyvsp[-3].valor_lexico),IDENTIFICADOR, getType(stack,*(yyvsp[-3].valor_lexico)));  add_child(&(yyval.no),&identLeaf); add_child(&(yyval.no),&(yyvsp[-1].no)); doCoercion((yyval.no), UN_OP); deleteValue((yyvsp[0].valor_lexico)); }
#line 2326 "parser.tab.c"
    break;

  case 97: /* lista_expressoes: lista_expressoes '^' expressao  */
#line 507 "parser.y"
                                                 { (yyval.no)=create_node((yyvsp[-1].valor_lexico),LISTA_EXP); add_child(&(yyval.no),&(yyvsp[-2].no)); add_child(&(yyval.no), &(yyvsp[0].no));}
#line 2332 "parser.tab.c"
    break;

  case 98: /* lista_expressoes: expressao  */
#line 507 "parser.y"
                                                                                                                                       { (yyval.no) = (yyvsp[0].no); }
#line 2338 "parser.tab.c"
    break;


#line 2342 "parser.tab.c"

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

#line 509 "parser.y"



void yyerror(char const *s){
	printf("%s na linha: %d\n", s,get_line_number());
	
}
