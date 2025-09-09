#include<stdio.h>

int main() {

    int senha;

    for (scanf("%d", &senha);
        senha != 2002;
        scanf("%d", &senha)) {
        printf("Senha Invalida\n");
    }

    printf("Acesso Permitido\n");

    return 0;
}

