/*Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos
 de objetos diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do 
 valor total de suas vendas. O valor unitário dos objetos deve ser informado e 
 armazenado em um vetor; a quantidade vendida de cada objeto deve ficar em outro vetor,
 mas na mesma posição. Crie um programa que receba os preços e as quantidades vendidas,
 armazenando-os em seus respectivos vetores. Depois, determine e mostre:

a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser
 mostrados o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos empatados).
*/

#include <stdio.h>

int main(){
    int i, maisVendido = 0, quantidade[10];
    float vendas = 0, valorParcial, valor[10];

    for(i = 0; i < 10; i++){
        printf("Digite o valor unitario e a quantidade vendida: ");
        scanf("%f %d", &valor[i], &quantidade[i]);
    }

    //Letra a:

    for(i = 0; i < 10; i++){
        valorParcial = valor[i] * quantidade[i];
        printf("Vendido: %d\t", quantidade[i]);
        printf("Valor unitario: %.2f\t", valor[i]);
        printf("Valor total: R$%.2f\n", valorParcial);
        vendas += valorParcial;
    }

    printf("Total de vendas: R$%.2f\n", vendas);
    printf("Comissao paga ao vendodor: R$%.2f\n", vendas * 0.05);

    //Letra b

    for(i = 0 ; i < 10; i++){
        if(quantidade[i > maisVendido]){
            maisVendido = quantidade[i];
        }
    }

    for(i = 0; i < 10; i++){
        if(quantidade[i] == maisVendido){
            printf("Posicao: %d\tValor R$%.2f\n", i, valor[i]);
        }
    }

    return 0;
}