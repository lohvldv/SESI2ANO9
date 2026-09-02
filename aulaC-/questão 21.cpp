#include <stdio.h>

int main() {
    float libras, kg;

    printf("Digite a massa em libras: ");
    scanf("%f", &libras);

    kg = libras * 0.45;

    printf("Massa em quilogramas: %.2f\n", kg);

    return 0;
}
