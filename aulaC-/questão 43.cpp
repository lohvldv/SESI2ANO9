#include <stdio.h>

int main() {
    float valor, valorDesconto, parcela;
    float comissaoVista, comissaoParcelada;

    printf("Digite o valor total da venda: ");
    scanf("%f", &valor);

    valorDesconto = valor * 0.90;
    parcela = valor / 3;

    comissaoVista = valorDesconto * 0.05;
    comissaoParcelada = valor * 0.05;

    printf("Valor com desconto: R$ %.2f\n", valorDesconto);
    printf("Valor de cada parcela: R$ %.2f\n", parcela);
    printf("Comissao a vista: R$ %.2f\n", comissaoVista);
    printf("Comissao parcelada: R$ %.2f\n", comissaoParcelada);

    return 0;
}
