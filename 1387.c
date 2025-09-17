#include<stdio.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    while (a != 0 && b != 0) {
        int soma = a + b;
        printf("%d\n", soma);
        scanf("%d %d", &a, &b);
    }

    return 0;
}
