//DUAS PERGUNTAS SEM RESPOSTAS CONCRETAS: O QUE É A VIDA? - ABUJAMRA. E POR QUE A GENTE FEZ ISSO EM C?  

%define parse.error verbose
%{


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

%}

%union{
	ASTNODE *no;
	VALOR_T *valor_lexico;
}

%type<no> programa;
%type<no> lista_de_elementos;
%type<no> tipo;
%type<no> declaracao_funcao;
%type<no> lista_parametros;
%type<no> parametros_entrada;
%type<no> parametro;
%type<no> comando;
%type<no> literal;
%type<no> lista_comandos;
%type<no> declaracao_var_local;
%type<no> identificador_local;
%type<no> declaracao_var_global;
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
%type<no> identificador;
%type<no> push_stack;


%token <valor_lexico>TK_PR_INT
%token <valor_lexico>TK_PR_FLOAT
%token <valor_lexico>TK_PR_BOOL
%token <valor_lexico>TK_PR_CHAR
%token <valor_lexico>TK_PR_IF
%token <valor_lexico>TK_PR_THEN
%token <valor_lexico>TK_PR_ELSE
%token <valor_lexico>TK_PR_WHILE
%token <valor_lexico>TK_PR_INPUT
%token <valor_lexico>TK_PR_OUTPUT
%token <valor_lexico>TK_PR_RETURN
%token <valor_lexico>TK_PR_FOR
%token <valor_lexico>TK_OC_LE
%token <valor_lexico>TK_OC_GE
%token <valor_lexico>TK_OC_EQ
%token <valor_lexico>TK_OC_NE
%token <valor_lexico>TK_OC_AND
%token <valor_lexico>TK_OC_OR
%token <valor_lexico> TK_LIT_INT
%token <valor_lexico> TK_LIT_FLOAT
%token <valor_lexico> TK_LIT_FALSE
%token <valor_lexico> TK_LIT_TRUE
%token <valor_lexico> TK_LIT_CHAR
%token <valor_lexico> TK_IDENTIFICADOR
%token <valor_lexico> '='
%token <valor_lexico> '<'
%token <valor_lexico> '>'
%token <valor_lexico> '+'
%token <valor_lexico> '-'
%token <valor_lexico> '*'
%token <valor_lexico> '/'
%token <valor_lexico> '%'
%token <valor_lexico> '!'
%token <valor_lexico> '['
%token <valor_lexico> ']'
%token <valor_lexico> '^'
%type <valor_lexico> cabecalho;
%token TK_ERRO;



%%

/* -----------------------------------------------------------------------
	
	3 A Linguagem

-------------------------------------------------------------------------
*/



programa: lista_de_elementos { arvore = $$;  pop(stack); char fullCode[2000]; strcpy(fullCode,initializeRegisters($$->code)); strcat(fullCode,jumpToMain(mainLabel)); strcat(fullCode,$$->code); strcat(fullCode,"halt\n"); strcpy($$->code,fullCode);  }; // REVISAR
programa: { $$ = 0; };

//lista_de_elementos: lista_de_elementos declaracao_funcao { if($1 == 0){ $$ = $2; } else { $$ = $1; add_child(&$$, &$2);} }; //I think it's impossible to do this with left recursion
lista_de_elementos: declaracao_funcao lista_de_elementos{ $$ = $1; add_child(&$$, &$2); 
      if($2 != NULL){
            strcat($$->code,$2->code);
      }
}; //I think it's impossible to do this with left recursion
lista_de_elementos: declaracao_var_global lista_de_elementos { $$ = $2; };
lista_de_elementos: declaracao_funcao { $$ = $1; };
lista_de_elementos: declaracao_var_global { $$ = 0;}; //Nao vai na AST //REVISAR

/* -----------------------------------------------------------------------
	
	3.1 Declarações de Variáveis Globais

-------------------------------------------------------------------------
*/

// void create_node(filho1, filho2, filho3, nome_do_node);
// create_leaf(valor, nome_da_folha)


tipo: TK_PR_INT   { $$ = 0; currType = INT_TYPE;}|  //APARENTEMENTE UMA GAMBIARRA
      TK_PR_FLOAT { $$ = 0; currType = FLOAT_TYPE;}| 
      TK_PR_BOOL  { $$ = 0; currType = BOOL_TYPE;}| 
      TK_PR_CHAR  { $$ = 0; currType = CHAR_TYPE;};

