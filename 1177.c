#include<stdio.h>
#define TAM 1000

int main() {
    int v[TAM], i, j, t;
    scanf("%d", &t);
    for (i = 0, j = 0; i < TAM; i++, j++) {
        if (j >= t) j = 0;
        v[i] = j;
    }
    for (i = 0; i < TAM; i++) {
        printf("N[%d] = %d\n", i, v[i]);
    }
    return 0;
}