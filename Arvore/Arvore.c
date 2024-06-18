#include <stdio.h>
#include <stdlib.h>


struct node {
    int valor;
    struct node* esq;
    struct node* dir;
};
typedef struct node no;
typedef no* arvore;

no* criarNo(int numero) {
    no* n = malloc(sizeof(struct node));

    n->valor = numero;
    n->esq = NULL;
    n->dir = NULL;

    return n;
}


arvore inserir(arvore raiz, int numero) {
    if(raiz == NULL) {
        raiz = criarNo(numero);
        return raiz;
    }
    if(numero > raiz->valor) {
        raiz->esq = inserir(raiz->esq, numero);
    }
    else {
        raiz->dir = inserir(raiz->dir, numero);
    }
    return raiz;
}


no* Busca(arvore raiz, int numero) {
    if (raiz == NULL || raiz->valor == numero) {
        return raiz;
    }
    if (numero < raiz->valor) {
        return Busca(raiz->esq, numero);
    } else {
        return Busca(raiz->dir, numero);
    }
}

void imprimir(arvore raiz) {
    if (raiz != NULL) {
        imprimir(raiz->dir);
        printf("%d ", raiz->valor);
        imprimir(raiz->esq);
    }
}

int main() {
    arvore raiz = NULL;

    raiz = inserir(raiz,10);
    raiz = inserir(raiz,6);
    raiz = inserir(raiz,23);
    raiz = inserir(raiz,3);
    raiz = inserir(raiz,8);
    raiz = inserir(raiz,15);
    raiz = inserir(raiz,28);
    raiz = inserir(raiz,7);
    raiz = inserir(raiz,9);

    printf("Arvore em ordem: ");
    imprimir(raiz);
    printf("\n\n");

    int chave = 15;
    no* resultado = Busca(raiz, chave);
    if (resultado != NULL) {
        printf("Valor %d encontrado na arvore.\n", chave);
    } else {
        printf("Valor %d nao encontrado na arvore.\n", chave);
    }

    return 0;
}
