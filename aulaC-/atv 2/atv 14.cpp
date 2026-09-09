#include <cstdio>

int main() {
    float laboratorio, semestral, exame, media;

    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &laboratorio);

    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &semestral);

    printf("Digite a nota do exame final: ");
    scanf("%f", &exame);

    if (laboratorio < 0 || laboratorio > 10 ||
        semestral < 0 || semestral > 10 ||
        exame < 0 || exame > 10) {
        printf("Nota invalida");
        return 0;
    }

    media = (laboratorio * 2 + semestral * 3 + exame * 5) / 10;

    printf("A media e: %.2f\n", media);

    if (media < 3)
        printf("Reprovado");
    else if (media < 5)
        printf("Recuperacao");
    else
        printf("Aprovado");

    return 0;
}