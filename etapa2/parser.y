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

programa: lista_de_elementos;
programa: ;

lista_de_elementos: lista_de_elementos declaracao_funcao;
lista_de_elementos: lista_de_elementos declaracao_var_global;
lista_de_elementos: declaracao_funcao;
lista_de_elementos: declaracao_var_global;

tipo: TK_PR_INT | TK_PR_FLOAT | TK_PR_BOOL | TK_PR_CHAR;

lista_dimensional: TK_LIT_INT;
lista_dimensional: lista_dimensional '^' TK_LIT_INT;

var_multidimensional: TK_IDENTIFICADOR '[' lista_dimensional ']';

declaracao_var_global: tipo lista_de_identificadores ';';
lista_de_identificadores: TK_IDENTIFICADOR;
lista_de_identificadores: var_multidimensional;
lista_de_identificadores: lista_de_identificadores ',' TK_IDENTIFICADOR;
lista_de_identificadores: lista_de_identificadores ',' var_multidimensional;


declaracao_funcao: cabecalho corpo;
cabecalho: tipo TK_IDENTIFICADOR '(' lista_parametros ')';
lista_parametros: parametros_entrada | ;
parametros_entrada: parametros_entrada ',' parametro | parametro;
parametro: tipo TK_IDENTIFICADOR;


corpo : bloco_comandos;
bloco_comandos : '{' lista_comandos '}' | '{' '}';
lista_comandos: lista_comandos comando ';' | comando ';';

comando: declaracao_var_local | atribuicao | fluxo_controle | retorno | bloco_comandos | chamada_funcao;

literal: TK_LIT_INT | TK_LIT_CHAR | TK_LIT_FALSE | TK_LIT_TRUE | TK_LIT_FLOAT;

declaracao_var_local: tipo lista_de_identificadores_local;
inic_var_local: TK_IDENTIFICADOR '<' '=' literal;
identificador_local: TK_IDENTIFICADOR | inic_var_local ;
lista_de_identificadores_local: lista_de_identificadores_local ',' identificador_local | identificador_local ;
/*

var[a + b ^ c + d] = variavel
var = a;

var = func(a,b);
var = 42
var = a
a = 2;
b = 3;

var = variavel[2^a+b];
var = variavel[abc[2^3] ^ 34];

funcao(a + 3, foo(3));

funcao(a + b, 34);

funcao(var);

a;

TK_IDENTIFICADOR = expressao?

Conforme o enunciado, as expressoes tem operandos E operadores, logo um identficador sozinho não é considerado uma expressão? 
Se sim, então não tem como haver a seuginte chamada de função: foo(var);?



*/
lista_expressoes: '_'; //TO DO
identificador_atribuicao: TK_IDENTIFICADOR | TK_IDENTIFICADOR '[' lista_expressoes ']';

atribuicao: identificador_atribuicao '=' expressao ;

lista_argumentos: argumentos_entrada | ;
argumentos_entrada: argumentos_entrada ',' argumento | argumento;
argumento: literal | TK_IDENTIFICADOR | expressao;

chamada_funcao: TK_IDENTIFICADOR '(' lista_argumentos ')'

retorno: TK_PR_RETURN expressao;

expressao: 'a'; //To do

fluxo_controle: 'b'; //To Do

%%

void yyerror(char const *s){
	printf("%s na linha: %d\n", s,get_line_number());
	
}
