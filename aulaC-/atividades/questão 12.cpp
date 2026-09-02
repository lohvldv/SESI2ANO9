#include <stdio.h>

int main() {
    float milhas, quilometros;

    printf("Digite a distancia em milhas: ");
    scanf("%f", &milhas);

    quilometros = 1.61 * milhas;

    printf("Distancia em km: %.2f\n", quilometros);

    return 0;
}
