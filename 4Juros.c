/*Calculas o valor do juros composto: Desenvolva uma função que calcule o valor final
de um investimento com base em uma taxa de juros e um periodo de tempo*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valor;
    float taxa;
    int tempo;
    float investimento;
    float valor_final;

    printf("Entre com o valor a ser investido: RS");
    scanf("%f", &valor);

    printf("Entre com a taxa de juros(formato 0,00): ");
    scanf("%f", &taxa);

    printf("Entre com o tempo a ser investido (em meses): ");
    scanf("%d", &tempo);
    
    investimento = valor * pow((1+taxa), tempo);
    valor_final = valor + investimento;

    printf("\nO valor ao final do periodo investido foi de RS%.2f\n\n", valor_final);

    system("pause");
    return 0;
}