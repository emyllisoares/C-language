/*Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.*/

#include <stdio.h>

int main(){

    int i, j, soma = 0, matriz[5][7];

    for(i = 0; i < 5; i++){
        for(j = 0; j < 7; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 7; j++){
            soma += matriz[i][j];
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma dos elementos da matriz e: %d\n", soma);
    return 0;
}