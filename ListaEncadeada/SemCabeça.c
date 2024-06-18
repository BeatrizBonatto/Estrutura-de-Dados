#include <stdio.h>
#include <stdlib.h>

struct node {
  int numero;
  struct node *prox;
};
typedef struct node no;

no *cria_lista(int numero) {
  no *n = malloc(sizeof(struct node));
  n->numero = numero;
  n->prox = NULL;
  return n;
}

void adicionar(no **inicio, no **fim, int numero) {
  no *n = cria_lista(numero);
  if (*inicio == NULL && *fim == NULL) {
    *inicio = n;
    *fim = n;
  } else {
    (*fim)->prox = n;
    *fim = n; // Atualiza o ponteiro para o último elemento
  }
}

int excluir(no **inicio, no **fim) {
  if (*inicio == NULL) {
    // Lista vazia
    printf("\nTodos os valores ja foram somados, sua lista esta vazia\n");
    return 0;
  }

  int valor_excluido = (*inicio)->numero;

  if (*inicio == *fim) {
    // Lista tem apenas um elemento
    free(*inicio);
    *inicio = *fim = NULL;
  } else {
    // Remove o primeiro nó
    no *temp = *inicio;
    *inicio = (*inicio)->prox;
    free(temp);
  }

  return valor_excluido;
}

void imprime(no **inicio, no **fim) {
  no *i;
  for (i = *inicio; i != NULL; i = i->prox) {
    printf("%d\n", i->numero);
  }
}

int main() {
  no *inicio;
  no *fim;
  inicio = NULL;
  fim = NULL;

  int soma = 0;

  adicionar(&inicio, &fim, 5);
  adicionar(&inicio, &fim, 7);
  adicionar(&inicio, &fim, 15);

  // Imprimir lista com todos os itens
  imprime(&inicio, &fim);

  soma = soma + excluir(&inicio, &fim);
  soma = soma + excluir(&inicio, &fim);
  soma = soma + excluir(&inicio, &fim);
  soma = soma + excluir(&inicio, &fim);

  printf("Total soma: %d\n", soma);

  return 0;
}
