#include <stdio.h>

int main() {
    float metros, hectares;

    printf("Digite a area em metros quadrados: ");
    scanf("%f", &metros);

    hectares = metros * 0.0001;

    printf("Area em hectares: %.4f\n", hectares);

    return 0;
}
