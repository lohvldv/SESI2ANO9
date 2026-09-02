#include <stdio.h>

int main() {
    float hectares, metros;

    printf("Digite a area em hectares: ");
    scanf("%f", &hectares);

    metros = hectares * 10000;

    printf("Area em metros quadrados: %.2f\n", metros);

    return 0;
}