identificador : TK_IDENTIFICADOR {if(isDecl(stack,*$1)) { printErrorDecl(*$1,find(stack,$1->input)); exit (ERR_DECLARED);} addItem(stack, createItem(VARIABLE,currType,*$1)); $$ = create_leaf($1,IDENTIFICADOR, currType); }; //REVISAR  FOLHA - VALUE

lista_dimensional_inteiro: TK_LIT_INT { insertArray(&arr,atoi($1->input)); };
lista_dimensional: lista_dimensional_inteiro ;
lista_dimensional: lista_dimensional '^' lista_dimensional_inteiro ;
var_multidimensional: TK_IDENTIFICADOR '[' lista_dimensional ']' { if(isDecl(stack,*$1)) { printErrorDecl(*$1,find(stack,$1->input)); exit(ERR_DECLARED);} addItem(stack, createItemArray(ARRAY,currType,*$1,&arr)); if(!checkUse(stack,*$1, ARRAY)){ exit(printErrorUse(*$1,ARRAY, find(stack,$1->input))); } deleteValue($1); };

declaracao_var_global: tipo lista_de_identificadores ';' { $$ = 0;};//{ $$ = $2; };//{ $$ = create_node($2, 0, 0, DEC_VAR_GLOBAL);};
lista_de_identificadores: TK_IDENTIFICADOR { if(isDecl(stack,*$1)) { printErrorDecl(*$1,find(stack,$1->input)); exit (ERR_DECLARED);} addItem(stack, createItem(VARIABLE,currType,*$1)); deleteValue($1); };
lista_de_identificadores: var_multidimensional;
lista_de_identificadores: lista_de_identificadores ',' TK_IDENTIFICADOR { if(isDecl(stack,*$3)) { printErrorDecl(*$3,find(stack,$3->input)); exit (ERR_DECLARED);} addItem(stack, createItem(VARIABLE,currType,*$3)); deleteValue($3);};
lista_de_identificadores: lista_de_identificadores ',' var_multidimensional;

/* -----------------------------------------------------------------------
	
	3.2 Definição de Funções  3.3 Bloco de Comandos

-------------------------------------------------------------------------
*/

//AST:  id -> ( nome , primeiro comando )
declaracao_funcao: cabecalho corpo  { $$ = create_node($1, IDENTIFICADOR); add_child(&$$, &$2);
      //strcpy($$->code,$2->code);   

      //Do the function things
      // ....
      char * rotulo = generateRotulo();
      insertFunctionLabel(stack,$1->input,rotulo);
      updateSizeOfCurrentFrame(stack, $1->input, sizeOfCurrentFrame); //It is important when we create a new Frame
      if(strcmp($1->input,"main") == 0){
            strcpy(mainLabel,rotulo);
      }
      if($2 != NULL){
            strcat($$->code,rotulo);
            strcat($$->code,": \n");
            strcat($$->code,genFrame(stack,$1->input));
            
            strcat($$->code,$2->code);
            
      }
     
      sizeOfCurrentFrame = 0; 
 };
cabecalho: tipo TK_IDENTIFICADOR { if(isDecl(stack,*$2)) { printErrorDecl(*$2,find(stack,$2->input)); exit (ERR_DECLARED);} addItem(stack, createItem(FUNCTION,currType,*$2)); push(stack); }'(' lista_parametros ')' { $$ = $2; };
lista_parametros: parametros_entrada { $$ = 0; } | { $$ = 0;};
parametros_entrada: parametros_entrada ',' parametro { $$ = 0; } | parametro { $$ = 0; };
parametro: tipo TK_IDENTIFICADOR { if(isDecl(stack,*$2)) { printErrorDecl(*$2,find(stack,$2->input)); exit (ERR_DECLARED);} addItem(stack, createItem(VARIABLE,currType,*$2)); sizeOfCurrentFrame+=4; $$ = 0; deleteValue($2);};

corpo : bloco_comandos { $$ = $1; };

bloco_comandos : '{' lista_comandos '}'  { $$ = $2; pop(stack); } | '{' '}' {  $$ = 0; pop(stack); };
lista_comandos: comando ';' lista_comandos { if($1 == 0) { $$ = $3; } else { $$ = $1; add_child(&$$, &$3);
      if($$ != NULL && $3 != NULL){
            strcat($$->code,$3->code);
      }

 } } | comando ';'  { $$ = $1; };


