//2- Faça uma função que receba um vetor de números e diga qual o tamanho da maior sequencia ordenada do vetor
#include <stdio.h>
#include <stdlib.h>

int sequencia(v1[8])
{
    int v1[8] = {7, 3, 5, 8, 10, 2, 20, 30};
    int i, count=1, count_max=1;

     for (i = 0; i < 7; i++)
     {
        if (v1[i] < v1[i+1])
        {
            count+=1;
            if (count > count_max)
            {
                count_max = count;
            }
        }      
        else
        {
            count = 1;
        }
     }

    printf("\n\n%d\n\n", count_max);
     
    system("pause");
    return 0;
}