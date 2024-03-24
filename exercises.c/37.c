//Tempo de execução entre Fibonacci RECURSIVO e ITERATIVO

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long int fiboR(int n){
    if(n == 1)
        return 0;
    else{
        if(n == 2)
            return 1;
        else
            return fiboR(n-1) + fiboR(n-2);
    }
}

long long int fiboI(int n){
    long long int a = 0, b = 1, c, i = 2;
    if(n == 1)
        return a;
    else {
        if(n == 2)
            return b;
        else{
            while(i < n){
                c = a + b;
                a = b;
                b = c;
                i++;
            }
            return c;
        }
    }
}

int main(){

    int n = 42;
    time_t tInicio, tFim;

    tInicio = time(NULL);
    printf("Fibonacci Recursivo: %lld\n");
    tFim = time(NULL);
    printf("Tempo de execucao: %f\n\n", difftime(tFim, tInicio));

    tInicio = time(NULL);
    printf("Fibonacci Iterativo: %lld\n", fiboI(n));
    tFim = time(NULL);
    printf("Tempo de execucao: %f\n", difftime(tFim, tInicio));
    
    return 0;
}
