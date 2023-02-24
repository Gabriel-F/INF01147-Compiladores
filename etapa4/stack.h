#include "hashmap.h"
#include "ast.h"
#define LITERAL 1
#define VARIABLE 2
#define ARRAY 3
#define FUNCTION 4

#define INT_TYPE 1
#define FLOAT_TYPE 2
#define CHAR_TYPE 3
#define BOOL_TYPE 4

typedef struct stackNode{

    struct hashmap *map;
    struct stackNode * bottom;

}STACKNODE;

typedef struct stackP{ 

    struct stackNode *top;

}STACK;


typedef struct tableNode{
    int line;
    int category; //Natureza
    int type;
    int size;
    VALOR_T lexical_value;


}TNODE;

int table_compare(const void *a, const void *b, void *udata);

uint64_t table_hash(const void *item, uint64_t seed0, uint64_t seed1);

STACK * initStack();
void push(STACK *st);

void pop(STACK *st);

TNODE * find(STACK *st, char * identifier);


TNODE * createItem(int category, int type, VALOR_T lexical_value);

void addItem(STACK *st, TNODE * value); // Insert new symbol in hash table

bool isDecl(STACK *st, VALOR_T identifier);

void printErrorDecl(VALOR_T var, TNODE * varDeclared);

void printErrorUndecl(VALOR_T var);