//FOLHA : LITERAIS, IDENTIFICADORES
//NODE : COMANDOS e FUNCOES
//CHILD : > 1 Funcão , > 1 comando, > 1 expressao  ; COMANDO; 


/* -----------------------------------------------------------------------
	
	3.4 Comandos Simples

-------------------------------------------------------------------------
*/

push_stack: { push(stack); };

comando: declaracao_var_local { $$ = $1;}| 
         atribuicao { $$ = $1;}| 
         retorno { $$ = $1;}| 
         push_stack bloco_comandos { $$ = $2;}| 
         chamada_funcao { $$ = $1;}| 
         controle_fluxo { $$ = $1;}| 
         controle_fluxo_while { $$ = $1;};

literal: TK_LIT_INT   { $$ = create_leaf($1, VAL_LIT_INT, INT_TYPE); /*addItem(stack, createItem(LITERAL,INT_TYPE,*$1));*/ $$->temp = generateTemp(); char valStr[100]; sprintf(valStr,"%d",$1->tokenValue.valInt); strcpy($$->code,generateCode("loadI",valStr,$$->temp, NULL));  }| //REVISAR
         TK_LIT_CHAR  { $$ = create_leaf($1, VAL_LIT_CHAR, CHAR_TYPE); /*addItem(stack, createItem(LITERAL,CHAR_TYPE,*$1)); */}| 
         TK_LIT_FALSE { $$ = create_leaf($1, VAL_LIT_BOOL, BOOL_TYPE); /*addItem(stack, createItem(LITERAL,BOOL_TYPE,*$1));*/}| 
         TK_LIT_TRUE  { $$ = create_leaf($1, VAL_LIT_BOOL, BOOL_TYPE); /*addItem(stack, createItem(LITERAL,BOOL_TYPE,*$1));*/}| 
         TK_LIT_FLOAT { $$ = create_leaf($1, VAL_LIT_FLOAT, FLOAT_TYPE); /*addItem(stack, createItem(LITERAL,FLOAT_TYPE,*$1));*/};


// int a, b <= 2, c, d <= 3;

declaracao_var_local: tipo lista_de_identificadores_local { $$ = $2; };

identificador_local: TK_IDENTIFICADOR { if(isDecl(stack,*$1)) { printErrorDecl(*$1,find(stack,$1->input)); exit (ERR_DECLARED); sizeOfCurrentFrame+=4; } addItem(stack, createItem(VARIABLE,currType,*$1)); $$=0; deleteValue($1); sizeOfCurrentFrame+=4; } | identificador TK_OC_LE literal { $$ = create_node($2, INIC_VAR); add_child(&$$,&$1); add_child(&$$,&$3); int ret = doCoercion($$,INIC_VAR); if(ret != 0) exit (ret); 
      sizeOfCurrentFrame+=4; 
//Inicialization
//
      strcpy($$->code,$3->code); char valStr[100];
      TNODE * offs = getOffset(stack,$1->value->input);
      if(offs->isGlobal){
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
            strcat($$->code,generateCode("storeAI",strdup($3->temp),"rbss",valStr));
      }else{
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
            strcat($$->code,generateCode("storeAI",strdup($3->temp),"rfp",valStr));
      }

      //char valStr[100]; sprintf(valStr,"%d",getOffset(stack,$1->value->input));
      //strcat($$->code,generateCode("storeAI",strdup($3->temp),"rfp",valStr));

};

lista_de_identificadores_local: lista_de_identificadores_local ',' identificador_local { if($3 != 0){$$ = $3; add_child(&$$, &$1);} } | identificador_local { $$ = $1; };

