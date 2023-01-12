%{
int yylex(void);
void yyerror (char const *s);
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

lista_de_elementos: lista_de_elementos funcao;
lista_de_elementos: lista_de_elementos declaracao_var;
lista_de_elementos: funcao;
lista_de_elementos: declaracao_var;

tipo: TK_PR_INT | TK_PR_FLOAT | TK_PR_BOOL | TK_PR_CHAR;

declaracao_var: tipo lista_de_identificadores;
lista_de_identificadores: TK_IDENTIFICADOR;
lista_de_identificadores: TK_IDENTIFICADOR ':' lista_literais;
lista_de_identificadores: lista_de_identificadores ',' TK_IDENTIFICADOR;

lista_literais: TK_PR_INT;
lista_literais: lista_literais '^' TK_PR_INT;

funcao: cabecalho corpo
cabecalho: tipo TK_IDENTIFICADOR '(' lista_argumentos ')'
lista_argumentos: lista_parametros | ;
lista_parametros: lista_parametros ',' parametro | parametro;
parametro: tipo TK_IDENTIFICADOR

corpo : 'c'
