/*Este programa lê as coordenadas (X,Y) de uma quantidade indeterminada 
de pontos no sistema cartesiano. Para cada ponto será escrito o quadrante a 
que ele pertence. O algoritmo será encerrado quando pelo menos uma das 
coordenadas for NULA (nesta situação sem escrever mensagem alguma).*/

#include <stdio.h>

int main(){
    int x, y;

    do {
        printf("Digite x e y: ");
        scanf("%d%d", &x, &y);

        if(x != 0 & y != 0) {
            if(x > 0 & y > 0)
                printf("Primeiro Quadrante\n");
            else if(x < 0 & y > 0)   
                printf("Segundo Quadrante\n");
            else if (x < 0 & y < 0)
                printf("Terceiro Quadrante\n");
            else 
                printf("Quarto Quadrante\n");
        }
    } while(x != 0 & y != 0);
    return 0;
}