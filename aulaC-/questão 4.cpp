#include <stdio.h>

int main() {
    float numero, quadrado;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    quadrado = numero * numero;

    printf("Quadrado: %.2f\n", quadrado);

    return 0;
}
