#include <stdio.h>
#include <stdlib.h>
#include <math.h>

tam = 5;
int matriz[5][5];

//procedimento para imprimir a matriz
void imprimir(){
    int i, j;
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}
//função que calcula e retorna a soma de uma linha da matriz

int somaLinha(int linha){
    int c, soma = 0;

    for(c = 0; c < tam; c++)
        soma += matriz[linha][c];
    return soma; 
}
int main(){
    int i, j;

    srand(time(NULL));
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            matriz[i][j] = rand() % 10;
        }
    }

    imprimir(matriz);
    for(i = 0; i < tam; i++){
        printf("Soma da linha %d: %d\n", i, somaLinha(i));
    }

    return 0;
}
