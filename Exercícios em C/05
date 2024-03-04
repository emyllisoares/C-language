/* Programa que calcula a média salarial de uma empresa, pedindo ao 
usuário a quantidade de funcionários e o salário de cada um. Ao final,
 o programa deve imprimir a média dos salários informados, o maior e o menor salário.
*/

#include <stdio.h>

int main(){
    int funcionarios, i;
    float salario, totalSalarios = 0, maior = 0, menor = 999999;

    printf("Quantos funcionarios a empresa possui? ");
    scanf("%d", &funcionarios);

    for(i = 1; i <= funcionarios; i++){
        printf("%d salario: ", i);
        scanf("%f", &salario);

        totalSalarios += salario;
        if(maior > salario){
            menor = salario;
        }
        if(maior < salario){
            maior = salario;
        }
    }
    printf("Salario medio R$%.2f\n", totalSalarios/funcionarios);
    printf("Maior salario R$%.2f\n", maior);
    printf("Menor salario R$%.2f\n", menor);

    return 0;
}