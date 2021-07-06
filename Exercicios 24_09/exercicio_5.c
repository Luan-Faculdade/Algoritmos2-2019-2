#include <stdio.h>
#include <stdlib.h>

struct casa{
    char nome[100];
    int pot, temp;
    float gasto;
};

void consumo(struct casa c[]);

int quant;

int main(){
    struct casa elet[500];

    int i;

    printf("Quantos eletrodomesticos você possui em casa? - ");
    scanf("%i", &quant);

    for(i=0; i < quant; i++){
    printf("\nInsira o eletrodomestico: ");
    scanf(" %[^\n]", elet[i].nome);

    printf("\nInsira a potencia do eletrodomestico em watts: ");
    scanf("%i", &elet[i].pot);

    printf("\nInsira o tempo de uso do eletrodomestico em horas: ");
    scanf("%i", &elet[i].temp);
    elet[i].gasto = elet[i].pot*elet[i].temp;
    }

    consumo(elet);
    return 0;
}

void consumo(struct casa c[]){
    int dias;

    printf("\nDurante quantos dias os eletrodomesticos foram usados? - ");
    scanf("%i", &dias);

    int i;
    float consTotal=0;
    printf("%f", c[0].gasto);

    for(i = 0; i < quant; i++){
        consTotal += c[i].gasto;
    }

    float pctg = (c[i].gasto/consTotal)*100;

    printf("%.2f", pctg);

    for(i = 0; i < quant; i++){
        printf("\nO eletrodomestico %s e responsavel por %.2f porcento dos gastos eletricos", c[i].nome , pctg);
    }

}