#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota1, nota2, nota3, media;

    printf("Tenha em mãos as notas dos alunos.\n\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota2);

    media = (nota1+nota2+nota3)/3;

    printf("\n\nA média é: %.1f\n\n", media);

    if (media > 0.0 && media <4.0)
    {
        printf("\n\nReprovado");
    }
    if (media > 4.0 && media <6.0)
    {
        printf("\n\nExame Especial");
    }
    if (media > 6.0 && media <10.0)
    {
        printf("\n\nAprovado");
    }
    return 0;
}
