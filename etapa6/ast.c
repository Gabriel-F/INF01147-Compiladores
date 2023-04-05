#include "ast.h"


void add_child(ASTNODE ** root, ASTNODE ** child){

    if(*root == NULL || *child == NULL){ //não é válido
        return ;
    }

    ASTCHILDREN * newChild = (ASTCHILDREN*)malloc(sizeof(ASTCHILDREN));
    newChild->child = *child;
    newChild->nextChild = NULL;
    ASTCHILDREN * p = (*root)->children;
    if(p->child == NULL){
        free((*root)->children);
        (*root)->children = newChild;
    }else{
        while(p->child != NULL && p->nextChild != NULL){
            p = p->nextChild;
        }
        //Have at least one son
        p->nextChild = newChild;
    }
}

void deleteValue(VALOR_T * value){

        //Not deleting value because lexical_value of tableNode is deleted 
        //free(value->tokenValue.valString);
        //free(value);
        
}

ASTNODE * create_node(VALOR_T * value , int type){
    
    ASTNODE * node = (ASTNODE*)malloc(sizeof(ASTNODE));
    ASTCHILDREN * newChild = (ASTCHILDREN*)malloc(sizeof(ASTCHILDREN));

    newChild->child = NULL;
    newChild->nextChild = NULL;
    node->type = type;
    node->value = value;
    node->children = newChild;
    
    node->dataType = 0; //Do the coercion after add all childs
    strcpy(node->code,"");
    node->temp = NULL;
    return node;
}

ASTNODE * create_leaf(VALOR_T * value , int type, int dataType){
    ASTNODE * node = (ASTNODE*)malloc(sizeof(ASTNODE));
    ASTCHILDREN * newChild = (ASTCHILDREN*)malloc(sizeof(ASTCHILDREN));

    newChild->child = NULL;
    newChild->nextChild = NULL;
    node->type = type;
    node->value = value;
    node->children = newChild;
    node->dataType = dataType;
    strcpy(node->code,"");
    node->temp = NULL;
    return node;
}

VALOR_T * create_value(int type, char * text, int lineNumber){
    VALOR_T * value = (VALOR_T*)malloc(sizeof(VALOR_T));
    value->lineNumber = lineNumber;
    value->input = text;
    if(type == VAL_IDENTIFICADOR || type == VAL_PR || type == VAL_OP_COMP || type == VAL_SPEC)
        value->tokenValue.valString = value->input;
    else if(type == VAL_LIT_INT){
        value->tokenValue.valInt = atoi(value->input);
    }else if(type == VAL_LIT_BOOL){
        if(strcmp(text,"true") == 0){
            value->tokenValue.valBool = true;
        }else{
            value->tokenValue.valBool = false;
        }
    }else if(type == VAL_LIT_FLOAT){
        value->tokenValue.valFloat = atof(value->input);
    }else if(type == VAL_LIT_CHAR){
        value->tokenValue.valChar = value->input[1];
    }
    value->type = type;

    return value;
}

int doCoercionWithType(ASTNODE *root, int opType, int type){
    root->dataType = type;
    return 0;
}

