#include <cstdio>
#include <cmath>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Nao e equacao de segundo grau");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao existe raiz real");
    }
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz unica: %.2f", x1);
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Primeira raiz: %.2f\n", x1);
        printf("Segunda raiz: %.2f", x2);
    }

    return 0;
}