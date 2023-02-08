#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#ifndef AST_H
#define AST_H

#define NUM_CHILDREN 3

#define LIST_ELEM 500
#define TIPO_INT 501
#define TIPO_FLOAT 502
#define TIPO_BOOL 503
#define TIPO_CHAR 504
#define IDENTIFICADOR 505
#define LITERAL_INT 506
#define LISTA_DIM 507
#define VAR_MULT 508
#define DEC_VAR_GLOBAL 509
#define LISTA_IDENTIFICADOR 510
#define DEC_FUNCAO 511
#define CABECALHO 512
#define PARAMETROS_ENTRADA 513
#define PARAMETRO 514
#define LISTA_COMANDOS 515 
#define DEC_VAR_LOCAL 516
#define IDENT_LOCAL 517
#define LISTA_IDENT_LOCAL 518 
#define ATRIBUICAO 519
#define LISTA_ARG 520
#define ARG_ENTRADA 521
#define IF 522
#define IF_ELSE 523
#define WHILE 524
#define RETURN 525
#define CHAMADA_FUNC 526
#define EXP_OR 527
#define EXP_AND 528
#define EXP_EQ 529
#define EXP_NE 530
#define EXP_GE 531
#define EXP_LE 532
#define EXP_LT 533
#define EXP_GT 534
#define BIN_PLUS 535
#define BIN_MINUS 536
#define BIN_PERCENT 537
#define BIN_DIV 538
#define BIN_MULT 539
#define UN_MINUS 540
#define UN_NEG 541
#define IDENT_EXP 542
#define LISTA_EXP 543
#define DEC_FUNC 544
#define INIC_VAR 545

#define VAL_IDENTIFICADOR 1
#define VAL_LIT_INT 2
#define VAL_LIT_FLOAT 3
#define VAL_LIT_BOOL 4
#define VAL_LIT_CHAR 5
#define VAL_PR 6
#define VAL_OP_COMP 7
#define VAL_SPEC 8


//void exporta(void *);
union TypeData{
    int valInt;
    float valFloat;
    bool valBool;
    char valChar;
    char * valString;
};

typedef struct valor_t{
    int lineNumber;
    int type;
    union TypeData tokenValue;
}VALOR_T;

struct astNode;

typedef struct astChildren{
    struct astNode * child;
    struct astChildren * nextChild;
} ASTCHILDREN;

typedef struct astNode{
    int type;
    VALOR_T * value;
    struct astChildren * children;
} ASTNODE;

void add_child(ASTNODE ** root, ASTNODE ** child);

ASTNODE * create_node(VALOR_T * value, int type);

ASTNODE * create_leaf(VALOR_T * value , int type);

VALOR_T * create_value(int type, char * text, int lineNumber);

void printLabels(void * node);

void printAst(ASTNODE * node);

#endif