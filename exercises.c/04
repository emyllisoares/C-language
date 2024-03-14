/* Programa que pede ao usuário um número inteiro maior que 1
e diz se o número inflormado é primo ou não. */

#include <stdio.h>

int main (){
    int valor, i, divisores = 0, opcao;

    do{
        do{
            printf("Digite um valor maior que 1: ");
            scanf("%d", &valor);
        }while(valor < 2);

        for(i = 1; i <= valor; i++){
            if(valor % i == 0)
                divisores++;
        }

        if(divisores > 2){
            printf("%d nao e primo\n", valor);
        } else {
            printf("%d e primo\n", valor);
        }
        printf("\n1 - Digite outro valor\n2 - Sair\n");
        scanf("%d", &opcao);
    }while(opcao != 2);


    return 0;
}