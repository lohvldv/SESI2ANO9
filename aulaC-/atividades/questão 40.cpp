#include <stdio.h>

int main() {
    float dias, salario, imposto, valorLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%f", &dias);

    salario = dias * 30;
    imposto = salario * 0.08;
    valorLiquido = salario - imposto;

    printf("Valor liquido: R$ %.2f\n", valorLiquido);

    return 0;
}
