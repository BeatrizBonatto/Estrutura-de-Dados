/*Desenvolva uma função que receba um vetor de inteiros e desenvolva quantos elementos são
números primos*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int v[5];
    int primo[5];
    int contador = 0;
    int i, j;
    int div = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite 5 numeros inteiros: ");
        scanf("%d", v[i]);

       for (j = 1; j < v[i]; j--)
       {
            int tentativa = v[i] % v[i] - 1;

            if (tentativa == 0)
            {
                div+=;
            }            
       }
       if (div <= 2)
       {
            contador+=;
            primo[i] = v[i];
       }  
    }

    for (i = 0; i < ; i++)
    {
        /* code */
    }
        

    system("pause");
    return 0;
}