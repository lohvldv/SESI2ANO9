#include <stdio.h>

int main() {
    float metros, acres;

    printf("Digite a area em metros quadrados: ");
    scanf("%f", &metros);

    acres = metros * 0.000247;

    printf("Area em acres: %.6f\n", acres);

    return 0;
}
