#include<stdio.h>

int main() {
    int n, i, x, soma = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        soma += x;
    }
    printf("%d\n", soma);
    if (soma > 500) {
        printf("Grande viagem\n");
    } else {
        printf("Viagem curta\n");
    }
    return 0;
}