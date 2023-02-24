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
void exporta (void *arvore);
void libera (void *arvore);

int main (int argc, char **argv)
{
  stack = initStack();
  push(stack);
  int ret = yyparse(); 
  exporta (arvore);
  libera(arvore);

 
  

  arvore = NULL;
  yylex_destroy();
  return ret;
}