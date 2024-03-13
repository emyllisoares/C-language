//Como descobrir se uma palavra é um palíndromo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[30];
    int i, tam, iguais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    tam--;
    i = 0;

    while(tam >= i){
        if(palavra[i] != palavra[tam])
            iguais++;
        i++;
        tam--;
        
    }

    if(iguais == 0)
        printf("Eh palindromo\n");
    else
        printf("Nao eh palindromo\n");

    return 0;
}

