#include<stdio.h>

int main() {
    double s, p;
    scanf("%lf", &s);

    if (s <= 400) {
        p = 15;
    } else if (s <= 800) {
        p = 12;
    } else if (s <= 1200) {
        p = 10;
    } else if (s <= 2000) {
        p = 7;
    } else {
        p = 4;
    }

    double r = s * (p / 100);
    double ns = s + r;

    printf("Novo salario: %.2lf\n", ns);
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: %.0lf %%\n", p);

    return 0;
}
