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

void adicionar(no** inicio, no** fim, int numero) {
    struct node* n = cria_lista(numero);
    if (*inicio == NULL && *fim == NULL) {
        *inicio = *fim = n;
    } else {
        (*fim)->prox = n;
        *fim = n; // Atualiza o ponteiro para o último elemento
    }
}

void excluir(no* fim) {
  struct node* lixo = fim->prox;
  
  fim->prox = lixo->prox;
  free(lixo);
}

int main() {
  no* inicio;
  no* fim;
  inicio = fim = NULL;
  
 
  adicionar(&inicio, &fim, 5);
  adicionar(&inicio, &fim, 7);
  adicionar(&inicio, &fim, 15);
 // imprimir(inicio, fim);
  excluir(fim);
  printf("\n");
  //imprimir(inicio, fim);
}