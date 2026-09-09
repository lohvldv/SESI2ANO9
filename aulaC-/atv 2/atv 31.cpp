#include <cstdio>

int main() {
    float altura, peso;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    if (altura < 1.20) {
        if (peso <= 60)
            printf("Classificacao A");
        else if (peso <= 90)
            printf("Classificacao D");
        else
            printf("Classificacao G");
    }
    else if (altura <= 1.70) {
        if (peso <= 60)
            printf("Classificacao B");
        else if (peso <= 90)
            printf("Classificacao E");
        else
            printf("Classificacao H");
    }
    else {
        if (peso <= 60)
            printf("Classificacao C");
        else if (peso <= 90)
            printf("Classificacao F");
        else
            printf("Classificacao I");
    }

    return 0;
}