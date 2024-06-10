//1- faça um programa que imprima todas as letras do alfabeto (sem digitar todas as letras)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char letra;
    letra = 'A';
    int i;

    printf("\n");
    for (i = 0; i < 26; i++)
    {
        printf("%c ", letra);
        letra+=1;
    }
    printf("\n");

    system("pause");
    return 0;
}