int doCoercion(ASTNODE *root, int opType){ //opType is the type of the operation: assignment, inicialization, arithmetic...
    //Assignment, inicialization checks the first child
    //Otherwise the order doesn't matter

    if(opType == INIC_VAR || opType == ATRIBUICAO || opType == BIN_OP){
        int mainType = root->children->child->dataType; // Gets the type of the first child;
        int secondType = root->children->nextChild->child->dataType; // Gets the type on the right of the operation
        //printf("mainType: (%s) %d  -  secondType %d \n",root->children->child->value->input,mainType,secondType);
        if(secondType == CHAR_TYPE){
            if(mainType == INT_TYPE){
                printf("ERR_CHAR_TO_INT: Conversao implicita proibida de Char para Int na linha %d \n", root->value->lineNumber);
                return ERR_CHAR_TO_INT;
            }
            if(mainType == FLOAT_TYPE){
                printf("ERR_CHAR_TO_FLOAT: Conversao implicita proibida de Char para Float na linha %d \n", root->value->lineNumber);
                return ERR_CHAR_TO_FLOAT;
            }
            if(mainType == BOOL_TYPE){
                printf("ERR_CHAR_TO_BOOL: Conversao implicita proibida de Char para Bool na linha %d \n", root->value->lineNumber);
                return ERR_CHAR_TO_BOOL;
            }
        }
        if(mainType == CHAR_TYPE){
            
            if(secondType == INT_TYPE){
                printf("ERR_X_TO_CHAR: Conversao implicita proibida de Int para Char na linha %d \n", root->value->lineNumber);
                return ERR_X_TO_CHAR;
            }
            if(secondType == FLOAT_TYPE){
                printf("ERR_X_TO_CHAR: Conversao implicita proibida de Float para Char na linha %d \n", root->value->lineNumber);
                return ERR_X_TO_CHAR;
            }
            if(secondType == BOOL_TYPE){
                printf("ERR_X_TO_CHAR: Conversao implicita proibida de Bool para Char na linha %d \n", root->value->lineNumber);
                return ERR_X_TO_CHAR;
            }
        }
        //Inferences
        if(opType == INIC_VAR || opType == ATRIBUICAO){
            root->dataType = mainType; //mainType has priority
        }else if(opType == BIN_OP){
            //Follow coercion rules
            if(mainType == secondType){
                root->dataType = mainType;
            }else if(mainType == FLOAT_TYPE || secondType == FLOAT_TYPE){ //Float dominates 1st
                root->dataType = FLOAT_TYPE;
            }else if(mainType == INT_TYPE || secondType == INT_TYPE){ //Int 2nd
                root->dataType = INT_TYPE;
            }else{ //Bool 3rd
                root->dataType = BOOL_TYPE; //Never occurs I think
            }
        }
    }else if(opType == UN_OP){
        root->dataType = root->children->child->dataType;
    }else if(opType == IF || opType == IF_ELSE || opType == WHILE){
        root->dataType = root->children->child->dataType;
    }
    //printf("Tipo convertido %d\n", root->dataType);

    return 0;
}

void exporta(void * node){

    printAst(node);
    printf("\n");
    printLabels(node);
    
}
void liberaChildren(ASTCHILDREN * children){
    if(children == NULL)
        return;
    if(children->nextChild != NULL)
        liberaChildren(children->nextChild);
    
    //free(children->nextChild);
    free(children);
    
    children = NULL;
}
void libera(void *node){

    //Percorre dfs
    //Depois Free
    if(node == 0){
        return;
    }
    if(node == NULL){

        return;
    }
    ASTNODE * root = ((ASTNODE*)(node));
    //DFS on children
    
    ASTCHILDREN * p = root->children;

    while(p->child != NULL){

        libera((void*)(p->child));
        if(p->nextChild == NULL)
            break;
        p = p->nextChild;
    }
    
    free(root->value->input); //ACHO QUE PRECISO DISSO
    root->value->input = NULL;
    free(root->value);
    root->value = NULL;
    liberaChildren((root->children));
    free(root);
    root = NULL;


}
void printAst(ASTNODE * node){
    if(node == 0){
        return;
    }
    if(node == NULL){
        return;
    }
    ASTNODE * root = ((ASTNODE*)node);
    //DFS on children
    if(strcmp(root->code,"") != 0)
        printf("code: %s\n",root->code);
    ASTCHILDREN * p = root->children;
  
        //Find first empty child
        while(p->child != NULL){
            printf("%p, %p\n",root,p->child);
            
            printAst(p->child);
            if(p->nextChild == NULL)
                break;
            p = p->nextChild;
        }
    

    /*for(int i=0;i<NUM_CHILDREN;i++){
        printAst(((ASTNODE*)node)->child[i]);
    }*/

}

