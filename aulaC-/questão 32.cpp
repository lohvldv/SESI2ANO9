#include <stdio.h>

int main() {
    int numero, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = (3 * numero + 1) + (2 * numero - 1);

    printf("Resultado: %d\n", resultado);

    return 0;
}
