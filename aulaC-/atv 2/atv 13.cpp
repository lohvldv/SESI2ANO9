#include <cstdio>

int main() {
    float n1, n2, n3, media;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &n1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &n2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &n3);

    media = (n1 + n2 + (n3 * 2)) / 4;

    printf("A media ponderada e: %.2f\n", media);

    if (media >= 60)
        printf("Aluno aprovado");
    else
        printf("Aluno reprovado");

    return 0;
}