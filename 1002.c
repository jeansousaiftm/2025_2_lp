#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main() {

    double area, raio;

    scanf("%lf", &raio);

    area = PI * pow(raio, 2);

    printf("A=%.4lf\n", area);

    return 0;
}
