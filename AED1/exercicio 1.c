#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int * v = NULL;
    int i = 0, j = 0, repetido;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));
    if (!v) exit(0);

    int numeros[n];
    for(i = 0; i < n; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
        repetido = 0;
        for(j = 0; j < i; j++){
            if(numeros[i] == numeros[j]){
                repetido = 1;
                break;
            }
        }
        if(repetido){
            printf("Numero repetido. Por favor, digite novamente.\n");
            i--;
        }
    }

    printf("Conjunto valido: ");
    for(i = 0; i < n; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");

    free(v);

    return 0;

}