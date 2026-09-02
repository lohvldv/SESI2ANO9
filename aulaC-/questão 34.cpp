#include <stdio.h>

int main() {
    float raio, area;
    float pi = 3.141592;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("Area do circulo: %.2f\n", area);

    return 0;
}
