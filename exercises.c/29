// Converter string em MAIÚSCULO ou MINÚSCULO com toupper e tolower

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//procedimento que converte uma string para maiuscula
void converterMaiucusla(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0'; //finalizando a string
}

//procedimento que converte uma string para minuscula
void converterMinuscula(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = tolower(s1[i]);
        i++;
    }
    s2[i] = '\0'; 
}

int main(){
    char string1[50];
    char string2[50]; 

    printf("Digite uma string: ");
    fgets(string1, 50, stdin);

    converterMaiucusla(string1, string2);
    printf("\nEm maiuscula: %s\n", string2);

    converterMinuscula(string1, string2);
    printf("Em minuscula: %s\n", string2);
    return 0;
}
