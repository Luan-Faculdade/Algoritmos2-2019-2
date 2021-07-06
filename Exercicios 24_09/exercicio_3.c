#include <stdio.h>
#include <stdlib.h>

struct alunos{
    char nome[50];
    int ra;
    char curso[50];
};

int main(){
    struct alunos a[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("\nInsira o nome do aluno: ");
        scanf("%[^\n]", a[i].nome);
        fflush(stdin);
        printf("Insira o RA do aluno: ");
        scanf("%i", &a[i].ra);
        fflush(stdin);
        printf("Insira o curso do aluno: ");
        scanf("%[^\n]", a[i].curso);
        fflush(stdin);
    }

    printf("\n");

    for(i = 0; i < 5; i++){
        printf("\nAluno: %s   RA: %i      Curso: %s", a[i].nome, a[i].ra, a[i].curso);
    }

    return 0;
}