#include <cstdio>

int main() {
    int codigo, quantidade;
    float preco;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100: preco = 1.20; break;
        case 101: preco = 1.30; break;
        case 102: preco = 1.50; break;
        case 103: preco = 1.20; break;
        case 104: preco = 1.70; break;
        case 105: preco = 2.20; break;
        case 106: preco = 1.00; break;

        default:
            printf("Codigo invalido");
            return 0;
    }

    printf("Valor total: R$ %.2f", preco * quantidade);

    return 0;
}