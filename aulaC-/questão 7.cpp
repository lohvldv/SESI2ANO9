#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

    printf("Temperatura em Celsius: %.2f\n", celsius);

    return 0;
}