void printLabels(void * node){
    if(((ASTNODE*)node) == 0){
        return;
    }
    if(((ASTNODE*)node)->type == VAL_IDENTIFICADOR)
        printf("%p [label=\"%s\"]\n",((ASTNODE*)node),((ASTNODE*)node)->value->tokenValue.valString);
    if(((ASTNODE*)node)->type == VAL_LIT_INT)
        printf("%p [label=\"%d\"]\n",((ASTNODE*)node),((ASTNODE*)node)->value->tokenValue.valInt);
    if(((ASTNODE*)node)->type == IDENTIFICADOR)
        printf("%p [label=\"%s\"]\n",((ASTNODE*)node),((ASTNODE*)node)->value->tokenValue.valString);
    if(((ASTNODE*)node)->type == VAL_LIT_BOOL)
        printf("%p [label=\"%d\"]\n",((ASTNODE*)node),((ASTNODE*)node)->value->tokenValue.valBool);
    if(((ASTNODE*)node)->type == VAL_LIT_FLOAT)
        printf("%p [label=\"%f\"]\n",((ASTNODE*)node),((ASTNODE*)node)->value->tokenValue.valFloat);
    if(((ASTNODE*)node)->type == VAL_LIT_CHAR)
        printf("%p [label=\"%c\"]\n",((ASTNODE*)node),((ASTNODE*)node)->value->tokenValue.valChar);
    

    switch (((ASTNODE*)node)->type)
    {
    case INIC_VAR:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "<=");
        break;
    case ATRIBUICAO:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "=");
        break;
    case IDENT_EXP:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "[]");
        break;
    case LISTA_EXP:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "^");
        break;
    case CHAMADA_FUNC:
        printf("%p [label=\"%s %s\"]\n", ((ASTNODE*)node), "call", ((ASTNODE*)node)->value->input);
        break;
    case RETURN:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "return");
        break;
    case IF:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "if");
        break;
    case IF_ELSE:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "if");
        break;
    case WHILE:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "while");
        break;
    case EXP_OR:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "||");
        break;
    case EXP_AND:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "&&");
        break;
    case EXP_EQ:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "==");
        break;
    case EXP_NE:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "!=");
        break;
    case EXP_GE:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), ">=");
        break;
    case EXP_LE:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "<=");
        break;
    case EXP_LT:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "<");
        break;
    case EXP_GT:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), ">");
        break;
    case BIN_PLUS:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "+");
        break;
    case BIN_MINUS:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "-");
        break;
    case BIN_PERCENT:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "%");
        break;
    case BIN_DIV:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "/");
        break;
    case BIN_MULT:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "*");
        break;
    case UN_MINUS:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "-");
        break;
    case UN_NEG:
        printf("%p [label=\"%s\"]\n", ((ASTNODE*)node), "!");
        break;
    default:
        break;
    }

    ASTNODE * root = ((ASTNODE*)node);
    ASTCHILDREN * p = root->children;
    //Find first empty child
    while(p->child != NULL){
        printLabels(p->child);
        if(p->nextChild == NULL)
            break;
        p = p->nextChild;
    }
    /*for(int i=0;i<NUM_CHILDREN;i++){    
        if(((ASTNODE*)node)->child[i] != 0)
            printLabels(((ASTNODE*)node)->child[i]);
    }*/
}
char *generateTemp(){
  char *retorno = malloc(256);
  static int contador = 0;
  snprintf(retorno, 256, "r%d", contador++);
  return retorno;
}

char *generateRotulo(){
  char *retorno = malloc(256);
  static int rotulo = 0;
  snprintf(retorno, 256, "l%d", rotulo++);
  return retorno;
}

