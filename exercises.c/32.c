//somatório de 1 até n com recursão

#include <stdio.h>
#include <stdlib.h>

int soma(int n){
    if(n == 0)
        return 0;
    else 
        return n + soma(n - 1);
}


int main(){
    int n;

    printf("\nDigite um valor para N: ");
    scanf("%d", &n);

    printf("Soma de 1 ate %d: %d\n", n, soma(n));

    return 0;
}
