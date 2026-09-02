#include <stdio.h>

int main() {
    float ms, kmh;

    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms);

    kmh = ms * 3.6;

    printf("Velocidade em km/h: %.2f\n", kmh);

    return 0;
}
