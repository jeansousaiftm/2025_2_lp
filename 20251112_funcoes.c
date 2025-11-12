#include<stdio.h>

int soma(int a, int b) {
    return a + b;
}

double safeDivide(double a, double b) {
    if (b == 0) {
        return 0;
    }
    return a / b;
}

void imprimirVetor(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void imprimirMatriz(int v[][4], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int v[][4] = {
        { 5, 4, 2, 8 },
        { 5, 4, 2, 8 },
        { 5, 4, 2, 8 },
        { 5, 4, 2, 8 }
    };

    imprimirMatriz(v, 4, 4);

    return 0;
}
