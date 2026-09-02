#include <stdio.h>

int main() {
    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("Velocidade em m/s: %.2f\n", ms);

    return 0;
}
