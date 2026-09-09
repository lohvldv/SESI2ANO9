#include <cstdio>

int main() {
    int dia, mes, ano;
    int diasMes;
    const int ANO_ATUAL = 2008;

    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);

    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12 || ano > ANO_ATUAL) {
        printf("Data invalida");
        return 0;
    }

    if (mes == 2) {
        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
            diasMes = 29;
        else
            diasMes = 28;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasMes = 30;
    }
    else {
        diasMes = 31;
    }

    if (dia > 0 && dia <= diasMes)
        printf("Data valida");
    else
        printf("Data invalida");

    return 0;
}