char * generateCode(char *mnem, const char * reg1, const char * reg2, const char * reg3){
    char * ans = malloc(6000);
    if(strcmp(mnem,"neg") == 0){
        //multiply for -1
        char res[200] = "multI ";
        strcat(res,reg1);
        strcat(res,", ");
        strcat(res,"-1");
        strcat(res," => ");
        strcat(res,reg2);
        strcat(res,"\n");
        strcpy(ans,res);
    }
    if(strcmp(mnem,"loadI") == 0){
        char res[200] = "loadI ";
        strcat(res,reg1);
        strcat(res," => ");
        strcat(res,reg2);
        strcat(res,"\n");
        strcpy(ans,res);
    }
    if(strcmp(mnem,"storeAI") == 0){
        char res[200] = "storeAI ";
        strcat(res,reg1);
        strcat(res," => ");
        strcat(res,reg2);
        strcat(res,", ");
        strcat(res,reg3);
        strcat(res,"\n");
        strcpy(ans,res);
    }
    if(strcmp(mnem,"add") == 0 || strcmp(mnem,"sub") == 0 || strcmp(mnem,"div") == 0 || strcmp(mnem,"mult") == 0){
        char res[200] = "";
        strcat(res,mnem);
        strcat(res, " ");
        strcat(res,reg1);
        strcat(res,", ");
        strcat(res,reg2);
        strcat(res," => ");
        strcat(res,reg3);
        strcat(res,"\n");
        strcpy(ans,res);
    }
    if(strcmp(mnem,"loadAI") == 0){
        char res[200] = "loadAI ";
        strcat(res,reg1);
        strcat(res,", ");
        strcat(res,reg2);
        strcat(res," => ");
        strcat(res,reg3);
        strcat(res,"\n");
        strcpy(ans,res);
    }
    if(strcmp(mnem,"and") == 0 || strcmp(mnem,"or") == 0 || strcmp(mnem,"cmp_GE") == 0 || strcmp(mnem,"cmp_LE") == 0 || strcmp(mnem,"cmp_GT") == 0 || strcmp(mnem,"cmp_LT") == 0 || strcmp(mnem,"cmp_EQ") == 0 || strcmp(mnem,"cmp_NE") == 0){
        
        char * tempOpaca = generateTemp();
        char * labelTrue = generateRotulo();
        char * labelFalse = generateRotulo();
        char * labelDepois = generateRotulo();
        char res[5000];
        strcpy(res,mnem);
        strcat(res," ");
        strcat(res, reg1);
        strcat(res,", ");
        strcat(res,reg2);
        strcat(res," -> ");
        strcat(res, tempOpaca);
        strcat(res,"\ncbr ");
        strcat(res,tempOpaca);
        strcat(res," -> ");
        strcat(res,labelTrue);
        strcat(res,", ");
        strcat(res,labelFalse);
        strcat(res,"\n");
        strcat(res,labelTrue);
        strcat(res,": loadI 1 => ");
        strcat(res, reg3);
        strcat(res,"\njumpI -> ");
        strcat(res,labelDepois);
        strcat(res,"\n");
        strcat(res,labelFalse);
        strcat(res,": loadI 0 => ");
        strcat(res, reg3);
        strcat(res,"\n");
        strcat(res,labelDepois);
        strcat(res,": nop ");
        strcat(res,"\n");
        strcpy(ans,res);
    }
    if(strcmp(mnem,"if") == 0){
        char res[8000];

        char * tempZero = generateTemp();
        char * tempRes = generateTemp();
        char * labelTrue = generateRotulo();
        char * labelFalse = generateRotulo();
        strcpy(res,"\nloadI 0 => ");
        strcat(res,tempZero);
        strcat(res," ");
        //Compare expression result with zero: if is not equal then it's true
        strcat(res,"\ncmp_NE ");
        strcat(res,reg1);
        strcat(res,", ");
        strcat(res,tempZero);
        strcat(res," -> ");
        strcat(res,tempRes);
        strcat(res,"\ncbr ");
        strcat(res,tempRes);
        strcat(res," -> ");
        strcat(res, labelTrue); //expr == true
        strcat(res,", ");
        strcat(res,labelFalse);
        strcat(res,"\n");
        strcat(res,labelTrue);
        strcat(res,": ");
        strcat(res,reg2); //Code inside of if
        strcat(res,labelFalse);
        strcat(res,": nop \n");
        strcpy(ans,res);
    }
    if(strcmp(mnem,"if_else") == 0){
        bool jumpNoCodeTrue = false;
        bool jumpNoCodeFalse = false;
        char res[8000];
        char * tempZero = generateTemp();
        char * tempRes = generateTemp();
        char * labelTrue = generateRotulo();
        char * labelFalse = generateRotulo();
        char * labelDepois = generateRotulo();
        strcpy(res,"loadI 0 => ");
        strcat(res,tempZero);
        strcat(res,"\n");
        //Compare expression result with zero: if is not equal then it's true
        strcat(res,"cmp_NE ");
        strcat(res,reg1);
        strcat(res,", ");
        strcat(res,tempZero);
        strcat(res," -> ");
        strcat(res,tempRes);
        strcat(res,"\n");
        strcat(res,"cbr ");
        strcat(res,tempRes);
        strcat(res," -> ");

        if(reg2 != NULL){
            
            strcat(res, labelTrue); //expr == true
            
        }else{
            
            strcat(res,labelDepois); //Occurs when there is no command in true block
            jumpNoCodeTrue = true;
        }
        strcat(res,", ");
        if(reg3 != NULL)
            strcat(res, labelFalse); //expr == true
        else{
            
            strcat(res,labelDepois); //Occurs when there is no command in true block
            jumpNoCodeFalse = true;
        }

        strcat(res,"\n");
        if(!jumpNoCodeTrue){
            strcat(res,labelTrue);
            strcat(res,": ");
            strcat(res,reg2); //Code inside of if
            strcat(res,"jumpI -> ");
            strcat(res,labelDepois);
             strcat(res,"\n");
        }
        if(!jumpNoCodeFalse){
            strcat(res,labelFalse);
            strcat(res,": ");
            strcat(res,reg3);
        }

        strcat(res,labelDepois);
        strcat(res,": ");
        strcpy(ans,res);
    }
    if(strcmp(mnem,"while") == 0){
        char res[5000];

        char * tempZero = generateTemp();
        char * tempRes = generateTemp();
        char * labelTrue = generateRotulo();
        char * labelFalse = generateRotulo();
        char * labelExpr = generateRotulo();
        strcpy(res,labelExpr);
        strcat(res,": ");
        strcat(res,"\nloadI 0 => ");
        strcat(res,tempZero);
        strcat(res," ");
        //Compare expression result with zero: if is not equal then it's true
        strcat(res,"\ncmp_NE ");
        strcat(res,reg1);
        strcat(res,", ");
        strcat(res,tempZero);
        strcat(res," -> ");
        strcat(res,tempRes);
        strcat(res,"\ncbr ");
        strcat(res,tempRes);
        strcat(res," -> ");
        strcat(res,labelTrue); //expr == true
        strcat(res,", ");
        strcat(res,labelFalse);
        strcat(res,"\n");
        strcat(res,labelTrue);
        strcat(res,": ");
        strcat(res,reg2); //Code inside of if
        strcat(res," ");
        strcat(res,reg3); //Execute code of expression
        strcat(res," jumpI -> ");
        strcat(res,labelExpr);
        strcat(res,"\n");
        strcat(res,labelFalse);
        strcat(res,": nop ");
        strcat(res,"\n");
        strcpy(ans,res);

    }
    if(strcmp(mnem,"return") == 0){
        char res[5000] = "storeAI ";
        strcat(res,reg1);
        strcat(res," => rfp, 12\n");
        strcpy(ans,res);
        
    }

    if(strcmp(mnem,"getValueOfFunction") == 0){
        char * funcRes = generateTemp();
        char res[5000] = "loadAI rsp, 12 => ";
        strcat(res,funcRes);
        strcat(res,"\n");
        strcat(res,"i2i ");
        strcat(res,funcRes);
        strcat(res," => ");
        strcat(res,reg1);
        strcat(res,"\n");
        strcpy(ans,res);
        
    }
    return ans;
}

