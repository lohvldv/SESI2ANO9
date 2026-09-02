#include <stdio.h>

int main() {
    float jardas, metros;

    printf("Digite o comprimento em jardas: ");
    scanf("%f", &jardas);

    metros = 0.91 * jardas;

    printf("Comprimento em metros: %.2f\n", metros);

    return 0;
}
