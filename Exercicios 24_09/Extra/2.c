#include <stdio.h>
#include <stdlib.h>

struct alunos{
    char nome[60];
    int matricula;
    float mediaf;
};

int main(){
    struct alunos a[10];
    int i, aprovados[10], reprovados[10];

    for(i = 0; i < 10; i++){
        printf("Insira o nome do aluno: ");
        scanf(" %[^\n]", a[i].nome);

        printf("Insira a matricula do aluno: ");
        scanf("%i", &a[i].matricula);

        printf("Insira a media do aluno: ");
        scanf("%f", &a[i].mediaf);

        printf("\n");        
    }

    printf("\nAPROVADOS\n");

    for(i=0;i<10;i++){
        if(a[i].mediaf <= 6){
            aprovados[i] = -1;
            reprovados[i] = i;
        }else{
            aprovados[i] = i;
            reprovados[i] = -1;
        }

        if(aprovados[i] != -1){
            printf("Nome: %s - Matricula: %i - Media: %.2f", a[aprovados[i]].nome, a[reprovados[i]].matricula, a[reprovados[i]].mediaf);
        }
    }

    printf("\nReprovados\n");

    for(i=0;i<10;i++){
        if(reprovados[i] != -1){
            printf("Nome: %s - Matricula: %i - Media: %.2f", a[reprovados[i]].nome, a[reprovados[i]].matricula, a[reprovados[i]].mediaf);
        }
    }
    
    return 0;
}