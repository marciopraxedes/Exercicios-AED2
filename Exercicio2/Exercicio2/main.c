#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i, qtd;
    float *vetor, *media;

    media = (int*) malloc(sizeof(int));
    *media = 0;
    printf("Entre com a quantidade de alunos: ");
    scanf("%d", &qtd);

    vetor = (int*) calloc(qtd, sizeof(int)); /*definir o tamanho da memória reservada (em caso de vetor)*/

    for (i=0; i<qtd ; i++){
        printf("Digite a nota: ");
        scanf("%f", &vetor[i]);
        *media += vetor[i];
    }

    printf("\n\nValores dos alunos:\n\n");
    for (i=0; i<qtd ; i++){
        printf("%.1f\t", vetor[i]);
    }

    *media = *media /qtd;

    printf("\n\nA média da turma é: %.1f\n\n", *media);

    return 0;
}
