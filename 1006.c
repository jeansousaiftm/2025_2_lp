#include<stdio.h>
#define PESO1 2
#define PESO2 3
#define PESO3 5

int main() {

    double n1, n2, n3, media;

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    media = (n1 * PESO1 + n2 * PESO2 + n3 * PESO3)
                / (PESO1 + PESO2 + PESO3);

    printf("MEDIA = %.1lf\n", media);

    return 0;
}

