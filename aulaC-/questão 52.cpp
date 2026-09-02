#include <stdio.h>

int main() {
    float investimento1, investimento2, investimento3;
    float premio, total;
    float ganho1, ganho2, ganho3;

    printf("Digite o investimento do primeiro amigo: ");
    scanf("%f", &investimento1);

    printf("Digite o investimento do segundo amigo: ");
    scanf("%f", &investimento2);

    printf("Digite o investimento do terceiro amigo: ");
    scanf("%f", &investimento3);

    printf("Digite o valor do premio: ");
    scanf("%f", &premio);

    total = investimento1 + investimento2 + investimento3;

    ganho1 = premio * investimento1 / total;
    ganho2 = premio * investimento2 / total;
    ganho3 = premio * investimento3 / total;

    printf("Primeiro amigo: R$ %.2f\n", ganho1);
    printf("Segundo amigo: R$ %.2f\n", ganho2);
    printf("Terceiro amigo: R$ %.2f\n", ganho3);

    return 0;
}
