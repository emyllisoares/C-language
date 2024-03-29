#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x, y;
} Ponto2D;

double distancia(Ponto2D a, Ponto2D b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main(){
    int n, i, j;
    printf("Digite a quantidade de pontos: ");
    scanf("%d", &n);
    Ponto2D *p = (Ponto2D *) malloc(n * sizeof(Ponto2D));

    for(i = 0; i < n; i++){
        printf("Digite o ponto %d (x, y): ", i + 1);
        scanf("%lf %lf", &p[i].x, &p[i].y);
    }

    double maiorDistancia = 0;
    Ponto2D a, b;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            double d = distancia(p[i], p[j]);
            if(d > maiorDistancia){
                maiorDistancia = d;
                a = p[i];
                b = p[j];
            }
        }
    }

    printf("Os pontos mais distantes sao: (%.2lf, %.2lf) e (%.2lf, %.2lf)\n", a.x, a.y, b.x, b.y);
    printf("Distancia: %.2lf\n", maiorDistancia);
    free(p);

    return 0;
}