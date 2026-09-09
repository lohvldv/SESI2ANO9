#include <cstdio>

int main() {
    float baseMaior, baseMenor, altura, area;

    printf("Digite a base maior: ");
    scanf("%f", &baseMaior);

    printf("Digite a base menor: ");
    scanf("%f", &baseMenor);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (baseMaior > 0 && baseMenor > 0) {
        area = ((baseMaior + baseMenor) * altura) / 2;
        printf("A area do trapezio e: %.2f", area);
    } else {
        printf("As bases devem ser maiores que zero");
    }

    return 0;
}