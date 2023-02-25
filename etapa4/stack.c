#include "stack.h"

int table_compare(const void *a, const void *b, void *udata) {
    const TNODE *ua = (TNODE *)a;
    const TNODE *ub = (TNODE *)b;
    return strcmp(ua->lexical_value.input, ub->lexical_value.input);
}

uint64_t table_hash(const void *item, uint64_t seed0, uint64_t seed1) {
    const TNODE *table = (TNODE *)item;
    return hashmap_sip(table->lexical_value.input, strlen(table->lexical_value.input), seed0, seed1);
}

STACK * initStack(){

    STACK * newSt = (STACK*)malloc(sizeof(STACK));
    newSt->top = NULL;
    
    return newSt;
}

void push(STACK *st){
    printf("push stack\n");

    struct hashmap *newMap = hashmap_new(sizeof(TNODE), 0, 0, 0, table_hash, table_compare, NULL,NULL); //Create new table

    STACKNODE *stNode = (STACKNODE*)malloc(sizeof(STACKNODE));
    stNode->map = newMap;
    if(st->top == NULL){
        stNode->bottom = NULL;
    }else{
        stNode->bottom = st->top;
    }
    st->top = stNode;
    
}

void pop(STACK *st){
    printf("pop stack\n");
    hashmap_free(st->top->map);//Free table (map)
    st->top = st->top->bottom; //Update top
    
}

TNODE * findNode(STACKNODE *st, char * identifier){
    
    if(st == NULL)
        return NULL;
    TNODE * tNode = NULL;
    
    //There is a problem when we add literal, because it can have literals with the same input eg: a = 'c'; b = 'c'; Hash need more information
    tNode = (TNODE*)hashmap_get(st->map, &(TNODE){ .lexical_value.input = identifier });
    if(tNode == NULL){ //If not found go down on stack
        return findNode(st->bottom, identifier);
    }else{
        return tNode;
    }

}
TNODE * find(STACK *st, char * identifier){
    
    if(st == NULL)
        return NULL;
    return findNode(st->top,identifier);

}

void addItem(STACK *st, TNODE * value){
    STACKNODE * stNode = st->top;
    hashmap_set(stNode->map, value);
    printf("added: %s \n",value->lexical_value.input);
}


//Change lexical_value to pointer
TNODE * createItem(int category, int type, VALOR_T lexical_value){
    TNODE * tNode = (TNODE*)malloc(sizeof(TNODE));
    
    tNode->category = category;
    tNode->line = lexical_value.lineNumber;
    tNode->lexical_value = lexical_value;
    tNode->type = type;
    int size;

    //Fix size whe is array
    switch(type){
        case INT_TYPE:
            size = 4;
            break;
        case FLOAT_TYPE:
            size = 8;
            break;
        case CHAR_TYPE:
            size = 1;
            break;
        case BOOL_TYPE:
            size = 1;
            break;
    }

    
    tNode->size = size;

    printf("item created.\n");
    return tNode;
}

bool isDecl(STACK *st, VALOR_T identifier){

    
    TNODE * tnode;

    tnode = hashmap_get(st->top->map, &(TNODE){.lexical_value.input = identifier.input});
    if(tnode == NULL)
        return false;
    
    return true;
}
bool isUndecl(STACK *st, VALOR_T identifier){
    printf("identifier.input: %s\n",identifier.input);
    TNODE * tnode = find(st,identifier.input);
    if(tnode == NULL)
        return true;
    return false;
}

void printErrorDecl(VALOR_T var, TNODE * varDeclared){
    printf("ERR_DECLARED: %s (linha: %d) ja declarada na linha: %d\n", var.input, var.lineNumber,varDeclared->line);
}

void printErrorUndecl(VALOR_T var){
    printf("ERR_UNDECLARED: %s (linha: %d) não declarada \n", var.input,var.lineNumber);
}

int printErrorUse(VALOR_T var, int usingType, TNODE * varDeclared){
    printf("print error use\n");
    int returnCode ;
    if(varDeclared->type == CHAR_TYPE && usingType == ARRAY){
        printf("ERR_CHAR_VECTOR: arranjos nao podem ser do tipo char (%s), linha: %d",varDeclared->lexical_value.input,var.lineNumber);
        returnCode = ERR_CHAR_VECTOR;
    }else{
        switch (varDeclared->category)
        {
        case VARIABLE:
            printf("ERR_VARIABLE: variavel %s sendo utilizada como:",varDeclared->lexical_value.input);
            returnCode = ERR_VARIABLE;
            break;
        case ARRAY:
            printf("ERR_ARRAY: array %s sendo utilizada como:",varDeclared->lexical_value.input);
            returnCode = ERR_ARRAY;
            break;
        case FUNCTION:
            printf("ERR_FUNCAO: funcao %s sendo utilizada como:",varDeclared->lexical_value.input);
            returnCode = ERR_FUNCTION;
            break;
        
        }
        switch (usingType)
        {
        case VARIABLE:
            printf(" variavel na linha: %d ", var.lineNumber);
            break;
        case ARRAY:
            printf(" array na linha: %d", var.lineNumber);
            break;
        case FUNCTION:
            printf(" funcao na linha: %d", var.lineNumber);
            break;
        }
    }
    printf("\n");
    return returnCode;
}

bool checkUse(STACK *st, VALOR_T var, int usingType){

    printf("checking use\n");
    TNODE * tnode = find(st,var.input);
    if(usingType == ARRAY && tnode->type == CHAR_TYPE){
        return false;
    }
    if(tnode->category == usingType){
        return true;
    }else
        return false;
}

int getType(STACK *st, VALOR_T identifier){
    TNODE * tnode = find(st, identifier.input);

    return tnode->type;
}