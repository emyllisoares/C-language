//Fatorial Duplo 

#include <stdio.h>

int fatorialDuplo(int n){
    if(n == 1){
        return 1;
    }else{
        if(n % 2 == 0){
            return fatorialDuplo(n - 1);
        }else{
            return n * fatorialDuplo(n - 2);
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", fatorialDuplo(n));
    return 0;
}