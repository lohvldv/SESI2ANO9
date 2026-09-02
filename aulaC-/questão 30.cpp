#include <stdio.h>

int main() {
    float reais, cotacao, dolares;

    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    dolares = reais / cotacao;

    printf("Valor em dolares: %.2f\n", dolares);

    return 0;
}
