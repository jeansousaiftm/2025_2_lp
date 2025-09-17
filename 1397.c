#include<stdio.h>

int main() {

    int j, i;

    scanf("%d", &j);

    while (j > 0) {

        int a, b, pa = 0, pb = 0;

        for (i = 0; i < j; i++) {
            scanf("%d %d", &a, &b);
            if (a > b) {
                pa++;
            } else if (b > a) {
                pb++;
            }
        }

        printf("%d %d\n", pa, pb);

        scanf("%d", &j);
    }

    return 0;
}
