#include<stdio.h>
#define TAM 100

int main() {
    double v[TAM];
    int i;
    for (i = 0; i < TAM; i++) { 
        scanf("%lf", &v[i]);
    }
    for (i = 0; i < TAM; i++) {
        if (v[i] <= 10) {
            printf("A[%d] = %.1lf\n", i, v[i]);
        }
    }
    return 0;
}