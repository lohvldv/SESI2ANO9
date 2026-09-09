#include <cstdio>
#include <cmath>

int main() {
    float x, y, z;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);

    printf("Digite o segundo numero: ");
    scanf("%f", &y);

    printf("Digite o terceiro numero: ");
    scanf("%f", &z);

    if (x <= 0 || y <= 0 || z <= 0) {
        printf("Os numeros devem ser positivos");
        return 0;
    }

    printf("1 - Media geometrica\n");
    printf("2 - Media ponderada\n");
    printf("3 - Media harmonica\n");
    printf("4 - Media aritmetica\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Media geometrica: %.2f", cbrt(x * y * z));
            break;

        case 2:
            printf("Media ponderada: %.2f", (x + 2*y + 3*z) / 6);
            break;

        case 3:
            printf("Media harmonica: %.2f", 1 / (1/x + 1/y + 1/z));
            break;

        case 4:
            printf("Media aritmetica: %.2f", (x + y + z) / 3);
            break;

        default:
            printf("Opcao invalida");
    }

    return 0;
}