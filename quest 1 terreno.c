#include<stdio.h>
#include<stdlib.h>

int main()
{
    float largura, cumprimento, area;
    printf("Digite a largura do lote:\n");
    scanf("%f", &largura);
    printf("Digite o cumprimento do lote:\n");
    scanf("%f", &cumprimento);
    area = largura*cumprimento; //Poderia ser calculado dentro da função printf.
    printf("A area do lote = %.2f", area);
    return 0;

}


