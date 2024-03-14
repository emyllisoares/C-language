// Procedimento para imprimir uma string 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int minhaStrlen(char nome[]){
    int tam = 0;

    while(nome[tam] != '\0'){
        tam++;
    }
    return tam; 
}

void imprimirString(char string[]){
    int i = 0;

    while(string[i] != '\0'){
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}

int main(){
    char vetor[20] = "Hello world!";

    printf("strlen: %d\n", strlen(vetor));
    printf("minhaStrlen: %d\n", minhaStrlen(vetor)); 
    imprimirString(vetor);
    
    return 0;
}


