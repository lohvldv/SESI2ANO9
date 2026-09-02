#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
