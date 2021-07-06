#include <stdlib.h>
#include <stdio.h>

int main(){

    char texto[200];
    int i,j;
    FILE *pFile;

    pFile = fopen("frases.txt", "w");

    if(pFile == NULL){
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }

    for(i=0; i<7;i++){
        printf("Insira a frase:");
        scanf(" %[^\n]", texto);
        for(j=0;j<=200;j++){
            fprintf(pFile, "%c", texto[j]);
        }
        fprintf(pFile, "\n");
    }

    fclose(pFile);

    pFile = fopen("frases.txt", "r");

    if(pFile == NULL){
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }

    for(i=0; i<7;i++){
        for(j=0;j<=200;j++){
            fscanf(pFile, "%c", &texto[j]);
        }
    }

    printf("Frases: \n");

    for(i=0;i<7;i++){
        printf("%s", texto);
    }

    fclose(pFile);

    return 0;
}