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
    //printf("push stack\n");

    struct hashmap *newMap = hashmap_new(sizeof(TNODE), 0, 0, 0, table_hash, table_compare, NULL,NULL); //Create new table

    STACKNODE *stNode = (STACKNODE*)malloc(sizeof(STACKNODE));
    
    stNode->map = newMap;
    if(st->top == NULL){ //Global
        stNode->bottom = NULL;
        stNode->currOffset = 0;
    }else{
        stNode->bottom = st->top;
        if(st->top->bottom == NULL){ //Function
            stNode->currOffset = 16; // 0: return addres , 4: rsp saved, 8: rfp saved, 12: return value
        }else{
            stNode->currOffset = st->top->currOffset; //It happens when there is a scope inside a function or a scope inside another scope
        }
    }
    st->top = stNode;
    
}

void pop(STACK *st){
    hashmap_free(st->top->map);//Free table (map)
    st->top = st->top->bottom; //Update top
    
}

TNODE * findNode(STACKNODE *st, char * identifier){
    
    if(st == NULL)
        return NULL;
    TNODE * tNode = NULL;
    
    tNode = (TNODE*)hashmap_get(st->map, &(TNODE){ .lexical_value.input = identifier });
    if(tNode == NULL){ //If not found go down in stack
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
    value->offset = st->top->currOffset;
    //printf("add: %s offset: %d \n",value->lexical_value.input,value->offset);
    st->top->currOffset += value->size;
    if(st->top->bottom == NULL){
        value->isGlobal = true;
    }else{
        value->isGlobal = false;
    }
    hashmap_set(stNode->map, value);
    //printf("added: %s \n",value->lexical_value.input);
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

    //printf("item created.\n");
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
    //printf("identifier.input: %s\n",identifier.input);
    TNODE * tnode = find(st,identifier.input);
    if(tnode == NULL)
        return true;
    return false;
}

void printErrorDecl(VALOR_T var, TNODE * varDeclared){
    printf("ERR_DECLARED: ");
    switch (varDeclared->category)
    {
    case VARIABLE:
        printf("variavel %s (linha: %d) ja declarada na linha: %d\n", var.input, var.lineNumber,varDeclared->line);
        break;
    case ARRAY:
        printf("array %s (linha: %d) ja declarada na linha: %d\n", var.input, var.lineNumber,varDeclared->line);
        break;
    case FUNCTION:
        printf("funcao %s (linha: %d) ja declarada na linha: %d\n", var.input, var.lineNumber,varDeclared->line);
        break;
    }
}

void printErrorUndecl(VALOR_T var){
    printf("ERR_UNDECLARED: %s (linha: %d) não declarada \n", var.input,var.lineNumber);    
}

int printErrorUse(VALOR_T var, int usingType, TNODE * varDeclared){
    //printf("print error use\n");
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

    //printf("checking use of %s\n",var.input);
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

TNODE * createItemArray(int category, int type, VALOR_T lexical_value, Array * arr){
    //printf("array size: %d\n",arr->size);
    int totalSize = 1;
    for(int i=0;i<arr->used;i++){
        //printf("i: %d = %d \n",i,arr->array[i]);
        totalSize *= arr->array[i];
    }

    

    TNODE * tNode = (TNODE*)malloc(sizeof(TNODE));
    
    tNode->category = category;
    tNode->line = lexical_value.lineNumber;
    tNode->lexical_value = lexical_value;
    tNode->type = type;

    //printf("lexical_value: %s\n",tNode->lexical_value.input);

//Fix size whe is array
    switch(type){
        case INT_TYPE:
            totalSize *= 4;
            break;
        case FLOAT_TYPE:
            totalSize *= 8;
            break;
        case BOOL_TYPE:
            totalSize *= 1;
            break;
    }
    //printf("sizeofarray: %d\n" , totalSize);
    tNode->size = totalSize;




    freeArray(arr);
    //printf("item created.\n");
    return tNode;
}

TNODE * getOffset(STACK *st, char * identifier){
    TNODE * found = find(st,identifier);
    
    return found;
}

void insertFunctionLabel(STACK * st, char * identifier, char * label){
    TNODE * found = find(st,identifier);

    strcpy(found->functionLabel,label);
}

char * getFunctionLabel(STACK * st, char * identifier){
    char * ans = malloc(10);
    char res[9];
    TNODE * found = find(st,identifier);
    strcpy(res,found->functionLabel);
    strcpy(ans,res);
    return ans;
}

void updateSizeOfCurrentFrame(STACK *st, char *identifier, int sizeOfFrame){
    TNODE * found = find(st,identifier);
    found->sizeOfFrame = sizeOfFrame+16; //16 is the prologue
}

char * getPrologue(STACK * st, char * functionToBeCalled){
    char * label = getFunctionLabel(st,functionToBeCalled);
    char * ans = malloc(10000);
    char * tempPC = generateTemp();
    char res[1000] = "i2i rpc => ";
    strcat(res,tempPC);
    strcat(res,"\n");
    strcat(res,"addI ");
    strcat(res, tempPC);
    strcat(res,", 6 => ");
    strcat(res,tempPC);
    strcat(res,"\n");
    strcat(res,"storeAI ");
    strcat(res,tempPC);
    strcat(res," => rsp, 0\n");
    strcat(res,"storeAI rsp => rsp, 4\n");
    strcat(res,"storeAI rfp => rsp, 8\n");
    strcat(res,"jumpI => ");
    strcat(res,label);
    strcat(res,"\n");
    strcpy(ans,res);
    return ans;

}

char * genFrame(STACK * st,char * identifier){
    TNODE * found = find(st,identifier);    
    char frameSize[100];
    sprintf(frameSize,"%d",found->sizeOfFrame); //get Frame size
    char * ans = malloc(10000);
    char * tempPC = generateTemp();
    char res[10000] = "i2i rsp => rfp\n";
    strcat(res,"addI rsp, ");
    strcat(res,frameSize);
    strcat(res, " => rsp\n");
    strcpy(ans,res);
    return ans;

}

char * genEpilogue(){
    char * ans = malloc(1000);
    char * tempPC = generateTemp();
    char * tempRFP = generateTemp();
    char * tempRSP = generateTemp();
    char res[10000] = "loadAI rfp, 0 => ";
    strcat(res,tempPC);
    strcat(res,"\n");
    strcat(res,"loadAI rfp,4 => ");
    strcat(res,tempRSP);
    strcat(res,"\n");
    strcat(res,"loadAI rfp,8 => ");
    strcat(res,tempRFP);
    strcat(res,"\n");
    strcat(res,"i2i ");
    strcat(res,tempRSP);
    strcat(res," => rsp\n");
    strcat(res,"i2i ");
    strcat(res,tempRFP);
    strcat(res," => rfp\n");
    strcat(res,"jump => ");
    strcat(res,tempPC);
    strcat(res,"\n");
    strcpy(ans,res);
    return ans;

}