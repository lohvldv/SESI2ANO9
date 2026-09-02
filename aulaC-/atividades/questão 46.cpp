#include <stdio.h>

int main() {
    int numero, centenas, dezenas, unidades, invertido;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &numero);

    centenas = numero / 100;
    dezenas = (numero / 10) % 10;
    unidades = numero % 10;

    invertido = unidades * 100 + dezenas * 10 + centenas;

    printf("Numero invertido: %d\n", invertido);

    return 0;
}
