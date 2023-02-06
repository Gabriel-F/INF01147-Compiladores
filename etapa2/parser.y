/*
	Nomes: Anderson Rieger da Luz e Gabriel Fagundes da Fonseca
	Grupo: E
*/

%{
#include <stdio.h>
#define YYERROR_VERBOSE 1

int yylex(void);
void yyerror (char const *s);
extern int get_line_number();
%}

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
%token TK_LIT_INT
%token TK_LIT_FLOAT
%token TK_LIT_FALSE
%token TK_LIT_TRUE
%token TK_LIT_CHAR
%token TK_IDENTIFICADOR
%token TK_ERRO

%%

/* -----------------------------------------------------------------------
	
	3 A Linguagem

-------------------------------------------------------------------------
*/

programa: lista_de_elementos;
programa: ;

lista_de_elementos: lista_de_elementos declaracao_funcao;
lista_de_elementos: lista_de_elementos declaracao_var_global;
lista_de_elementos: declaracao_funcao;
lista_de_elementos: declaracao_var_global;

/* -----------------------------------------------------------------------
	
	3.1 Declarações de Variáveis Globais

-------------------------------------------------------------------------
*/

tipo: TK_PR_INT | TK_PR_FLOAT | TK_PR_BOOL | TK_PR_CHAR;

identificador: TK_IDENTIFICADOR;
lista_dimensional_inteiro: TK_LIT_INT;

lista_dimensional: lista_dimensional_inteiro;
lista_dimensional: lista_dimensional '^' lista_dimensional_inteiro;

var_multidimensional: identificador '[' lista_dimensional ']';

declaracao_var_global: tipo lista_de_identificadores ';';
lista_de_identificadores: identificador;
lista_de_identificadores: var_multidimensional;
lista_de_identificadores: lista_de_identificadores ',' identificador;
lista_de_identificadores: lista_de_identificadores ',' var_multidimensional;

/* -----------------------------------------------------------------------
	
	3.2 Definição de Funções  3.3 Bloco de Comandos

-------------------------------------------------------------------------
*/

declaracao_funcao: cabecalho corpo;
cabecalho: tipo identificador '(' lista_parametros ')';
lista_parametros: parametros_entrada | ;
parametros_entrada: parametros_entrada ',' parametro | parametro;
parametro: tipo identificador;

corpo : bloco_comandos;
bloco_comandos : '{' lista_comandos '}' | '{' '}';
lista_comandos: lista_comandos comando ';' | comando ';' ;

/* -----------------------------------------------------------------------
	
	3.4 Comandos Simples

-------------------------------------------------------------------------
*/

comando: declaracao_var_local | atribuicao | retorno | bloco_comandos | chamada_funcao | controle_fluxo | controle_fluxo_while;

literal: TK_LIT_INT | TK_LIT_CHAR | TK_LIT_FALSE | TK_LIT_TRUE | TK_LIT_FLOAT;

declaracao_var_local: tipo lista_de_identificadores_local;

inic_var_local: TK_OC_LE literal | ; //Possível conflito com expressões ATENÇÃO

identificador_local: identificador inic_var_local ;

lista_de_identificadores_local: lista_de_identificadores_local ',' identificador_local | identificador_local ;


atribuicao: identificador_expressao '=' expressao ;

lista_argumentos: argumentos_entrada | ;
argumentos_entrada: argumentos_entrada ',' argumento | argumento;
argumento: expressao; 

controle_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_comandos | TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_comandos TK_PR_ELSE bloco_comandos;
controle_fluxo_while: TK_PR_WHILE '(' expressao ')' bloco_comandos;

retorno: TK_PR_RETURN expressao;

chamada_funcao: identificador '(' lista_argumentos ')';


/* -----------------------------------------------------------------------
	
	3.5 Expressões

-------------------------------------------------------------------------
*/
/*
expressao: lista_operando | op_unario lista_operando;

lista_operando: lista_operando op_binario operando | operando | lista_operando op_binario op_unario operando;

operando: literal | chamada_funcao | identificador_expressao;

identificador_expressao: identificador | identificador '[' lista_expressoes ']';

lista_expressoes: lista_expressoes '^' expressao | expressao;

op_unario: '-' | '!';

op_binario: '+' | '-' | '*' | '/' | '%' | TK_OC_LE | TK_OC_GE | TK_OC_EQ | TK_OC_NE | TK_OC_AND | TK_OC_OR;
*/

expressao: E;
E: E TK_OC_OR T | T
T: T TK_OC_AND F | F
F: F TK_OC_EQ G | F TK_OC_NE G | G
G: G TK_OC_GE H | G TK_OC_LE H | G '<' H | G '>' H | H;
H: H '+' I | H '-' I | I;
I: I '%' J | I '/' J | I '*' J | J;
J: '-' K | '!' K | L ;
K: '-' K | '!' K | L; // - - - - - - - - 3 
L: '(' E ')'| operando;

operando: literal | chamada_funcao | identificador_expressao;

identificador_expressao: identificador | identificador '[' lista_expressoes ']';

lista_expressoes: lista_expressoes '^' expressao | expressao;

%%

void yyerror(char const *s){
	printf("%s na linha: %d\n", s,get_line_number());
	
}
