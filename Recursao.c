#include <stdio.h>
#include <stdlib.h>

int recursao(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        recursao(n-1);
        printf("%d\n", n);
    }
}

int main(void)
{
    recursao(5);
    system("pause");
    return 0;
}