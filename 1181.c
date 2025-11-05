#include<stdio.h>
#define TAM 12

int main() {

    int i, j, l, q = 0;
    char op;
    double m[TAM][TAM], soma = 0;

    scanf("%d %c", &l, &op);

    for (i = 0; i < TAM; i++) { // linha
        for (j = 0; j < TAM; j++) { // col
            scanf("%lf", &m[i][j]);
            if (i == l) {
                soma += m[i][j];
                q++;
            }
        }
    }

    if (op == 'M') {
        printf("%.1lf\n", soma / q);
    } else {
        printf("%.1lf\n", soma);
    }

    return 0;
}
