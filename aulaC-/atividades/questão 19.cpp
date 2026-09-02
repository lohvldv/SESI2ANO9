#include <stdio.h>

int main() {
    float litros, metrosCubicos;

    printf("Digite o volume em litros: ");
    scanf("%f", &litros);

    metrosCubicos = litros / 1000;

    printf("Volume em metros cubicos: %.2f\n", metrosCubicos);

    return 0;
}
