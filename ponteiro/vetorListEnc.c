#include <stdio.h>
#include <stdlib.h>

struct cel
{
    int conteudo;
    struct cel*seg; //sequinte
};
typedef struct cel celula;

celula *insere (celula *lst, int x) {
    celula *novo;
    novo = malloc(sizeof (celula));
    novo->seg = lst->seg;
    lst->seg = novo
}

void main(int argc, char const * argv)
{

    system("pause");
    return 0;
}