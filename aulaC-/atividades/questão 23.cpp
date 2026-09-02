#include <stdio.h>

int main() {
    float metros, jardas;

    printf("Digite o comprimento em metros: ");
    scanf("%f", &metros);

    jardas = metros / 0.91;

    printf("Comprimento em jardas: %.2f\n", jardas);

    return 0;
}
