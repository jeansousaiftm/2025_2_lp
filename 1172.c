#include<stdio.h>
#define TAM 10

int main() {

    int v[TAM], i;

    for (i = 0; i < TAM; i++) {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < TAM; i++) {
        if (v[i] <= 0) {
            v[i] = 1;
        }
    }

    for (i = 0; i < TAM; i++) {
        printf("X[%d] = %d\n", i, v[i]);
    }

    return 0;
}
