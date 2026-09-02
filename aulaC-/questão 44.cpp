#include <stdio.h>

int main() {
    float alturaDegrau, alturaDesejada;
    int degraus;

    printf("Digite a altura do degrau em metros: ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura que deseja alcancar em metros: ");
    scanf("%f", &alturaDesejada);

    degraus = alturaDesejada / alturaDegrau;

    printf("Numero de degraus: %d\n", degraus);

    return 0;
}
