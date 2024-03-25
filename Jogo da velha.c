#include <stdio.h>

#define PURPLE "\033[35m"
#define CYAN "\033[36m"
#define FIM_COR "\033[0m"

char jogo[3][3];

//funcao para inicializar o jogo
void inicializa_jogo(){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            jogo[i][j] = ' ';
    }
}

//funcao para imprimir o jogo
void imprimir(){
    int i, j;
    printf(PURPLE"\n\n\t ====== Jogo da Velha ======\n" FIM_COR);
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
        printf("\n");
        if(i < 2)
            printf("\t-----------\n");
    }
}

//funcao para verificar vitoria por linha
int vitoria_linha(char c){
    int i;
    for(i = 0; i < 3; i++){
        if(jogo[i][0] == c && jogo[i][1] == c && jogo[i][2] == c)
            return 1;
    }
    return 0;
}

//funcao para verificar vitoria por coluna
int vitoria_coluna(char c){
    int i;
    for(i = 0; i < 3; i++){
        if(jogo[0][i] == c && jogo[1][i] == c && jogo[2][i] == c)
            return 1;
    }
    return 0;
}

//funcao para verificar vitoria por diagonal
int vitoria_diagonal(char c){
    if(jogo[0][0] == c && jogo[1][1] == c && jogo[2][2] == c)
        return 1;
    if(jogo[0][2] == c && jogo[1][1] == c && jogo[2][0] == c)
        return 1;
    return 0;
}

//funcao para verificar vitoria
int vitoria(char c){
    if(vitoria_linha(c) || vitoria_coluna(c) || vitoria_diagonal(c))
        return 1;
    return 0;
}

//funcao para verificar empate
int empate(){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(jogo[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

//funcao para jogar
void jogar(){
    int i;
    int linha, coluna;
    char c = 'X';
    for(i = 0; i < 9; i++){
        printf("\n\nJogador %d\n", i % 2 + 1);
        printf("Digite a linha: ");
        scanf("%d", &linha);
        printf("Digite a coluna: ");
        scanf("%d", &coluna);
        if(jogo[linha][coluna] == ' '){
            if(i % 2 == 0)
                c = 'X';
            else
                c = 'O';
            jogo[linha][coluna] = c;
            imprimir();
            if(vitoria(c)){
                printf("\n\nJogador %d venceu!\n", i % 2 + 1);
                break;
            }
            if(empate()){
                printf(PURPLE"\n\nEmpate!\n"FIM_COR);
                break;
            }
        }
        else{
            printf(CYAN"\n\nPosicao ocupada!\n"FIM_COR);
            i--;
        }
    }
}


int main(){

    inicializa_jogo();
    imprimir();
    jogar();

    return 0;
}