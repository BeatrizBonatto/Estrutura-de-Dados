//3- Faça uma função que receba 2 vetores ordenados, denominados A e B. Esta função deve retornar em A a união ordenada dos dois vetores
#include <stdio.h>
#include <stdlib.h>

//int uniao(int A[5], int B[5])
int main(void)
{
    int A[5] = {2, 4, 6, 8, 10};
    int B[5] = {1, 3, 5, 7, 9};

    int uniao[10];
    int i;
    int maior = 0;
    int tamanho_vetor = sizeof(uniao);

    printf("\n");
    for (i = 0; i < 6; i++)
    {
        uniao[i] = A[i];
        
    }
    for (i = 0; i < 6; i++)
    {
        uniao[i+5] = B[i];
    }
    
    for (j = 0; j < tamanho_vetor; j++)
    {
        //achar o maior num
        for (i = 0; i < 11; i++)
        {
            if (maior < uniao[i])
            {
                maior = uniao[i];
            }
        }

        tamanho_vetor-=1;
    }
    
    
    //repetir o processo para o restante -1
    
    printf("\n");
    for (i = 0; i < 11; i++)
    {
        printf("%d ", uniao[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}