void imprimeCodigo(void *node){
    ASTNODE * rootNode = (ASTNODE*)node;
    printf("%s",rootNode->code);
}

char * initializeRegisters(char * code){
    char * ans = malloc(1000);
    int commandCnt = 0;
    for(int i=0;i<strlen(code);i++){
        if(code[i] == '\n'){
            commandCnt++;
        }
    }
    char commandStr[100];
    sprintf(commandStr,"%d",commandCnt+30);
    char loadrbss[1000] = "loadI ";
    strcat(loadrbss,commandStr);
    strcat(loadrbss," => rbss \n");

    char registers[1000] = "loadI 1024 => rfp \n";
    strcat(registers,"loadI 1024 => rsp \n");
    strcat(registers,loadrbss);

    strcpy(ans,registers);
    return ans;

}

char * jumpToMain(char * mainLabel){
    char * ans = malloc(1000);
    char res[1000] = "jumpI => ";
    strcat(res,mainLabel);
    strcat(res,"\n");
    strcpy(ans,res);
    return ans; 
}

char * setArguments(ASTNODE * node){
    char * ans = malloc(1000);
    int offset = 16;
    char valStr[10];
    
    char res[1000] = "";
    while(node != NULL){
        strcat(res,"storeAI ");
        strcat(res,node->temp);
        strcat(res," => rsp, ");
        sprintf(valStr,"%d",offset);
        strcat(res,valStr);
        strcat(res,"\n");
        offset+=4; //Int hard coded
        if(node->children == NULL)
            break;
        node = node->children->child;
    }
    strcpy(ans,res);
    return ans;
}


