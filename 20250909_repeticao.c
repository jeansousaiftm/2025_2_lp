#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

        // inicializa��o; condi��o; passo
    for (i = 1; i <= n; i += 2) {
        printf("%d\n", i);
    }

    i = 1; // inicializa��o
    while (i <= n) { // condi��o
        printf("%d\n", i);
        i += 2; // passo
    }

    return 0;
}
