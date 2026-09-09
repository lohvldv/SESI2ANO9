#include <cstdio>

int main() {
    float altura, peso;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm')
        peso = (72.7 * altura) - 58;
    else if (sexo == 'F' || sexo == 'f')
        peso = (62.1 * altura) - 44.7;
    else {
        printf("Sexo invalido");
        return 0;
    }

    printf("Seu peso ideal e: %.2f kg", peso);

    return 0;
}