/*Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma matriz 4 x 4.
*/

#include <stdio.h>
#include <time.h>

int main(){

    int tam = 4;
    int i, j, matriz[tam][tam];

    srand(time(NULL));

    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    printf("\nMatriz gerada:\n");
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nAbaixo da diagonal principal:\n");
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            if(i > j){
                printf("%2d ", matriz[i][j]);
            }
            else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}