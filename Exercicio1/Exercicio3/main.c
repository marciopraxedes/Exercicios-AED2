#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    printf("Seja bem vindo ao programa de reajuste de sal�rios\n");
    int qtd;
    float salAtual, salFinal;

    printf("\n\nDigite o valor do sal�rio atual: ");
    scanf("%f", &salAtual);

    if (salAtual <= 1200)
    {
        salFinal = salAtual * (1+0.1);
    }
    if (salAtual > 1200)
    {
        salFinal = salAtual*(1+0.05);
    }
    printf("Este � o sal�rio final: %.2f", salFinal);


    return 0;
}
