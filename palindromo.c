#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char frase[50];
    char frase_inversa[50];
    int tamanho = sizeof(frase);
    int i;
    
    printf("Entre com a frase:");
    scanf("%c", &frase[50]);
    
    for (i = 0; i < tamanho; i++)
    {
        frase_inversa[i] = frase[tamanho];
        tamanho++;
    }
    
    if (frase_inversa == frase)
    {
        printf("verdadeiro");
    }
    else
    {
        printf("false");
    }
    
    return 0;
}