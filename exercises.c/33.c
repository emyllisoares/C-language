// somar os elementos de um vetor com recursão

#include <stdio.h>
#include <stdlib.h>

int soma(int v[], int tam){
    if(tam == 0)
        return 0;
    else 
        return v[tam - 1] + soma(v, tam-1);
}

int main(){
    int vetor[5], i;

    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Soma: %d\n", soma(vetor, 5));

    return 0;
}
