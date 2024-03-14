//Calculando o fatorial de um número

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if (n == 0 || n == 1)
        return 1; // retorna 1 pois 0! e 1! = 1
    else {
        return n * fatorial(n - 1); 
    }
}

int main(){

    int n;
    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    printf("O fatorial de %d e: %d\n", n, fatorial(n));
    
    return 0;
}
