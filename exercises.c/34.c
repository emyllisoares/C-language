//Descobrindo o maior elemento de um vetor com recurssão

#include <stdio.h>
#include <stdlib.h>

int maior(int vetor[], int tam, int i){
    if(tam == 0)
        return vetor[i];
    else{
        if(vetor[tam - 1] > vetor[i])
            return maior(vetor, tam - 1, tam - 1);
        else
            return maior(vetor, tam - 1, i);
    }
}

int main(){
    int vetor[5], i;

    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("O maior numero e: %d\n", maior(vetor, 5, 0));

    return 0;
}
