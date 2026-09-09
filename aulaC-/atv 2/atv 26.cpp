#include <cstdio>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8)
        printf("Venda o carro!");
    else if (consumo <= 14)
        printf("Economico!");
    else
        printf("Super economico!");

    return 0;
}