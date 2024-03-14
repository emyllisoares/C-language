/*Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e após a ordenação.*/

#include <stdio.h>
#include <time.h>

int main(){

    int i, contador = 0,  troca, vetor[100], copia;

    srand (time(NULL));

    for (i = 0; i < 100; i++){
        vetor[i] = rand() % 1000;
    }

    printf("Vetor desordenado:\n");
    for(i = 0; i < 100; i++){
        printf("%3d ", vetor[i]);
    }

    do{
        troca = 0;
        contador++;
        for (i = 0; i < 99; i++){
            if(vetor[i] > vetor[i+1]){
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = copia;
                troca = 1;
            }
        } 
   }while(troca);

    printf("\nApos a ordenacao: Contador: %d\n", contador);
    for(i = 0; i < 100; i++){
        printf("%3d ", vetor[i]);
    }
    return 0;
}