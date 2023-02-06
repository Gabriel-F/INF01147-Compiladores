%define parse.error verbose
%{

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

%}


%union{
	ASTNODE *no;
	VALOR_T *valor_lexico;
}

%type<no> var_multidimensional; //Cabeça
%type<no> programa;
%type<no> lista_de_elementos;
%type<no> tipo;
%type<no> identificador;
%type<no> lista_dimensional;
%type<no> lista_dimensional_inteiro;
%type<no> declaracao_var_global;
%type<no> lista_de_identificadores;
%type<no> declaracao_funcao;
%type<no> cabecalho;
%type<no> lista_parametros;
%type<no> parametros_entrada;
%type<no> parametro;
%type<no> comando;
%type<no> literal;
%type<no> lista_comandos;
%type<no> declaracao_var_local;
%type<no> inic_var_local;
%type<no> identificador_local;
%type<no> lista_de_identificadores_local;
%type<no> atribuicao;
%type<no> corpo;
%type<no> lista_argumentos;
%type<no> argumentos_entrada;
%type<no> argumento;
%type<no> controle_fluxo;
%type<no> controle_fluxo_while;
%type<no> retorno;
%type<no> chamada_funcao;
%type<no> expressao;
%type<no> bloco_comandos;
%type<no> E;
%type<no> T;
%type<no> F;
%type<no> G;
%type<no> H;
%type<no> I;
%type<no> J;
%type<no> K;
%type<no> L;
%type<no> operando;
%type<no> identificador_expressao;
%type<no> lista_expressoes;


%token TK_PR_INT
%token TK_PR_FLOAT
%token TK_PR_BOOL
%token TK_PR_CHAR
%token TK_PR_IF
%token TK_PR_THEN
%token TK_PR_ELSE
%token TK_PR_WHILE
%token TK_PR_INPUT
%token TK_PR_OUTPUT
%token TK_PR_RETURN
%token TK_PR_FOR
%token TK_OC_LE
%token TK_OC_GE
%token TK_OC_EQ
%token TK_OC_NE
%token TK_OC_AND
%token TK_OC_OR
%token <valor_lexico> TK_LIT_INT
%token <valor_lexico> TK_LIT_FLOAT
%token <valor_lexico> TK_LIT_FALSE
%token <valor_lexico> TK_LIT_TRUE
%token <valor_lexico> TK_LIT_CHAR
%token <valor_lexico> TK_IDENTIFICADOR
%token TK_ERRO

%%

/* -----------------------------------------------------------------------
	
	3 A Linguagem

-------------------------------------------------------------------------
*/

programa: lista_de_elementos { arvore = $$; }; // REVISAR (ACHO Q TA CERTO)
programa: { $$ = 0; };

lista_de_elementos: lista_de_elementos declaracao_funcao { $$ = create_node($1, $2, 0, LIST_ELEM);};
lista_de_elementos: lista_de_elementos declaracao_var_global { $$ = create_node($1, $2, 0, LIST_ELEM);};
lista_de_elementos: declaracao_funcao { $$ =$1 ;};
lista_de_elementos: declaracao_var_global { $$ =$1 ;};

/* -----------------------------------------------------------------------
	
	3.1 Declarações de Variáveis Globais

-------------------------------------------------------------------------
*/

// void create_node(filho1, filho2, filho3, nome_do_node);
// create_leaf(valor, nome_da_folha)


tipo: TK_PR_INT { $$ = create_leaf(0, TIPO_INT); }; |  //REVISAR PERGUNTAR PARA O SOR
      TK_PR_FLOAT { $$ = create_leaf(0, TIPO_FLOAT); }; | 
      TK_PR_BOOL { $$ = create_leaf(0, TIPO_BOOL); }; | 
      TK_PR_CHAR { $$ = create_leaf(0, TIPO_CHAR); };

identificador : TK_IDENTIFICADOR { $$ = create_leaf($1, VAL_IDENTIFICADOR); }; 

lista_dimensional_inteiro: TK_LIT_INT { $$ = create_leaf($1, LITERAL_INT);};
lista_dimensional: lista_dimensional_inteiro { $$ =$1 ;};
lista_dimensional: lista_dimensional '^' lista_dimensional_inteiro { $$ = create_node($1, $3, 0, LISTA_DIM);};
var_multidimensional: identificador '[' lista_dimensional ']' { $$ = create_node($1, $3, 0, VAR_MULT);};

declaracao_var_global: tipo lista_de_identificadores ';' { $$ = $2; };//{ $$ = create_node($2, 0, 0, DEC_VAR_GLOBAL);};
lista_de_identificadores: identificador { $$ = $1 ;};
lista_de_identificadores: var_multidimensional { $$ = $1 ;};
lista_de_identificadores: lista_de_identificadores ',' identificador { $$ = create_node($1, $3, 0, LISTA_IDENTIFICADOR);};
lista_de_identificadores: lista_de_identificadores ',' var_multidimensional { $$ = create_node($1, $3, 0, LISTA_IDENTIFICADOR);};

/* -----------------------------------------------------------------------
	
	3.2 Definição de Funções  3.3 Bloco de Comandos

-------------------------------------------------------------------------
*/

declaracao_funcao: cabecalho corpo  { $$ = create_node($1, $2, 0, DEC_FUNC);};
cabecalho: tipo identificador '(' lista_parametros ')' { $$ = create_node($2, $4, 0, CABECALHO);};
lista_parametros: parametros_entrada { $$ = $1;} | {  $$ = 0;};
parametros_entrada: parametros_entrada ',' parametro  { $$ = create_node($1, $3, 0, PARAMETROS_ENTRADA);}; | parametro { $$ = $1 ;};
parametro: tipo identificador  { $$ = create_node($2, 0, 0, PARAMETRO);};

