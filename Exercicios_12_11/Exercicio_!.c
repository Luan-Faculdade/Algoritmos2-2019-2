#include <stdio.h>
#include <stdlib.h>

struct dados{
    char texto[100], textofinal[100];
};

int main(){

    int i;
    struct dados d;

    FILE *pFile;
    pFile = fopen("dados.txt", "w");

    if(pFile == NULL){
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }

    printf("Insira algo: ");
    scanf(" %[^\n]", d.texto);   

    for(i=0;i<101;i++){
        if(d.texto[i] == '@'){
            fclose(pFile);
        }else{            
        fprintf(pFile, "%c", d.texto[i]);
        }        
    }

    pFile = fopen("dados.txt", "r");

    if(pFile == NULL){
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }

    for(i=0; i < 101;i++){     
    fscanf(pFile, "%c", &d.textofinal[i]);   
    }
    printf("O texto final e: %s", d.textofinal);
    fclose(pFile);

    return 0;
}