#include <cstdio>

int main() {
    int opcao;
    float a, b;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f", a + b);
            break;
        case 2:
            printf("Resultado: %.2f", a - b);
            break;
        case 3:
            printf("Resultado: %.2f", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Resultado: %.2f", a / b);
            else
                printf("Nao e possivel dividir por zero");
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}