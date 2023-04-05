/*
  Função principal para realização da E3.
  Não modifique este arquivo.
*/
#include <stdio.h>
#include "stack.h"
extern int yyparse(void);
extern int yylex_destroy(void);

void *arvore = NULL;
void *stack = NULL;
Array arr;
void exporta (void *arvore);
void imprimeCodigo (void *arvore);
void generateAsm(void *arvore);
void libera (void *arvore);

int main (int argc, char **argv)
{
  stack = initStack();
  initArray(&arr,1);
  push(stack);
  int ret = yyparse(); 

  //imprimeCodigo(arvore);
  generateAsm(arvore);
  //exporta (arvore);
  libera(arvore);


  arvore = NULL;
  yylex_destroy();
  //printf("retorno: %d\n",ret);
  return ret;
}