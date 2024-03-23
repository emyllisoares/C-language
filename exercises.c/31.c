//Função potência recursiva que retorne o valor de x elevado n  

#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int n){
    if(n == 0)
        return 1;
    else 
        return x * potencia(x, n - 1); 
}

int main(){
    int n, x;

    printf("\nDigite um valor para X e N: ");
    scanf("%d%d", &x, &n);

    printf("Resultado de %d elevado a %d: %d\n", x, n, potencia(x, n));

    return 0;
}
