//Como encontrar o maior e o menor entre três números.

#include <stdio.h>

int main(){
    int a, b, c, maior, menor; 

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    menor = a;
    maior = a;

    if(menor > b)
        menor = b;
    if (menor > c)
        menor = c;

    if(maior < b)
        maior = b;
    if(maior < c)
        maior = c;
    
    printf("Menor numero: %d\nMaior numero: %d\n", menor, maior);
    
    return 0;
}