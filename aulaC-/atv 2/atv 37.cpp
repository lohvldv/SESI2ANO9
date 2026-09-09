#include <cstdio>

int main() {
    int horaChegada, minutoChegada;
    int horaSaida, minutoSaida;
    int chegada, saida, minutos, horas;
    float preco;

    printf("Digite a hora de chegada: ");
    scanf("%d", &horaChegada);

    printf("Digite os minutos de chegada: ");
    scanf("%d", &minutoChegada);

    printf("Digite a hora de saida: ");
    scanf("%d", &horaSaida);

    printf("Digite os minutos de saida: ");
    scanf("%d", &minutoSaida);

    chegada = horaChegada * 60 + minutoChegada;
    saida = horaSaida * 60 + minutoSaida;

    if (saida < chegada)
        saida += 24 * 60;

    minutos = saida - chegada;

    horas = (minutos + 59) / 60;

    if (horas <= 2)
        preco = horas * 1.00;
    else if (horas <= 4)
        preco = 2 * 1.00 + (horas - 2) * 1.40;
    else
        preco = 2 * 1.00 + 2 * 1.40 + (horas - 4) * 2.00;

    printf("Valor a pagar: R$ %.2f", preco);

    return 0;
    
}