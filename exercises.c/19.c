/*Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.*/

#include <stdio.h>
#include <time.h>

int main(){

    int tam = 5, i, j;
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

    printf("\n\nDiagonal principal:\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(i == j)
                printf("%d ", mat[i][j]);
            else 
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}