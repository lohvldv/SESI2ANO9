#include <stdio.h>

int main() {
    float polegadas, centimetros;

    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &polegadas);

    centimetros = polegadas * 2.54;

    printf("Comprimento em centimetros: %.2f\n", centimetros);

    return 0;
}
