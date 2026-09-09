#include <cstdio>
#include <cstdlib>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a > b)
        printf("O maior numero e: %d\n", a);
    else
        printf("O maior numero e: %d\n", b);

    printf("A diferenca entre eles e: %d", abs(a - b));

    return 0;
}