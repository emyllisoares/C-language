/* O programa lê um vetor N de tamanho 20 e o imprime na tela. Em seguida,
 o 1º elemento é trocado com o último, o 2º com o penúltimo, ... até o 10º 
 com o 11º. Será impresso vetor N modificado.*/

#include <stdio.h>

int main(){

    int i, fim = 19, copia, vetor[20];

    for(i = 0; i < 20; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original: ");
    for(i = 0; i < 20; i++){
        printf("%2d ", vetor[i]);
    }

    for(i = 0; i < 10; i++){
        copia = vetor[i];
        vetor[i] = vetor[fim];  
        vetor[fim] = copia;
        fim--;
    }

    printf("\nVetor modificado: ");
    for(i = 0; i < 20; i++){
        printf("%2d ", vetor[i]);
    }
    return 0;
}