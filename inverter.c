#include<stdio.h>
#define TAM 10
int main() {
    int v[TAM], i, j;
    for (i = 0; i < TAM; i++) {
        scanf("%d", &v[i]);
    } 
    for (i = 0, j = TAM - 1; i < j; i++, j--) {
        int x = v[i];
        v[i] = v[j];
        v[j] = x;
    }
    for (i = 0; i < TAM; i++) {
        printf("X[%d] = %d\n", i, v[i]);
    }
    return 0;
}