#include <cstdio>

int main() {
    int opcao;
    float a, b;

    printf("1 - Soma de 2 numeros\n");
    printf("2 - Diferenca entre 2 numeros\n");
    printf("3 - Produto entre 2 numeros\n");
    printf("4 - Divisao entre 2 numeros\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida");
        return 0;
    }

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f", a + b);
            break;

        case 2:
            if (a > b)
                printf("Diferenca: %.2f", a - b);
            else
                printf("Diferenca: %.2f", b - a);
            break;

        case 3:
            printf("Resultado: %.2f", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Resultado: %.2f", a / b);
            else
                printf("O denominador nao pode ser zero");
            break;
    }

    return 0;
}