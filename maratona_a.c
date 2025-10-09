#include<stdio.h>

int main() {
    int c, p;
    scanf("%d %d", &c, &p);

    if (c * 2 <= p) {
        printf("1\n"); 
    } else {
        printf("0\n");
    }

    return 0;
}