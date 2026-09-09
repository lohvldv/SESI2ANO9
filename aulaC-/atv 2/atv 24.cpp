#include <cstdio>
#include <cstring>

int main() {
    float valor, precoFinal;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o estado de destino (MG, SP, RJ ou MS): ");
    scanf("%s", estado);

    if (strcmp(estado, "MG") == 0)
        precoFinal = valor * 1.07;
    else if (strcmp(estado, "SP") == 0)
        precoFinal = valor * 1.12;
    else if (strcmp(estado, "RJ") == 0)
        precoFinal = valor * 1.15;
    else if (strcmp(estado, "MS") == 0)
        precoFinal = valor * 1.08;
    else {
        printf("Estado invalido");
        return 0;
    }

    printf("Preco final: R$ %.2f", precoFinal);

    return 0;
}