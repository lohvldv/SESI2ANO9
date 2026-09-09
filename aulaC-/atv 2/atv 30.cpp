#include <cstdio>

int main() {
    float a, b, c, temp;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Ordem crescente: %.2f, %.2f, %.2f", a, b, c);

    return 0;
}