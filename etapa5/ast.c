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

char * generateCode(char *mnem, const char * reg1, const char * reg2, const char * reg3){
    char * ans = malloc(200);
    if(strcmp(mnem,"loadI") == 0){
        char res[200] = "loadI ";
        strcat(res,reg1);
        strcat(res," => ");
        strcat(res,reg2);
        strcpy(ans,res);
    }
    if(strcmp(mnem,"storeAI") == 0){
        char res[200] = "storeAI ";
        strcat(res,reg1);
        strcat(res," => ");
        strcat(res,reg2);
        strcat(res,", ");
        strcat(res,reg3);
        strcpy(ans,res);
    }
    if(strcmp(mnem,"add") == 0){
        char res[200] = "add ";
        strcat(res,reg1);
        strcat(res,", ");
        strcat(res,reg2);
        strcat(res," => ");
        strcat(res,reg3);
        strcpy(ans,res);
    }
    if(strcmp(mnem,"loadAI") == 0){
        char res[200] = "loadAI ";
        strcat(res,reg1);
        strcat(res,", ");
        strcat(res,reg2);
        strcat(res," => ");
        strcat(res,reg3);
        strcpy(ans,res);
    }
    return ans;
}

//Dont need to check whether indexes of array are integers?
//bool isInteger(ASTNODE * root){
//    return root->dataType == INT_TYPE;
//}

