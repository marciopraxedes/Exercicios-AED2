#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1, num2, soma, resto;
    printf("Digite o um valor para soma: ");
    scanf("%d", &num1);
    printf("Digite outro valor para soma: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("Resultado da soma é: %d", soma);

    resto = soma %2;

    if (resto == 0){
        printf("\n\nO resultado da soma é um número par.");
    }
    else
    {
        printf("O resultado da soma é um numero ímpar.");
    }



    return 0;
}
