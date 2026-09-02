#include <stdio.h>

int main() {
    float valorHora, horas, salario;

    printf("Digite o valor da hora: ");
    scanf("%f", &valorHora);

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas);

    salario = valorHora * horas;
    salario = salario * 1.10;

    printf("Valor a receber: R$ %.2f\n", salario);

    return 0;
}
