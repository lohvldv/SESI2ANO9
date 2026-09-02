#include <stdio.h>

int main() {
    float celsius, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("Temperatura em Kelvin: %.2f\n", kelvin);

    return 0;
}
