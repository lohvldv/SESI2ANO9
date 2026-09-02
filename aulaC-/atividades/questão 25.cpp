#include <stdio.h>

int main() {
    float acres, metros;

    printf("Digite a area em acres: ");
    scanf("%f", &acres);

    metros = acres * 4048.58;

    printf("Area em metros quadrados: %.2f\n", metros);

    return 0;
}
