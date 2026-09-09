#include <cstdio>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if ((n % 3 == 0) != (n % 5 == 0))
        printf("O numero e divisivel por 3 ou por 5, mas nao pelos dois");
    else
        printf("O numero nao atende a condicao");

    return 0;
}