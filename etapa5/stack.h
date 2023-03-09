#include "hashmap.h"
#include "ast.h"
#include "array.h"
#define LITERAL 1
#define VARIABLE 2
#define ARRAY 3
#define FUNCTION 4


typedef struct stackNode{

    struct hashmap *map;
    struct stackNode * bottom;
    int currOffset;
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
    int offset;

}TNODE;

int table_compare(const void *a, const void *b, void *udata);

uint64_t table_hash(const void *item, uint64_t seed0, uint64_t seed1);

STACK * initStack(); //Initialize stack

void push(STACK *st);//Push scope into stack

void pop(STACK *st); //Pop scope of stack

TNODE * find(STACK *st, char * identifier); //Find a item in the table


TNODE * createItem(int category, int type, VALOR_T lexical_value); //Create item and push into the table

void addItem(STACK *st, TNODE * value); // Insert new symbol in hash table

bool isDecl(STACK *st, VALOR_T identifier); //Check if it's declared

bool isUndecl(STACK *st, VALOR_T identifier); //Check if it's undeclared

void printErrorDecl(VALOR_T var, TNODE * varDeclared); //Prints error whe declared

void printErrorUndecl(VALOR_T var); //Prints error whe undeclared

int printErrorUse(VALOR_T var, int usingType, TNODE * varDeclared); //Print and return error code VARIALBE, ARRAY or FUNCTION

bool checkUse(STACK *st, VALOR_T var, int type); //Checks if it's well used

int getType(STACK * st, VALOR_T identifier);

int getOffset(STACK *st, char * identifier);

TNODE * createItemArray(int category, int type, VALOR_T lexical_value, Array * arr);
