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

#define ERR_UNDECLARED 10 //2.2
#define ERR_DECLARED 11 //2.2
#define ERR_VARIABLE 20 //2.3
#define ERR_ARRAY 21 //2.3
#define ERR_FUNCTION 22 //2.3
#define ERR_CHAR_TO_INT 31 //2.4
#define ERR_CHAR_TO_FLOAT 32 //2.4
#define ERR_CHAR_TO_BOOL 33 //2.4
#define ERR_CHAR_VECTOR 34 //2.4
#define ERR_X_TO_CHAR 35 //2.4

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

void printErrorUse(VALOR_T var, int usingType, TNODE * varDeclared);

bool checkUse(STACK *st, VALOR_T var, int type); //Checks if it's well used