atribuicao: identificador_expressao '=' expressao {$$ = create_node($2, ATRIBUICAO); add_child(&$$, &$1); add_child(&$$,&$3); int ret = doCoercion($$,ATRIBUICAO); if(ret != 0) exit (ret);
      strcpy($$->code,$3->code); char valStr[100];

      TNODE * found = find(stack,$3->value->input);
      

      TNODE * offs = getOffset(stack,$1->value->input);
      //printf("Funcao: %s , category: %d\n",found->lexical_value.input,found->category);
      if(offs->isGlobal){
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
           // if(found != NULL && found->category == FUNCTION){
           //       strcat($$->code,generateCode("getValueOfFunction","rbss",valStr, NULL));
           // }else
                  strcat($$->code,generateCode("storeAI",strdup($3->temp),"rbss",valStr));
      }else{
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
            //if(found != NULL && found->category == FUNCTION)
            //      strcat($$->code,generateCode("getValueOfFunction","rfp",valStr, NULL));
            //else 
                  strcat($$->code,generateCode("storeAI",strdup($3->temp),"rfp",valStr));
      }
}

      //sprintf(valStr,"%d",getOffset(stack,$1->value->input));
      //strcat($$->code,generateCode("storeAI",strdup($3->temp),"rfp",valStr));} ;

lista_argumentos: argumentos_entrada { $$ = $1; 
      strcat($$->code,setArguments($$));

} | { $$ = 0; };
argumentos_entrada: argumentos_entrada ',' argumento { $$ = $1; add_child(&$$, &$3); 
      strcat($$->code,$3->code);

} | argumento { $$ = $1; };
argumento: expressao { $$ = $1; };

controle_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN push_stack bloco_comandos  { $$ = create_node($1, IF); add_child(&$$,&$3); add_child(&$$,&$7); int ret = doCoercion($$,IF); if(ret != 0) exit (ret);  
      //True = any value different than 0
      //False = 0
      //Should stay even when $7 is Null because can have side effects
      strcpy($$->code,$3->code);
      if($7 != NULL){
            strcat($$->code,generateCode("if",$3->temp, $7->code, NULL)); //Pass expression value and the code of command block
      }
            //strcat($$->code,"\n");
      
      


} | TK_PR_IF '(' expressao ')' TK_PR_THEN push_stack bloco_comandos TK_PR_ELSE push_stack bloco_comandos { $$ = create_node($1, IF_ELSE); add_child(&$$,&$3); add_child(&$$,&$7); add_child(&$$,&$10); int ret = doCoercion($$,IF_ELSE); if(ret != 0) exit (ret);
      
      strcpy($$->code,$3->code);
      if($7 != NULL && $10 != NULL){
            strcat($$->code,generateCode("if_else",$3->temp, $7->code, $10->code)); //Pass expression value and the code of command block
      }else if($7 == NULL){
            strcat($$->code,generateCode("if_else",$3->temp, NULL, $10->code)); //Pass expression value and the code of command block
      }else if($10 == NULL){
            strcat($$->code,generateCode("if_else",$3->temp, $7->code, NULL)); //Pass expression value and the code of command block
      }

 };

controle_fluxo_while: TK_PR_WHILE '(' expressao ')' push_stack bloco_comandos { $$ = create_node($1, WHILE); add_child(&$$, &$3); add_child(&$$, &$6); int ret = doCoercion($$,WHILE); if(ret != 0) exit (ret); 
      strcpy($$->code,$3->code);
      if($6 != NULL){
            strcat($$->code,generateCode("while",$3->temp, $6->code, $3->code)); //Pass expression value and the code of command block
      }

} ;

retorno: TK_PR_RETURN expressao { $$ = create_node( $1, RETURN); add_child(&$$,&$2); int ret = doCoercion($$,UN_OP); if(ret != 0) exit (ret); 
      strcpy($$->code,$2->code);
      strcat($$->code,generateCode("return",$2->temp, NULL, NULL));
      strcat($$->code,genEpilogue());
} ;

chamada_funcao: TK_IDENTIFICADOR '(' lista_argumentos ')' {if(isUndecl(stack,*$1)) { printErrorUndecl(*$1); exit (ERR_UNDECLARED); } if(!checkUse(stack,*$1, FUNCTION)){ exit ( printErrorUse(*$1,FUNCTION, find(stack,$1->input))); } $$ = create_node($1, CHAMADA_FUNC); add_child(&$$, &$3); int ret = doCoercionWithType($$,CHAMADA_FUNC,getType(stack,*$1)); if(ret != 0) exit (ret);

      char * label = getFunctionLabel(stack,$1->input);
      //printf("go to label: %s",label);
      char *functionToBeCalled = $1->input;
      //printf("prologue: %s\n",getPrologue(stack, functionToBeCalled));
      strcat($$->code,$3->code);
      strcat($$->code,getPrologue(stack, functionToBeCalled));
      $$->temp = generateTemp();
      strcat($$->code,generateCode("getValueOfFunction",$$->temp,NULL, NULL));

 } ;

