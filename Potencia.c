/*Faça uma função recursiva que calcule a potência de dois números inteiros*/

#include <stdio.h>
#include <stdlib.h>

int potencia(int a, int b)
{
    printf("%d", a);
    if (b > 1)
    {
        
        potencia(, (b-1));
    }
}

int main(void)
{
    potencia(2, 3);
    system("pause");
    return 0;
}