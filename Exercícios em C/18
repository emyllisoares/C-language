/* Dadas duas matrizes A e B 3 x 3, faça um programa para calcular 
  a soma das matrizes e salvar em uma matriz C. Imprima as três matrizes. */ 

#include <stdio.h>

int main(){

    int i, j, matriz1 [3][3], matriz2[3][3], matriz3[3][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da matriz 1 na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da matriz 2 na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\nMatriz 1:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 3:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }


    return 0;
}