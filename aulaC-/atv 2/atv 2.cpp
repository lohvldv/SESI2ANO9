#include <cstdio>
#include <cmath>

int main() {
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n >= 0)
        printf("A raiz quadrada e: %.2f", sqrt(n));
    else
        printf("Numero invalido");

    return 0;
}