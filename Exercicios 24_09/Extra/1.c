#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
    char nome[50], endereco[50];
    int telefone;
};

void organizar(struct Pessoa p[]);

int main(){
    struct Pessoa people[50];
    int i;

    for(i=0;i < 5; i++){
        printf("Insira o nome: ");
        scanf(" %[^\n]", people[i].nome);

        printf("Insira o endereco: ");
        scanf(" %[^\n]", people[i].endereco);

        printf("Insira o telefone: ");
        scanf("%i", people[i].telefone);

        printf("\n");
    }
    

    organizar(people);
    return 0;
}

void organizar(struct Pessoa p[]){
    int i;

    for(i = 0; i < 5; i++){
        printf("\n%s residente da casa localizada em %s tem telefone %i", p[i].nome, p[i].endereco, p[i].telefone);
    }
}