/* -----------------------------------------------------------------------
	
	3.5 Expressões

-------------------------------------------------------------------------
*/

expressao: E { $$ = $1;};
E: E TK_OC_OR T { $$ = create_node($2, EXP_OR); add_child(&$$, &$1); add_child(&$$, &$3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); 
      $$->temp = generateTemp();
      strcpy($$->code, $1->code);
      strcat($$->code, $3->code);
      strcat($$->code,generateCode("or",$1->temp,$3->temp,$$->temp)); // will generate tempOpaca inside generateCode
}  | T { $$ = $1; };
      
T: T TK_OC_AND F { $$ = create_node($2, EXP_AND); add_child(&$$, &$1); add_child(&$$, &$3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); 
      $$->temp = generateTemp();
      strcpy($$->code, $1->code);
      strcat($$->code, $3->code);
      strcat($$->code,generateCode("and",$1->temp,$3->temp,$$->temp)); // will generate tempOpaca inside generateCode
} | F { $$ = $1; };

F: F TK_OC_EQ G { $$ = create_node($2, EXP_EQ); add_child(&$$, &$1); add_child(&$$, &$3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); 
      $$->temp = generateTemp();
      strcpy($$->code, $1->code);
      strcat($$->code, $3->code);
      strcat($$->code,generateCode("cmp_EQ",$1->temp,$3->temp,$$->temp)); // will generate tempOpaca inside generateCode
} | F TK_OC_NE G  { $$ = create_node($2, EXP_NE); add_child(&$$, &$1); add_child(&$$, &$3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); 
      $$->temp = generateTemp();
      strcpy($$->code, $1->code);
      strcat($$->code, $3->code);
      strcat($$->code,generateCode("cmp_NE",$1->temp,$3->temp,$$->temp)); // will generate tempOpaca inside generateCode
} | G { $$ = $1; };
      

G: G TK_OC_GE H { $$ = create_node($2, EXP_GE); add_child(&$$, &$1); add_child(&$$,&$3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); 
      $$->temp = generateTemp();
      strcpy($$->code, $1->code);
      strcat($$->code, $3->code);
      strcat($$->code,generateCode("cmp_GE",$1->temp,$3->temp,$$->temp)); // will generate tempOpaca inside generateCode

} | G TK_OC_LE H { $$ = create_node($2, EXP_LE); add_child(&$$, &$1); add_child(&$$, &$3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); 
      $$->temp = generateTemp();
      strcpy($$->code, $1->code);
      strcat($$->code, $3->code);
      strcat($$->code,generateCode("cmp_LE",$1->temp,$3->temp,$$->temp)); // will generate tempOpaca inside generateCode

} | G '<' H { $$ = create_node($2, EXP_LT); add_child(&$$, &$1); add_child(&$$, &$3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); 
      $$->temp = generateTemp();
      strcpy($$->code, $1->code);
      strcat($$->code, $3->code);
      strcat($$->code,generateCode("cmp_LT",$1->temp,$3->temp,$$->temp)); // will generate tempOpaca inside generateCode

}  | G '>' H { $$ = create_node($2, EXP_GT); add_child(&$$, &$1); add_child(&$$, &$3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); 
      $$->temp = generateTemp();
      strcpy($$->code, $1->code);
      strcat($$->code, $3->code);
      strcat($$->code,generateCode("cmp_GT",$1->temp,$3->temp,$$->temp)); // will generate tempOpaca inside generateCode

} | H { $$ = $1; };

H: H '+' I { $$ = create_node($2, BIN_PLUS); add_child(&$$, &$1); add_child(&$$, &$3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); 

      //BIN_PLUS
      $$->temp = generateTemp();
      strcpy($$->code,$1->code);
      strcat($$->code,$3->code);
      strcat($$->code,generateCode("add",$1->temp,$3->temp,$$->temp));

} 
| H '-' I { $$ = create_node($2, BIN_MINUS); add_child(&$$, &$1); add_child(&$$, &$3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret);

      //BIN_MINUS
      $$->temp = generateTemp();
      strcpy($$->code,$1->code);
      strcat($$->code,$3->code);
      strcat($$->code,generateCode("sub",$1->temp,$3->temp,$$->temp));

} 
| I { $$ = $1; };

