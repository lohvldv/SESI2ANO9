#include <stdio.h>

int main() {
    float kelvin, celsius;

    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("Temperatura em Celsius: %.2f\n", celsius);

    return 0;
}
