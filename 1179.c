#include<stdio.h>
#define TAM 5

int main() {

    int pares[TAM], impares[TAM];
    int i, j, x, cp = 0, ci = 0;

    for (i = 0; i < 15; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            pares[cp] = x;
            cp++;

            if (cp >= TAM) {
                for (j = 0; j < TAM; j++) {
                    printf("par[%d] = %d\n", j, pares[j]);
                    pares[j] = 0;
                }
                cp = 0;
            }

        } else {

            impares[ci] = x;
            ci++;

            if (ci >= TAM) {
                for (j = 0; j < TAM; j++) {
                    printf("impar[%d] = %d\n", j, impares[j]);
                    impares[j] = 0;
                }
                ci = 0;
            }

        }
    }

    for (j = 0; j < ci; j++) {
        printf("impar[%d] = %d\n", j, impares[j]);
    }
    for (j = 0; j < cp; j++) {
        printf("par[%d] = %d\n", j, pares[j]);
    }

    return 0;
}