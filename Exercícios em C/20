/* Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7. */

#include <stdio.h>
#include <time.h>

int main(){

    int tam = 7, i, j;
    int mat[tam][tam];

    srand(time(NULL));

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            mat[i][j] = rand() % 100;
        }
    }

    printf("Matriz:\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal principal:\n");
    for(i = 0; i < tam; i++){
        printf("%d ", mat[i][i]);
    }

    printf("\n\nDiagonal secundaria:\n");
    for(i = 0; i < tam; i++){
        printf("%d ", mat[i][tam - i - 1]);
    }

    printf("\n\n");
    return 0;
}