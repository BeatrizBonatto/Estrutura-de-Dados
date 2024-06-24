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
    if(numero < raiz->valor) {
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

//excluir
no* excluir(arvore raiz) {
    no* pai = NULL;
    no* filho = NULL;

    if (raiz == NULL) {
        //arvore vazia
        return raiz;
    }
    //filhos da raiz null
    if (raiz->esq == NULL && raiz->dir == NULL) {
        raiz = NULL;
        return raiz;
    }
    //só filho a direita
    if (raiz->esq == NULL) {
        pai = raiz;
        filho = raiz->dir;
        while (filho->esq != NULL) {
            pai = filho;
            filho = filho->esq;
        }
        if (pai != raiz) {
           pai->esq = filho->dir;
           filho->dir = raiz->dir;
        }
        filho->esq = raiz->esq;
    }

    else {
        pai = raiz;
        filho = raiz->esq;
        while (filho->dir != NULL) {
            pai = filho;
            //printf("pai: %d ", pai->valor);
            filho = filho->dir;
            //printf("filho: %d\n", filho->valor);
        }
        if(pai != raiz){
            pai->dir = filho->esq;
            filho->esq = raiz->esq;
        }
        filho->dir = raiz->dir;
    }
    free(raiz);
    return filho;
}

void imprimir(arvore raiz) {
    if (raiz != NULL) {
        imprimir(raiz->esq);
        printf("%d ", raiz->valor);
        imprimir(raiz->dir);
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
    raiz = inserir(raiz,16);
    raiz = inserir(raiz,27);
    raiz = inserir(raiz,30);

    raiz = inserir(raiz,10);
    raiz = inserir(raiz,23);
    raiz = inserir(raiz,15);
    raiz = inserir(raiz,28);
    raiz = inserir(raiz,16);
    raiz = inserir(raiz,27);
    raiz = inserir(raiz,30);

    raiz = inserir(raiz,10);

    printf("Arvore em ordem: ");
    imprimir(raiz);
    printf("\n\n");

    int chave = 1;
    no* resultado = Busca(raiz, chave);
    if (resultado != NULL) {
        printf("Valor %d encontrado na arvore.\n", chave);
    } else {
        printf("Valor %d nao encontrado na arvore.\n", chave);
    }

    int novaRaiz = excluir(raiz);
    imprimir(novaRaiz);

    return 0;
}
