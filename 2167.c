#include<stdio.h>

int main() {

    int n, i, pos = -1;

    scanf("%d", &n);
    int v[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            pos = i;
            break;
        }
    }

    printf("%d\n", pos + 1);

    return 0;
} 