#include<stdio.h>

int main() {
    int n, i, x, soma = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        soma += x;
    }
    int q;
    if (soma % 6 > 0) {
        q = (soma / 6) + 1;
    } else {
        q = (soma / 6);
    }

    int s = q - soma;

    return 0;
}