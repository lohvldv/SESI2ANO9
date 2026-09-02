#include <stdio.h>

int main() {
    float a, b, c, resultado;

    printf("Digite tres valores: ");
    scanf("%f %f %f", &a, &b, &c);

    resultado = (a * a) + (b * b) + (c * c);

    printf("Soma dos quadrados: %.2f\n", resultado);

    return 0;
}
