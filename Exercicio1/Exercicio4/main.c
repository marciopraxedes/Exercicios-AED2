#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    //variáveis

    int opcao;
    float total, num1, num2, raiz;

    printf("Menu de opções: \n\n");

    printf("1 -  Para somar dois números\n");
    printf("2 - Para Raiz quadrada de um número\n");

    printf("Digite a opção desejada: \n");
    scanf("%d", &opcao);

switch (opcao)
{

case 1:
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    total = num1 + num2;

    printf("\nO total da soma é: %.1f", total);

break;

case 2:

    printf("\nDigite o número: ");
    scanf("%f", &num1);

    raiz = sqrt(num1);

    printf("O valor da raíz quadrada de %.1f, é: %.2f", num1, raiz);
    return 0;
break;
}
}
