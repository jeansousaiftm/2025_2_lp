#include<stdio.h>
#define MEDIA 6

int main() {

    int qtd = 0;
    double n1, n2, n3;
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= MEDIA) qtd++;
    if (n2 >= MEDIA) qtd++;
    if (n3 >= MEDIA) qtd++;

    printf("%d\n", qtd);

    return 0;
}
