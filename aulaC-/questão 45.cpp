#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letra);

    letra = letra + 32;

    printf("Letra minuscula: %c\n", letra);

    return 0;
}
