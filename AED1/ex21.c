//Banco inteligente

#include <stdio.h>

int main()
{
    int S, N2, N5, N10, N20, N50, N100, i, j, k, l, m, n, count = 0;
    scanf("%d", &S);
    scanf("%d %d %d %d %d %d", &N2, &N5, &N10, &N20, &N50, &N100);
    for (i = 0; i <= N2; i++)
    {
        for (j = 0; j <= N5; j++)
        {
            for (k = 0; k <= N10; k++)
            {
                for (l = 0; l <= N20; l++)
                {
                    for (m = 0; m <= N50; m++)
                    {
                        for (n = 0; n <= N100; n++)
                        {
                            if (i * 2 + j * 5 + k * 10 + l * 20 + m * 50 + n * 100 == S)
                            {
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
