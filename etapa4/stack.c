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
    if(st == NULL){
        stNode->bottom = NULL;
    }else{
        stNode->bottom = st->top;
    }
    st->top = stNode;
    
}

void pop(STACK *st){
    printf("pop stack\n");
    hashmap_free(st->top->map);//Free table (map)
    st->top = st->top->bottom; //New top is the bottom of the old top
}

TNODE * find(STACK *st, char * identifier){

    
    STACKNODE * top = st->top;
    TNODE * tNode = NULL;
    while(top != NULL){
        //There is a problem when we add literal, because it can have literals with the same input eg: a = 'c'; b = 'c'; Hash need more information
        tNode = (TNODE*)hashmap_get(top->map, &(TNODE){ .lexical_value.input = identifier });
        if(tNode == NULL){ //If not found go down on stack
            top = top->bottom;
        }else{

            break;
        }
    }

    return tNode;

}

void addItem(STACK *st, TNODE * value){
    STACKNODE * stNode = st->top;
    hashmap_set(stNode->map, value);
}

TNODE * createItem(int category, int type, VALOR_T lexical_value){
    TNODE * tNode = (TNODE*)malloc(sizeof(TNODE));
    tNode->category = category;
    tNode->line = lexical_value.lineNumber;
    tNode->lexical_value = lexical_value;
    tNode->type = type;
    int size;
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

void printErrorDecl(VALOR_T var, TNODE * varDeclared){
    printf("ERR_DECLARED: %s (linha: %d) ja declarada na linha: %d\n", var.input, var.lineNumber,varDeclared->line);
}