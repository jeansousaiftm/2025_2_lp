#include<stdio.h>
#define MEDIA 6

int main() {

    double n1, n2, n3;
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= MEDIA && n2 >= MEDIA && n3 >= MEDIA) {
        printf("3\n");
    } else if (n1 < MEDIA && n2 < MEDIA && n3 < MEDIA) {
        printf("0\n");
    } else if ((n1 >= MEDIA && n2 >= MEDIA) ||
               (n1 >= MEDIA && n3 >= MEDIA) ||
               (n2 >= MEDIA && n3 >= MEDIA)) {
        printf("2\n");
    } else {
        printf("1\n");
    }

    return 0;
}
