#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    //vari�veis

    int opcao;
    float total, num1, num2, raiz;

    printf("Menu de op��es: \n\n");

    printf("1 -  Para somar dois n�meros\n");
    printf("2 - Para Raiz quadrada de um n�mero\n");

    printf("Digite a op��o desejada: \n");
    scanf("%d", &opcao);

switch (opcao)
{

case 1:
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);

    total = num1 + num2;

    printf("\nO total da soma �: %.1f", total);

break;

case 2:

    printf("\nDigite o n�mero: ");
    scanf("%f", &num1);

    raiz = sqrt(num1);

    printf("O valor da ra�z quadrada de %.1f, �: %.2f", num1, raiz);
    return 0;
break;
}
}
