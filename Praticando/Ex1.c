//1) Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N.
#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
  //int x;
    if (n > 0)
    {
        n *= fatorial(n-1);
    }
    else
    {
      return 1; 
    }
    return n;
}

int main(void)
{
    fatorial(5);
    system("pause");
    return 0;
}