#include <cstdio>

int main() {
    float n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10) {
        printf("Nota invalida");
        return 0;
    }

    media = (n1 + n2) / 2;

    printf("A media e: %.2f", media);

    return 0;
}