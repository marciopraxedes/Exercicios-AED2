#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");

    int i, *vetor = (int*) malloc(sizeof(int)), *maior, *menor; /*reservar a memoria para uma varíavel do tipo ponteiro*/

    vetor = (int*) calloc(10, sizeof(int)); /*definir o tamanho da memória reservada (em caso de vetor)*/
    maior = (int*) malloc(sizeof(int));
    menor = (int*) malloc(sizeof(int));

    for (i = 0; i<10 ; i++){
        vetor[i] = 2*i+1;
    }
    printf("Abaixo os números dos vetores:\n");
    for (i = 0; i<10 ; i++){
        printf("%d\t", vetor[i]);
    }

    *menor = vetor[0];
    *maior = vetor[0];

    printf("\n\n");

        for (i = 0; i<10 ; i++){
        if(vetor[i] > *maior ){
            *maior = vetor[i];
        }
        if(vetor[i] < *menor ){
            *menor = vetor[i];
        }
    }

    printf("\n\nMaior: %d", *maior);
    printf("\n\nMenor: %d", *menor);
    return 0;
}
