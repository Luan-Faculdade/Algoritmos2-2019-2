#include <stdio.h>
#include <stdlib.h>

int main(){

    int N;
    float *vet1;

    printf("Insira um numero de posicoes do vetor 1: ");
    scanf("%i", &N);

    vet1 = malloc(N * sizeof(int));

    int i;
    printf("Insira os valores do vetor 1: ");
    for(i=0; i < N; i++){
        scanf("%f", &vet1[i]);
    }

    imprimirVetor(vet1, N);

    free(vet1);
    return 0;
}

void imprimirVetor(float *array, int tam){
    int i;

    printf("O valor do vetor 1 e de: ");
    for(i=0; i<tam; i++){
        printf("\n%.2f", array[i]);
    }

    free(array);
}