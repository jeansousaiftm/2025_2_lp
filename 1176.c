#include<stdio.h>
#define MAX 61
int main() {
    long long f[MAX];
    int i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i < MAX; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    int n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        printf("Fib(%d) = %lld\n", x, f[x]);
    }
    return 0;
}