#include <cstdio>

int main() {
    int n, soma = 0;

    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido");
        return 0;
    }

    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }

    printf("A soma dos algarismos e: %d", soma);

    return 0;
}