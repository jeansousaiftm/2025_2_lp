#include<stdio.h>
#define TAM 100

int main() {

    double v[TAM];
    int i;
    scanf("%lf", &v[0]);

    for (i = 1; i < TAM; i++) {
        v[i] = v[i - 1] / 2;
    }

    for (i = 0; i < TAM; i++) {
        printf("N[%d] = %.4lf\n", i, v[i]);
    }

    return 0;
}