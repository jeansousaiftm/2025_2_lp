#include<stdio.h>
#define MAX 100001
int main() {
    int a[MAX], b[MAX];
    int na, nb, i, x;
    scanf("%d %d", &na, &nb);
    while (na > 0 && nb > 0) {
        for (i = 0; i < MAX; i++) {
            a[i] = 0;
            b[i] = 0;
        }
        for (i = 0; i < na; i++) {
            scanf("%d", &x);
            a[x]++;
        }
        for (i = 0; i < nb; i++) {
            scanf("%d", &x);
            b[x]++;
        }
        int ta = 0, tb = 0;
        for (i = 0; i < MAX; i++) {
            if (a[i] > 0 && b[i] == 0) {
                ta++;
            }
            if (b[i] > 0 && a[i] == 0) {
                tb++;
            }
        }
        printf("%d\n", (ta < tb) ? ta : tb);
        scanf("%d %d", &na, &nb);
    }
    return 0;
}