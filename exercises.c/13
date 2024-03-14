/* Faça um programa que receba a temperatura média de cada mês do ano,
 armazenando-as em um vetor. Ao final, mostre a maior e a menor temperatura 
 do ano e em que mês ocorreram (mostrar o mês por extenso: janeiro,
 fevereiro …). Desconsidere empates. */


#include <stdio.h>

int main() {

    int i, indiceMaior, indiceMenor;
    float temperatura[12], maior = 0, menor = 99;

    for (i = 0; i < 12; i++) {
        printf("Digite a temperatura do mes %d: ", i + 1);
        scanf("%f", &temperatura[i]);
    }

    for (i = 0; i < 12; i++) {
        if (menor > temperatura[i])
        {
            menor = temperatura[i];
            indiceMenor = i;
        }
        if (maior < temperatura[i])
        {
            maior = temperatura[i];
            indiceMaior = i;
        }
    }

    printf("A menor temperatura foi %.2f no mes ", menor);
    switch (indiceMenor){
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;
    case 2:
        printf("Março\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    default:
        break;
    }

    printf("A maior temperatura foi %.2f no mes ", maior);
    switch (indiceMaior){
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;
    case 2:
        printf("Março\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    default:
        break;
    }
    return 0;
}