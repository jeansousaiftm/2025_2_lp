#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

        // inicialização; condição; passo
    for (i = 1; i <= n; i += 2) {
        printf("%d\n", i);
    }

    i = 1; // inicialização
    while (i <= n) { // condição
        printf("%d\n", i);
        i += 2; // passo
    }

    return 0;
}
