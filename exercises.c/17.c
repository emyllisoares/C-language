/*Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
    a) some cada uma das linhas armazenando o resultado em um vetor;
    b) some cada uma das colunas armazenando o resultado em um vetor;
    c) Imprima a matriz e os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.
*/

#include <stdio.h>
#include <time.h>

int main(){

    int i, j, matriz[5][10], soma, somaLinhas[5], somaColunas[10];

    srand(time(NULL));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    //letra a
    for(i = 0; i < 5; i++){
        soma = 0;
        for(j = 0; j < 10; j++){
            soma += matriz[i][j];
        }
        somaLinhas[i] = soma;
    }

    //letra b
    for(j = 0; j < 10; j++){
        soma = 0;
        for(i = 0; i < 5; i++){
            soma += matriz[i][j];
        }
        somaColunas[j] = soma;
    }

    //letra c
    printf("\nMatriz:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma das linhas:\n");
    for(i = 0; i < 5; i++){
        printf("Linha %d: %d\n", i, somaLinhas[i]);
    }

    printf("\nSoma das colunas:\n");
    for(j = 0; j < 10; j++){
        printf("Coluna %d: %d\n", j, somaColunas[j]);
    }

    return 0;
}