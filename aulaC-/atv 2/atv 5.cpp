#include <cstdio>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("O numero e par");
    else
        printf("O numero e impar");

    return 0;
}