#include <stdio.h>
#include <stdlib.h>

struct node {
    int numero;
    struct node* prox;
};

struct node* cria_lista(int numero) {
  struct node* n = malloc(sizeof(struct node));
  n -> numero = numero;
  n -> prox = NULL;
  return n;
};

void adicionar(struct node* n, int numero) {
  struct node* temp = cria_lista(numero);
  //add apos a cabeça!
  temp->prox = n->prox; 
  n->prox = temp;
}

void excluir(struct node* n) {
  struct node* lixo = n->prox;
  
  n->prox = lixo->prox;
  free(lixo);
}

void imprimir(struct node* n) {
  for(n = n-> prox ;n !=NULL ;n = n-> prox){
    printf("%d \n", *n);
  }
}

int main() {
  struct node* n =  malloc(sizeof(struct node));
  n -> prox = NULL;
 
  adicionar(n, 5);
  adicionar(n, 7);
  adicionar(n, 15);
  imprimir(n);
  excluir(n);
  printf("\n");
  imprimir(n);
}