corpo : bloco_comandos { $$ = $1; }; //REVISAR
bloco_comandos : '{' lista_comandos '}'  { $$ = $2;} | '{' '}' {  $$ = 0;};
lista_comandos: lista_comandos comando ';'  { $$ = create_node($1, $2, 0, LISTA_COMANDOS); } | comando ';'  { $$ = $1;};

/* -----------------------------------------------------------------------
	
	3.4 Comandos Simples

-------------------------------------------------------------------------
*/

comando: declaracao_var_local { $$ = $1;}| 
         atribuicao { $$ = $1;}| 
         retorno { $$ = $1;}| 
         bloco_comandos { $$ = $1;}| 
         chamada_funcao { $$ = $1;}| 
         controle_fluxo { $$ = $1;}| 
         controle_fluxo_while { $$ = $1;};

literal: TK_LIT_INT   { $$ = create_leaf($1, VAL_LIT_INT); }| //REVISAR
         TK_LIT_CHAR  { $$ = create_leaf($1, VAL_LIT_CHAR); }| 
         TK_LIT_FALSE { $$ = create_leaf($1, VAL_LIT_BOOL); }| 
         TK_LIT_TRUE  { $$ = create_leaf($1, VAL_LIT_BOOL); }| 
         TK_LIT_FLOAT { $$ = create_leaf($1, VAL_LIT_FLOAT); };

declaracao_var_local: tipo lista_de_identificadores_local { $$ = create_node($2, 0, 0, DEC_VAR_LOCAL); };
inic_var_local: TK_OC_LE literal { $$ = create_node($2, 0, 0, INIC_VAR); } | { $$ = 0; }; 

identificador_local: identificador inic_var_local { $$ = create_node($1, $2, 0, IDENT_LOCAL);} ;
lista_de_identificadores_local: lista_de_identificadores_local ',' identificador_local { $$ = create_node($1, $3, 0, LISTA_IDENT_LOCAL); } | identificador_local { $$ = $1; };

atribuicao: identificador_expressao '=' expressao { $$ = create_node($1, $3, 0, ATRIBUICAO);} ;

lista_argumentos: argumentos_entrada { $$ = create_node( $1, 0, 0, LISTA_ARG);} | { $$ = 0; };
argumentos_entrada: argumentos_entrada ',' argumento { $$ = create_node($1, $3, 0, ARG_ENTRADA);} | argumento { $$ = $1;};
argumento: expressao { $$ = $1;};

controle_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_comandos  { $$ = create_node($3, $6, 0, IF);} | 
                TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_comandos TK_PR_ELSE bloco_comandos { $$ = create_node($3, $6, $8, IF_ELSE);}; // REVISAR

controle_fluxo_while: TK_PR_WHILE '(' expressao ')' bloco_comandos { $$ = create_node($3, $5, 0, WHILE);} ;

retorno: TK_PR_RETURN expressao { $$ = create_node( $2, 0, 0, RETURN);} ;

chamada_funcao: identificador '(' lista_argumentos ')' { $$ = create_node( $1, $3, 0, CHAMADA_FUNC);} ;


/* -----------------------------------------------------------------------
	
	3.5 Expressões

-------------------------------------------------------------------------
*/

expressao: E;
E: E TK_OC_OR T { $$ = create_node( $1, $3, 0, EXP_OR); }  | T { $$ = $1; };

T: T TK_OC_AND F { $$ = create_node( $1, $3, 0, EXP_AND); } | F { $$ = $1; };

F: F TK_OC_EQ G { $$ = create_node( $1, $3, 0, EXP_EQ); } | F TK_OC_NE G  { $$ = create_node( $1, $3, 0, EXP_NE);} | G { $$ = $1; };

G: G TK_OC_GE H { $$ = create_node( $1, $3, 0, EXP_GE); } | 
   G TK_OC_LE H { $$ = create_node( $1, $3, 0, EXP_LE); } |
   G '<' H { $$ = create_node( $1, $3, 0, EXP_LT); }  |
   G '>' H { $$ = create_node( $1, $3, 0, EXP_GT); } |
   H { $$ = $1; };

H: H '+' I { $$ = create_node( $1, $3, 0, BIN_PLUS); }  | H '-' I { $$ = create_node( $1, $3, 0, BIN_MINUS); }  | I { $$ = $1; };

I: I '%' J { $$ = create_node( $1, $3, 0, BIN_PERCENT); } | I '/' J { $$ = create_node( $1, $3, 0, BIN_DIV); } | I '*' J { $$ = create_node( $1, $3, 0, BIN_MULT); }| J { $$ = $1; };

J: '-' K { $$ = create_node( $2, 0, 0, UN_MINUS); } | '!' K { $$ = create_node( $2, 0, 0, UN_NEG); } | L { $$ = $1; };

K: '-' K { $$ = create_node( $2, 0, 0, UN_MINUS); } | '!' K { $$ = create_node( $2, 0, 0, UN_NEG); } | L { $$ = $1; };

L: '(' E ')' { $$ = $2; } | operando { $$ = $1; };

operando: literal { $$ = $1; } | chamada_funcao { $$ = $1; } | identificador_expressao { $$ = $1; };

identificador_expressao: identificador { $$ = $1; } | identificador '[' lista_expressoes ']' { $$ = create_node( $1, $3, 0, IDENT_EXP); };

lista_expressoes: lista_expressoes '^' expressao { $$ = create_node( $1, $3, 0, LISTA_EXP); } | expressao { $$ = $1; };

%%

void yyerror(char const *s){
	printf("%s na linha: %d\n", s,get_line_number());
	
}

