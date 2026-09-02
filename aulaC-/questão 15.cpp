#include <stdio.h>

int main() {
    float radianos, graus;
    float pi = 3.14;

    printf("Digite o angulo em radianos: ");
    scanf("%f", &radianos);

    graus = radianos * 180 / pi;

    printf("Angulo em graus: %.2f\n", graus);

    return 0;
}
