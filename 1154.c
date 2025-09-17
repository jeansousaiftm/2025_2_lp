#include<stdio.h>

int main() {

    int idade, qtd = 0, soma = 0;

    do {
        scanf("%d", &idade);

        if (idade >= 0) {
            soma += idade;
            qtd++;
        }

    } while (idade >= 0);

    double media = (double) soma / qtd;

    printf("%.2lf\n", media);

    return 0;
}
