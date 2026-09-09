#include <cstdio>
#include <cmath>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Numero invalido");
    else
        printf("O logaritmo e: %.2f", log(n));

    return 0;
}