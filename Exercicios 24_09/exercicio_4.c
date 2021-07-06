#include <stdio.h>
#include <stdlib.h>

struct alunos{
    char nome[50];
    float nota1, nota2, nota3;
};

struct alunos eng[4];

int maiorNotaP1();
int maiorMediaGeral();
int menorMediaGeral();
int aprovar(int aluno);

int main(){

    int i;

    for(i=0;i<4;i++){
        printf("\nInsira o nome do aluno: ");
        scanf("%[^\n]", eng[i].nome);
        fflush(stdin);
      
        printf("Insira a primeira nota do aluno: ");
        scanf("%f", &eng[i].nota1);
        fflush(stdin);
      
        printf("Insira a segunda nota do aluno: ");
        scanf("%f", &eng[i].nota2);
        fflush(stdin);

        printf("Insira a terceira nota do aluno: ");
        scanf("%f", &eng[i].nota3);
        fflush(stdin);
    }

    printf("\nO aluno '%s' obteve a maior nota na P1, com nota %.2f.", eng[maiorNotaP1()].nome, eng[maiorNotaP1()].nota1);
    printf("\nO aluno '%s' obteve a maior media geral, com nota %.2f.", eng[maiorMediaGeral()].nome, ((eng[maiorMediaGeral()].nota1 + eng[maiorMediaGeral()].nota2 + eng[maiorMediaGeral()].nota3)/3));
    printf("\nO aluno '%s' obteve a menor media geral, com nota %.2f.", eng[menorMediaGeral()].nome, ((eng[menorMediaGeral()].nota1 + eng[menorMediaGeral()].nota2 + eng[menorMediaGeral()].nota3)/3));

    int cont=0;
    do{
        int i, resp;

        printf("\n");
        printf("\nLista de alunos:\n");
        for(i=0; i<4;i++){
        printf("\n%i - %s", i+1, eng[i].nome);
        }
        printf("\nEscolha um aluno(digite 0 para encerrar): ");
        scanf("%i", &resp);

        resp = resp-1; 

        switch(resp+1){
            case 0:
            cont = 1;
            break;
            case 1 ... 4:
            if(aprovar(resp) == 1){
                printf("\nO aluno %s foi aprovado com media %.2f.", eng[resp].nome, ((eng[resp].nota1 + eng[resp].nota2 + eng[resp].nota3)/3));
            }else{
                printf("\nO aluno %s foi reprovado com media %.2f.", eng[resp].nome, ((eng[resp].nota1 + eng[resp].nota2 + eng[resp].nota3)/3));
            }
            break;
            default:
                printf("\nAluno nao existente!");
            break;
        }

    }while(cont < 1);

    return 0;
}

int maiorNotaP1(){
    int maiorNota=0, i, alunoMP1;

    for(i=0;i<4;i++){
        if(maiorNota < eng[i].nota1){
            maiorNota = eng[i].nota1;
            alunoMP1 = i;
        }
    }

    return alunoMP1;
}

int maiorMediaGeral(){
    int maiorMedia=0, i, alunoMaMedia;

    for(i=0;i<4;i++){
        int media = ((eng[i].nota1 + eng[i].nota2 + eng[i].nota3)/3);
        if(maiorMedia < media){
            maiorMedia = media;
            alunoMaMedia = i;
        }
    }

    return alunoMaMedia;
}

int menorMediaGeral(){
    int menorMedia=10, i, alunoMeMedia;

    for(i=0;i<4;i++){
        int media = ((eng[i].nota1 + eng[i].nota2 + eng[i].nota3)/3);
        if(menorMedia > media){
            menorMedia = media;
            alunoMeMedia = i;
        }
    }

    return alunoMeMedia;
}

int aprovar(int aluno){
    float media = ((eng[aluno].nota1 + eng[aluno].nota2 + eng[aluno].nota3)/3);

    if(media >= 6.0){
        return 1;
    }else{
    return 0;
    }
}