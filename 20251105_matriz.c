#include<stdio.h>

int main() {

    int m[3][4], i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    //printf("%d\n", &m[0][4]);

    return 0;
}
