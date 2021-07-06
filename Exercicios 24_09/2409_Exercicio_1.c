#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    char nome[50];
    int idade;
    char endereco[50];
};


int main(){
    struct pessoa p;
    printf("\nInsira o seu nome completo: ");
    scanf("%[^\n]", p.nome);
    fflush(stdin);
    printf("\nInsira a sua idade: ");
    scanf("%i", &p.idade);
    fflush(stdin);
    printf("\nInsira o seu endereco: ");
    scanf("%[^\n]", p.endereco);
    fflush(stdin);

    printf("O Sr.(a) %s de %i anos, reside em %s.", p.nome, p.idade, p.endereco);

    return 0;
}