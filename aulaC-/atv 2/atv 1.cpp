#include <cstdio>

int main() {
    float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    if (a > b)
        printf("O maior numero e: %.2f", a);
    else
        printf("O maior numero e: %.2f", b);

    return 0;
}