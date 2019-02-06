#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    printf("Seja bem vindo ao programa de reajuste de salários\n");
    int qtd;
    float salAtual, salFinal;

    printf("\n\nDigite o valor do salário atual: ");
    scanf("%f", &salAtual);

    if (salAtual <= 1200)
    {
        salFinal = salAtual * (1+0.1);
    }
    if (salAtual > 1200)
    {
        salFinal = salAtual*(1+0.05);
    }
    printf("Este é o salário final: %.2f", salFinal);


    return 0;
}
