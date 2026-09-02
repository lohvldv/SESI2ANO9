#include <stdio.h>

int main() {
    float quilometros, milhas;

    printf("Digite a distancia em km: ");
    scanf("%f", &quilometros);

    milhas = quilometros / 1.61;

    printf("Distancia em milhas: %.2f\n", milhas);

    return 0;
}
