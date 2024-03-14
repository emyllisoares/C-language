#include <stdio.h>
#include <stdlib.h>

#define PURPLE "\033[35m"
#define RED "\033[31m"
#define FIM_COR "\033[0m"

int main(){

    // Estrutura de dados
    int i, j, linha, coluna, jogador, ganhou, jogadas, opcao;
    char jogo[3][3];

    do{ // deseja jogar novamente?
        jogador = 1;
        ganhou = 0;
        jogadas = 0;
        // como inicializar a matriz?
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                jogo[i][j] = ' ';
            }
        }

        do{ // repete até alguém ganhar ou atingir 9 jogadas
            // imprimir jogo
            printf("\n\n\t 0   1   2\n\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    if(j == 0)
                        printf("\t");
                    printf(" %c ", jogo[i][j]);
                    if(j < 2)
                        printf("|");
                    if(j == 2)
                        printf("  %d", i);
                }
                if(i < 2)
                    printf("\n\t-----------");
                printf("\n");
            }

            // ler coordenadas
            do{
                printf(PURPLE"\n\JOGADOR 1 = 0\nJOGADOR 2 = X\n"FIM_COR);
                printf("\nJOGADOR %d: Digite a linha e a coluna que deseja jogar: ", jogador);
                scanf("%d%d", &linha, &coluna);
            }while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ');

            // salvar coordenadas
            if(jogador == 1){
                jogo[linha][coluna] = '0';
                jogador++;
            }
            else{
                jogo[linha][coluna] = 'X';
                jogador = 1;
            }
            jogadas++;

            // alguém ganhou por linha
            if(jogo[0][0] == '0' && jogo[0][1] == '0' && jogo[0][2] == '0' ||
               jogo[1][0] == '0' && jogo[1][1] == '0' && jogo[1][2] == '0' ||
               jogo[2][0] == '0' && jogo[2][1] == '0' && jogo[2][2] == '0'){
                printf(PURPLE"\nO jogador 1 venceu!\n"FIM_COR);
                ganhou = 1;
            }

            if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
               jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
               jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
                printf(PURPLE"\nO jogador 2 venceu!\n"FIM_COR);
                ganhou = 1;
            }

            // alguém ganhou por coluna
            if(jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' ||
               jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0' ||
               jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0'){
                printf(PURPLE"\nO jogador 1 venceu!\n"FIM_COR);
                ganhou = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
               jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
               jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
                printf(PURPLE"\nO jogador 2 venceu!\n"FIM_COR);
                ganhou = 1;
            }

            // alguém ganhou na diagonal principal
            if(jogo[0][0] == '0' && jogo[1][1] == '0' && jogo[2][2] == '0'){
                printf(PURPLE"\nO jogador 1 venceu!\n"FIM_COR);
                ganhou = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){
                printf(PURPLE"\nO jogador 2 venceu!\n"FIM_COR);
                ganhou = 1;
            }

            // alguém ganhou na diagonal secundária
            if(jogo[0][2] == '0' && jogo[1][1] == '0' && jogo[2][0] == '0'){
                printf(PURPLE"\nO jogador 1 venceu!\n"FIM_COR);
                ganhou = 1;
            }

            if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X'){
                printf(PURPLE"\nO jogador 2 venceu!\n"FIM_COR);
                ganhou = 1;
            }
        }while(ganhou == 0 && jogadas < 9);

        // imprimir jogo
        printf("\n\n\t 0   1   2\n\n");
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                if(j == 0)
                    printf("\t");
                printf(" %c ", jogo[i][j]);
                if(j < 2)
                    printf("|");
                if(j == 2)
                    printf("  %d", i);
            }
            if(i < 2)
                printf("\n\t-----------");
            printf("\n");
        }

        if(ganhou == 0)
            printf(RED"\nDeu Velha! O jogo finalizou sem ganhador!\n"FIM_COR);

        printf(PURPLE"\nDigite 1 para jogar novamente: \n"FIM_COR);
        scanf("%d", &opcao);
    }while(opcao == 1);

    return 0;
}