void generateAsm(void *node){
    TAC * instruct = (TAC*)malloc(sizeof(TAC)); //Estrutura para guardar o código e seus registradores 

    ASTNODE * rootNode = (ASTNODE*)node;
    char *saveptr1, *saveptr2; //var aux para manipular a string de entrada que contém todas as instruções
    char code[10000];
    char temp[1000];

    int mnem = 0, reg1 = 0, reg2 = 0, reg3 = 0; //flags para alocação correta dos parametros dentro da estrutura

    strcpy(code, rootNode->code);
    removeSymbol(code, ','); //função pra remover as vírgulas da string
    char *token = strtok_r(code, "\n", &saveptr1); // divide a string em linhas
    while (token != NULL) { // percorre todos os tokens, divide a string em linhas
        //printf("%s\n", token); // exibe cada token separadamente


        char *subtoken = strtok_r(token, " ", &saveptr2); // divide a string em palavras
        while (subtoken != NULL) { // percorre todos os tokens
            //printf("%s\n", subtoken); // exibe cada subtoken separadamente

            if (strcmp(subtoken, "->") != 0 && strcmp(subtoken, "=>") != 0){ //aquela gambiarra básica pra n ter que lidar com simbolos
             if( mnem == 0 ){
                strcpy(instruct->mnem, subtoken);
                mnem = 1;
            } 
            else if( reg1 == 0 && mnem == 1){
                strcpy(instruct->reg1, subtoken);
                reg1 = 1;
            }
            else if( reg2 == 0 && reg1 == 1 && mnem == 1){
                strcpy(instruct->reg2, subtoken);
                reg2 = 1;
            }
            else if( reg3 == 0 && reg2 == 1 &&  reg1 == 1 && mnem == 1 ){
                strcpy(instruct->reg3, subtoken);
                reg3 = 1;               
            } else
                printf("Erro na conversão de iloc para asm, todos os registradores foram ocupados\n");
            }
            
            subtoken = strtok_r(NULL, " ", &saveptr2); // obtém o próximo subtoken
        }
        //printf("Mnem: %s\nReg1: %s\nReg2: %s\nReg3: %s\n", instruct->mnem, instruct->reg1, instruct->reg2, instruct->reg3);

        // AQUI CHAMAR A VERDADEIRA FUNÇÃO QUE GERA O CÓDIGO ASM SWITCH BRABO


        strcpy(instruct->mnem, ""); // Reset nos parametros da estrutura e nas flags
        strcpy(instruct->reg1, "");
        strcpy(instruct->reg2, "");
        strcpy(instruct->reg3, "");
        mnem = 0;
        reg1 = 0; 
        reg2 = 0; 
        reg3 = 0;

        token = strtok_r(NULL, "\n", &saveptr1); // obtém o próximo token
    }
}

void removeSymbol(char * string, char symbol) {
    char *pos = strchr(string, symbol);
    while (pos != NULL) {
        memmove(pos, pos + 1, strlen(pos)); // remove o símbolo, gambiarra braba na memoria
        pos = strchr(string, symbol); // encontra a próxima ocorrência do símbolo
    }
    //printf("%s\n", string); // exibe a string sem o símbolo
}

