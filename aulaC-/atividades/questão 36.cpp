#include <stdio.h>

int main() {
    float altura, raio, volume;
    float pi = 3.141592;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o raio: ");
    scanf("%f", &raio);

    volume = pi * raio * raio * altura;

    printf("Volume: %.2f\n", volume);

    return 0;
}
