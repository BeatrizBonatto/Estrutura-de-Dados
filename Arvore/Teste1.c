struct cel {
    int chave
    int conteudo;
    struct cel *esq;
    struct cel *dir;
};
typedef struct cel no;

void Erd (arvore r) {
    if (r != NULL) {
        Erd (r -> esq);
        printif("%d \n", r -> conteudo);
        Erd (r -> dir);
    }
}

no *Busca (arvore r, int k){
    if (r == NULL || r ->cahve == k){
        return r;
    }
    if( r->chave > k) {
        return Busca (r->esq, k);
    } 
    else {
        reutn Busca(r->dir,k);
    }
} 

// e-r-d  esquerda menor que a raiz e direita maior 
// d-r-e  direita menor que a raiz e esquerda maior 

/* 
a remoção só remove da raiz!!!
para ter então uma nova raiz, há duas opções:
     o maior item dentre os meus menores ((maior da esquerda)
     o menor item entre os meus maiores (menor da direita)

    busca com p-pai e f-filho
    EX:"esq de p -> f filho"
achando o filho o r deve apontar então para ele
e free no meu antigo r
*/