#include<stdio.h>

int main() {

    int a, b, res;
    char op;

    scanf("%d%c%d=", &a, &op, &b);

    switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("Operacao invalida\n");
        return 0;
    }

    printf("%d%c%d=%d\n", a, op, b, res);

    return 0;
}
