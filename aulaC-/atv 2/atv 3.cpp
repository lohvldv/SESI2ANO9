#include <cstdio>
#include <cmath>

int main() {
    float n;

    printf("Digite um numero real: ");
    scanf("%f", &n);

    if (n > 0)
        printf("A raiz quadrada e: %.2f", sqrt(n));
    else
        printf("O numero ao quadrado e: %.2f", n * n);

    return 0;
}