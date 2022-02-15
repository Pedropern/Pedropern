
#include<stdio.h>
#include<stdlib.h>
#define patas 4 //Definido a constante nas diretivas de preprocessamento.


int main()
{
    int ferraduras, cavalos;
    printf("Digite o numero de cavalos adquiridos:\n");
    scanf("%i", &cavalos);
    ferraduras = cavalos*patas;
    printf("Serão necessaria %i ferraduras.", ferraduras);
    return 0;
}
