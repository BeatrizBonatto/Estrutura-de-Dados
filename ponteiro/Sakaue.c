#include <stdio.h>
#include <stdlib.h>

struct cel {
    int conteudo;         
    struct cel *seg; // seguinte
};
typedef struct cel celula;
 
void insere (celula *lst, int x){
    celula *novo;
    novo = malloc (sizeof(celula));
    novo->conteudo = x;
    novo->seg = lst->seg;
    lst->seg = novo;
}
 
void main(int lista, char const *lista[])
{
    celula *lista;
 
    lista = malloc (sizeof(celula));
    //lista->conteudo = 30;
    lista->seg = NULL;
 
    lista = insere (lista,40);
    lista = insere (lista,90);
 
    return 0;
}