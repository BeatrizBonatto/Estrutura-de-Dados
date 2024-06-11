#include <stdio.h>
#include <stdlib.h>

struct node{
  int numero;
  struct node *prox;
};
typedef struct node no;

no *cria_lista(int numero){
  no *n = malloc(sizeof(struct node));
  n->numero = numero;
  n->prox = NULL;
  return n;
};

void adicionar(no **inicio, no **fim, int numero)
{
  no *n = cria_lista(numero);
  if (*inicio == NULL && *fim == NULL){
    *inicio = n;
    *fim = n;
  }
  else {
    (*fim)->prox = n;
    (*fim) = n; // Atualiza o ponteiro para o último elemento
  }
}

void excluir(no** inicio, no** fim) {
    if (*inicio == NULL) {
        // Lista vazia
        printf("Lista esta vazia\n");
        return;
    }
    if (*inicio == *fim) {
        // Lista tem apenas um elemento
        free(*inicio);
        *inicio = *fim = NULL;
        return;
    }
    // Percorre a lista até o penúltimo nó
    no* temp = *inicio;
    while (temp->prox != *fim) {
        temp = temp->prox;
    }
    // Remove o último nó
    free(*fim);
    *fim = temp;
    (*fim)->prox=NULL;

    printf("\nResultado\nI>-%d F->%d\n", (*inicio)->numero, (*fim)->numero);
}

void imprime(no **inicio, no **fim) {
  no *i;
  for (i=*inicio; i!=NULL; i=i->prox){
    printf("%d\n", i->numero);
  }
}

int main() {
  no *inicio;
  no *fim;
  inicio = NULL;
  fim = NULL;

  adicionar(&inicio, &fim, 5);
  adicionar(&inicio, &fim, 7);
  adicionar(&inicio, &fim, 15);

  //imprimir lista com todos os itens
  imprime (&inicio, &fim);
  //print meu inicio e fim salvos
  printf("\nResultado\nI>-%d F->%d\n", inicio->numero, fim->numero);

  //excluir 15 da lista
  excluir(&inicio, &fim);
  //imprimir lista
  imprime (&inicio, &fim);

  //excluir 7 da lista
  excluir(&inicio, &fim);
  //imprimir lista
  imprime (&inicio, &fim);

  //excluir 7 da lista
  excluir(&inicio, &fim);
  //imprimir lista
  imprime (&inicio, &fim);

  //excluir 7 da lista
  excluir(&inicio, &fim);
  //imprimir lista
  imprime (&inicio, &fim);
}
