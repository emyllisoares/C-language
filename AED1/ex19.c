//Conversão binário para decimal

#include <stdio.h>

int main() {
    int k, i, j, n, bin[1000];
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &n);
        j = 0;
        while (n > 0) {
            bin[j] = n % 2;
            n = n / 2;
            j++;
        }
        for (j = j - 1; j >= 0; j--) {
            printf("%d", bin[j]);
        }
        printf("\n");
    }
    return 0;
}