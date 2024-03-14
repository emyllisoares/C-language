/*Este programa converte a quantidade de segundos inseridas pelo 
usuário e imprime na tela a conversão para horas, minutos e segundos.
*/

#include <stdio.h>

int main(){

    int segundos, h, m, s, resto;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}