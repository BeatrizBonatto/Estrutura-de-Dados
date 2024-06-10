/*Faça uma função que calcule a número binário a partir de um decimal*/

#include <stdio.h>
#include <stdlib.h>

int binario(int n)
{
    int resto;

    if (n>0)
    {
        resto = n % 2;
        binario(n/2);
        printf("%d", resto);
    }
}

int main(void)
{
    binario(5);
    system("pause");
    return 0;
}

/*teste de mesa com x=6
	
int rec (int x){

	if ((x == 0) || (x == 1)) return x;
		else return rec(x - 1) * x + rec(x - 2);

}*/