#include <stdio.h>

int main() {
    float r;
    const float PI = 3.14159;

    printf("Nhap ban kinh r: ");
    scanf("%f", &r);

    float chuVi = 2 * PI * r;
    float dienTich = PI * r * r;

    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}