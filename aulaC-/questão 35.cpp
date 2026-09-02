#include <stdio.h>
#include <math.h>

int main() {
    float a, b, hipotenusa;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    hipotenusa = sqrt((a * a) + (b * b));

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
