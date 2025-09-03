#include<stdio.h>

int main() {

    int v, d, m, a;

    scanf("%d", &v);

    a = v / 365;
    v %= 365; // v = v % 365
    m = v / 30;
    d = v % 30;

    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    return 0;
}
