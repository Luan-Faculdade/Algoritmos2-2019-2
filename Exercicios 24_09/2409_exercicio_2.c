#include <stdlib.h>
#include <stdio.h>

struct agenda{
    int hora, min, sec;
    int dia, mes, ano;
    char desc[100];
};

int main(){
    struct agenda ag;

    do{
    printf("Insira a data do seu compromisso (xx yy zz): ");
    scanf("%i %i %i", &ag.dia, &ag.mes, &ag.ano);
    }while(ag.dia > 31 || ag.mes > 12);

    do{
    printf("Insira a hora do compromisso(xx yy zz): ");
    scanf("%i %i %i", &ag.hora, &ag.min, &ag.sec);
    fflush(stdin);
    }while(ag.hora > 23 || ag.min > 59 || ag.sec > 59);

    printf("Insira uma descricao para seu compromisso: ");
    scanf("%[^\n]", ag.desc);

    printf("Voce tem o compromisso '%s' no dia %i/%i/%i as %i:%i:%i", ag.desc, ag.dia, ag.mes, ag.ano, ag.hora, ag.min, ag.sec);

    return 0;
}