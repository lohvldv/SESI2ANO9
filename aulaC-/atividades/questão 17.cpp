#include <stdio.h>

int main() {
    float centimetros, polegadas;

    printf("Digite o comprimento em centimetros: ");
    scanf("%f", &centimetros);

    polegadas = centimetros / 2.54;

    printf("Comprimento em polegadas: %.2f\n", polegadas);

    return 0;
}
