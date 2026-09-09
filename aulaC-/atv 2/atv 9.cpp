#include <cstdio>

int main() {
    float salario, prestacao;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);

    if (prestacao > salario * 0.20)
        printf("Emprestimo nao concedido");
    else
        printf("Emprestimo concedido");

    return 0;
}