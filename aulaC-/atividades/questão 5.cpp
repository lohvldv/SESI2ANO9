#include <stdio.h>

int main() {
    float numero, resultado;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    resultado = numero / 5;

    printf("Quinta parte: %.2f\n", resultado);

    return 0;
}
