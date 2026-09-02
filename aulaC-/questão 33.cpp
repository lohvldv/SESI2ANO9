#include <stdio.h>

int main() {
    float lado, area;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("Area: %.2f\n", area);

    return 0;
}
