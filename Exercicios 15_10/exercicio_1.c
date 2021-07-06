#include <stdio.h>
#include <stdlib.h>



int main(){

    int *vet1, *vet2, tam1, tam2;

    printf("Insira o tamanho do vetor 1: ");
    scanf("%i", &tam1);
    printf("Insira o tamanho do vetor 2: ");
    scanf("%i", &tam2);

    vet1 = malloc(tam1 * sizeof(int));
    vet2 = malloc(tam2 * sizeof(int));

    int i;
    printf("Insira os valores do vetor 1: ");
    for(i=0; i < tam1; i++){
        scanf("%i", &vet1[i]);
    }

    printf("Insira os valores do vetor 2: ");
    for(i=0; i < tam2; i++){
        scanf("%i", &vet2[i]);
    }

    tmj(vet1, vet2, tam1, tam2);

    free(vet1); free(vet2);

    return 0;
}

int tmj(int *vet1, int *vet2, int tam1, int tam2){

    int *vet3, tam3;

    if(tam2 < tam1){
        tam3 = tam2;
    }else{
        tam3 = tam1;
    }

    vet3 = malloc(tam3 * sizeof(int));

    int i;
    printf("O valor do vetor 3 e de: ");
   for(i = 0; i < tam3; i++){
        vet3[i] = vet1[i] + vet2[i];
        printf("\n%i ", vet3[i]);
    }

    free(vet3);
}