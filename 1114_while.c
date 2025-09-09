#include<stdio.h>

int main() {

    int senha;

    scanf("%d", &senha); // inicializacao

    while (senha != 2002) { // condicao
        printf("Senha Invalida\n");
        scanf("%d", &senha); // passo
    }

    printf("Acesso Permitido\n");

    return 0;
}
