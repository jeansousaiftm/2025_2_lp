#include<stdio.h>
#define COMISSAO 0.15

int main() {

    double salario, totalVendas, bonus;

    scanf("%*s %lf %lf", &salario, &totalVendas);

    bonus = totalVendas * COMISSAO;

    salario += bonus; // salario = salario + bonus

    printf("TOTAL = R$ %.2lf\n", salario);

    return 0;
}
