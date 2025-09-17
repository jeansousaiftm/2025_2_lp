#include<stdio.h>

int main() {

    int m, i;

    scanf("%d%*c", &m);

    while (m != 0) {

        int p = 0;
        char o;

        for (i = 0; i < m; i++) {
            scanf("%c", &o);

            if (o == 'D') p++;
            if (o == 'E') p--;

            if (p < 0) p = 3;
            if (p > 3) p = 0;
        }

        switch(p) {
        case 0:
            printf("N\n");
            break;
        case 1:
            printf("L\n");
            break;
        case 2:
            printf("S\n");
            break;
        case 3:
            printf("O\n");
            break;
        };


        scanf("%d%*c", &m);

    }

    return 0;
}
