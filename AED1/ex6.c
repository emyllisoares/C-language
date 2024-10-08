#include <stdio.h>

int main() {
    int N, K, i;
    scanf("%d %d", &N, &K);
    int balas[21] = {0}; 

    for (i = 0; i < N; i++) {
        int tipo;
        scanf("%d", &tipo);
        balas[tipo]++;
    }

    int minEnvelopes = balas[1];
    for (i = 2; i <= K; i++) {
        if (balas[i] < minEnvelopes) {
            minEnvelopes = balas[i]; 
        }
    }

    printf("%d\n", minEnvelopes);

    return 0;
}
