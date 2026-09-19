#include <stdio.h>

int main() {
    float a, b;
    printf("enter a number: ");
    scanf("%f", &a);
    printf("enter another number: ");
    scanf("%f", &b);
    printf("%.1f + %.1f = %.2f\n", a ,b, a + b);
    printf("%.1f - %.1f = %.2f\n", a ,b, a - b);
    printf("%.1f * %.1f = %.2f\n", a ,b, a * b);
    printf("%.1f / %.1f = %.2f\n", a ,b, a / b);

    return 0;
}