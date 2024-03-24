//Invertendo a posição dos elementos de um vetor com recursão

#include <stdio.h>
#include <stdlib.h>


void imprimir(int v[], int tam){
    if(tam == 1)
        printf("%d ", v[0]);
    else{
        imprimir(v, tam - 1);
        printf("%d ", v[tam - 1]);
    }
}

void inverter(int v[], int inicio, int fim){
    int aux;
    if(inicio < fim){
        aux = v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;
        inverter(v, inicio + 1, fim - 1);
    }
} 

int main(){
    int vetor[5], i;

    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    imprimir(vetor, 5);
    inverter(vetor, 0, 4);
    printf("\n");
    imprimir(vetor, 5);
    return 0;
}
