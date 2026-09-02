#include <stdio.h>

int main() {
    int a, b, c, soma;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    soma = a + b + c;

    printf("Soma: %d\n", soma);

    return 0;
}