I: I '%' J { $$ = create_node($2, BIN_PERCENT); add_child(& $$, & $1); add_child(& $$, & $3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); }
| I '/' J { $$ = create_node($2, BIN_DIV); add_child(& $$, & $1); add_child(& $$, & $3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); 

      //BIN_DIV
      $$->temp = generateTemp();
      strcpy($$->code,$1->code);
      strcat($$->code,$3->code);
      strcat($$->code,generateCode("div",$1->temp,$3->temp,$$->temp));

} 
| I '*' J { $$ = create_node($2, BIN_MULT); add_child(& $$, & $1); add_child(& $$, & $3); int ret = doCoercion($$,BIN_OP); if(ret != 0) exit (ret); 

      //BIN_MULT
      $$->temp = generateTemp();
      strcpy($$->code,$1->code);
      strcat($$->code,$3->code);
      strcat($$->code,generateCode("mult",$1->temp,$3->temp,$$->temp));

}
| J { $$ = $1; };

J: '-' K { $$ = create_node($1, UN_MINUS); add_child(&$$, &$2); int ret = doCoercion($$,UN_OP); if(ret != 0) exit (ret); 
      $$->temp = generateTemp();
      strcpy($$->code,$2->code);
      strcat($$->code,generateCode("neg",$2->temp,$$->temp,NULL));

} | '!' K { $$ = create_node($1, UN_NEG); add_child(&$$, &$2); int ret = doCoercion($$,UN_OP); if(ret != 0) exit (ret); 

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

} | L { $$ = $1; };

K: '-' K { $$ = create_node($1, UN_MINUS); add_child(&$$, &$2); int ret = doCoercion($$,UN_OP); if(ret != 0) exit (ret); } | '!' K { $$ = create_node($1, UN_NEG); add_child(&$$, &$2); int ret = doCoercion($$,UN_OP); if(ret != 0) exit (ret); } | L { $$ = $1; };

L: '(' E ')' { $$ = $2; } | operando { $$ = $1; };

operando: literal { $$ = $1; } | chamada_funcao { $$ = $1; } | identificador_expressao { $$ = $1; };

identificador_expressao: TK_IDENTIFICADOR { if(isUndecl(stack,*$1)) { printErrorUndecl(*$1); exit (ERR_UNDECLARED); } if(!checkUse(stack,*$1, VARIABLE)){ exit (printErrorUse(*$1,VARIABLE, find(stack,$1->input))); } $$ = create_leaf($1, IDENTIFICADOR, getType(stack,*$1)); 

      $$->temp = generateTemp();
      char valStr[100];
      TNODE * offs = getOffset(stack,$1->input);
      if(offs->isGlobal){
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
            strcat($$->code,generateCode("loadAI","rbss", valStr,$$->temp));
      }else{
            sprintf(valStr,"%d",offs->offset); //get offset on symbol table
            strcat($$->code,generateCode("loadAI","rfp", valStr,$$->temp));
      }
      

} | TK_IDENTIFICADOR '[' lista_expressoes ']' 
{  if(isUndecl(stack,*$1)) { printErrorUndecl(*$1); exit (ERR_UNDECLARED); } if(!checkUse(stack,*$1, ARRAY)){ exit( printErrorUse(*$1,ARRAY, find(stack,$1->input))) ;} $$ = create_node($2, IDENT_EXP); ASTNODE * identLeaf = create_leaf($1,IDENTIFICADOR, getType(stack,*$1));  add_child(&$$,&identLeaf); add_child(&$$,&$3); doCoercion($$, UN_OP); deleteValue($4); } ; //Cant pass type here, needs to check the hashtable



//lista_de_elementos: lista_de_elementos declaracao_funcao { if($1 == 0){ $$ = $2;} else {$$ = $1; add_child(&$$, &$2);} };
lista_expressoes: lista_expressoes '^' expressao { $$=create_node($2,LISTA_EXP); add_child(&$$,&$1); add_child(&$$, &$3);} | expressao { $$ = $1; };

%%


void yyerror(char const *s){
	printf("%s na linha: %d\n", s,get_line_number());
	
}
