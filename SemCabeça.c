#include <stdio.h>
#include <stdlib.h>

struct node {
    int numero;
    struct node* prox;
};
typedef struct node no;

struct node* cria_lista(int numero) {
  struct node* n = malloc(sizeof(struct node));
  n -> numero = numero;
  n -> prox = NULL;
  return n;
};

void adicionar(no* inicio, no* fim, int numero) {
  struct node* n = cria_lista(numero);
  //inicio e fim apontam igual se == NULL
  if(inicio == NULL && fim == NULL) {
    n -> numero = numero;
    inicio = fim = n;
  }
  fim = n;
}

/*void excluir(struct node* n) {
  struct node* lixo = n->prox;
  
  n->prox = lixo->prox;
  free(lixo);
}*/

/*void imprimir(struct node* n) {
  for(n = n-> prox ;n !=NULL ;n = n-> prox){
    printf("%d \n", *n);
  }
}*/

int main() {
  no* inicio;
  no* fim;
  inicio = fim = NULL;
  
 
  adicionar(inicio, fim, 5);
  adicionar(inicio, fim, 7);
  adicionar(inicio,fim, 15);
  /*imprimir(n);
  excluir(n);
  printf("\n");*/
  //imprimir(n);
}
