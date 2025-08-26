#include<stdio.h>

int main() {

    int n, h;
    double vh, salario;

    scanf("%d %d %lf", &n, &h, &vh);

    salario = h * vh;

    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}
