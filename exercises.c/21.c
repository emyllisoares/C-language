/*Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na tela.*/

#include <stdio.h>
#include <time.h>

int main(){

    int tamL = 5, tamC = 4, i, j;
    int mat[tamL][tamC], matT[tamC][tamL];

    srand(time(NULL));

    for (i = 0; i < tamL; i++){
        for (j = 0; j < tamC; j++){
            mat[i][j] = rand() % 100;
        }
    }

    printf("Matriz original:\n");
    for (i = 0; i < tamL; i++){
        for (j = 0; j < tamC; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < tamL; i++){
        for (j = 0; j < tamC; j++){
            matT[j][i] = mat[i][j];
        }
    }

    printf("\nMatriz transposta:\n");
    for (i = 0; i < tamC; i++){
        for (j = 0; j < tamL; j++){
            printf("%2d ", matT[i][j]);
        }
        printf("\n");
    }
    return 0;
}