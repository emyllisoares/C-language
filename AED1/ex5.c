#include <stdio.h>

void decimalParaBase4(int n) {
    int i;
    char base4Map[] = {'A', 'C', 'G', 'T'};
    char resultado[32]; 
    int indice = 0;

    if (n == 0) {
        printf("A\n");
        return;
    }

    while (n > 0) {
        int resto = n % 4;       
        resultado[indice++] = base4Map[resto]; 
        n /= 4;                
    }

    for (i = indice - 1; i >= 0; i--) {
        printf("%c", resultado[i]);
    }
    printf("\n"); 
}

int main() {
    int N, i;    
    scanf("%d", &N);
    int numeros[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &numeros[i]);
    }
    
    for (i = 0; i < N; i++) {
        decimalParaBase4(numeros[i]);
    }

    return 0;
}
