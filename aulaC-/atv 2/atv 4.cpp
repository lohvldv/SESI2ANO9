#include <cstdio>
#include <cmath>

int main() {
    float n;

    printf("Digite um numero positivo: ");
    scanf("%f", &n);

    if (n > 0) {
        printf("O numero ao quadrado e: %.2f\n", n * n);
        printf("A raiz quadrada e: %.2f", sqrt(n));
    } else {
        printf("Numero invalido");
    }

    return 0;
}