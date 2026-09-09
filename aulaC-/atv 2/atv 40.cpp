#include <cstdio>

int main() {
    float fabrica, distribuidor, impostos, consumidor;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &fabrica);

    if (fabrica <= 12000) {
        distribuidor = 0.05;
        impostos = 0;
    }
    else if (fabrica <= 25000) {
        distribuidor = 0.10;
        impostos = 0.15;
    }
    else {
        distribuidor = 0.15;
        impostos = 0.20;
    }

    consumidor = fabrica +
                 fabrica * distribuidor +
                 fabrica * impostos;

    printf("Custo ao consumidor: R$ %.2f", consumidor);

    return 0;
}