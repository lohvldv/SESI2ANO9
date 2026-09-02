#include <stdio.h>

int main() {
    float graus, radianos;
    float pi = 3.14;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * pi / 180;

    printf("Angulo em radianos: %.2f\n", radianos);

    return 0;
}
