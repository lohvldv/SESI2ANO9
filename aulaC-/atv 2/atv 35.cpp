#include <cstdio>

int main() {
    int dia, mes, ano;
    int diasMes;
    bool bissexto;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Data invalida");
        return 0;
    }

    bissexto = (ano % 400 == 0 ||
                (ano % 4 == 0 && ano % 100 != 0));

    if (mes == 2)
        diasMes = bissexto ? 29 : 28;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        diasMes = 30;
    else
        diasMes = 31;

    if (dia >= 1 && dia <= diasMes)
        printf("Data valida");
    else
        printf("Data invalida");

    return 0;
}