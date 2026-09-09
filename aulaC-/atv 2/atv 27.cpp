#include <cstdio>

int main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
        printf("Infantil A");
    else if (idade <= 10)
        printf("Infantil B");
    else if (idade <= 13)
        printf("Juvenil A");
    else if (idade <= 17)
        printf("Juvenil B");
    else if (idade >= 18)
        printf("Senior");
    else
        printf("Idade invalida");

    return 0;
}