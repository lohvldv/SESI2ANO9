#include <stdio.h>

int main() {
    float produto, desconto, valorFinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    desconto = produto * 0.12;
    valorFinal = produto - desconto;

    printf("Valor com desconto: R$ %.2f\n", valorFinal);

    return 0;
}
