#include<stdio.h>
#define TAM 10

int main() {
    int v[TAM], i;
    scanf("%d", &v[0]);
    for (i = 1; i < TAM; i++) { 
        v[i] = v[i - 1] * 2;
    }
    for (i = 0; i < TAM; i++) {
        printf("N[%d] = %d\n", i, v[i]);
    }
    return 0;
}