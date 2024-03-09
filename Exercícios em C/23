/*Dada uma matriz 4 x 4 faça um programa que diga se ela é um quadrado mágico ou não.
 A soma de todas as linhas, colunas, diagonal principal e secundária devem ser iguais.
*/

#include <stdio.h>

#define TAM 4
int main(){

    int i, j, total, soma, falha = 0;
    int  matriz[TAM][TAM] = {16,3,2,13,5,10,11,8,9,6,7,12,4,15,14,1};

    soma = 0;
    for (i = 0; i < TAM; i++){
        soma += matriz[i][i];
    }
    printf("Soma da diagonal principal: %d\n", soma);
    total = soma;

    soma = 0;
    for(i = 0; i < TAM; i++) {
        soma += matriz[i][TAM - 1 - i];
    }
    printf("Soma da diagonal secundaria: %d\n", soma);

    if(total != soma)
        printf("Nao e um quadrado mágico\n");
    
    for(i = 0; i < TAM; i++){
        soma = 0;
        for(j = 0; j < TAM; j++)
            soma += matriz[i][j];
        printf("Soma da linha %d: %d\n", i, soma);

        if(total != soma){
            printf("Nao e um quadrado mágico\n");
            falha++;
        }
    }

    for (j = 0; j < TAM; j++){
        soma = 0;
        for(i = 0; i < TAM; i++)
            soma += matriz[i][j];
        printf("Soma da coluna %d: %d\n", j, soma);

        if(total != soma){
            printf("Nao e um quadrado mágico\n");
            falha++;
        }
    }

    if(falha){
        printf("Nao e um quadrado mágico\n");
    } else {
        printf("E um quadrado mágico\n");
    }


    return 0;
}