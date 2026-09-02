#include <stdio.h>

int main() {
    float metrosCubicos, litros;

    printf("Digite o volume em metros cubicos: ");
    scanf("%f", &metrosCubicos);

    litros = metrosCubicos * 1000;

    printf("Volume em litros: %.2f\n", litros);

    return 0;
}
