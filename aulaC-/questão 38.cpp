#include <stdio.h>

int main() {
    float salario, novoSalario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    novoSalario = salario * 1.25;

    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}
