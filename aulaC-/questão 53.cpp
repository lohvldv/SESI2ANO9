#include <stdio.h>

int main() {
    float comprimento, largura, precoMetro;
    float perimetro, custo;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o preco do metro de tela: ");
    scanf("%f", &precoMetro);

    perimetro = 2 * (comprimento + largura);
    custo = perimetro * precoMetro;

    printf("Custo para cercar o terreno: R$ %.2f\n", custo);

    return 0;
}
