#include<stdio.h>
#include<stdlib.h>
#define pesoprato 2
#define quilo 12.00

int main()
{
    float valortotal, peso;
    printf("Escreva o peso do prato pronto 'Quilos e gramas':\n");
    scanf("%f",&peso);
    valortotal = (quilo*peso)-pesoprato;
    printf("O valor de sua refeição é R$%.2f.", valortotal);
    return 0;
}
