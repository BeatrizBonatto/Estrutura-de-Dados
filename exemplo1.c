#include <stdio.h>
#include <stdlib.h>

// A função abaixo recebe um número n >= 1 e um vetor v * e devolve o valor de um elemento máximo de v[0..n-1].
// v = [10, 7, 15, 2, 4]
// n = 5

int Max (int v[], int n) 
{
    int i, x = v[0];
    for (i = 1; i < n; i++)
    {
        if(x < v[i])
        {
            x = v[i];
        }
    }
    system("pause");
    return x;
}

int main(void)
{
    int vetor = {10, 7, 15, 2, 4};
    int numeros = 5;

    Max(vetor, numeros);

    printf("%d", Max);

    system("pause");
    return 0;
}