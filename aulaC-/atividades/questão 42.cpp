#include <stdio.h>

int main() {
    float salarioBase, gratificacao, imposto, salarioFinal;

    printf("Digite o salario-base: ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;

    salarioFinal = salarioBase + gratificacao - imposto;

    printf("Salario a receber: R$ %.2f\n", salarioFinal);

    return 0;
}
