#include <stdio.h>

int main() {
    int hora, minuto, segundo;
    int duracao;
    int totalSegundos;

    printf("Digite a hora de inicio: ");
    scanf("%d", &hora);

    printf("Digite os minutos de inicio: ");
    scanf("%d", &minuto);

    printf("Digite os segundos de inicio: ");
    scanf("%d", &segundo);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    totalSegundos = hora * 3600 + minuto * 60 + segundo;
    totalSegundos += duracao;

    totalSegundos %= 24 * 3600;

    hora = totalSegundos / 3600;
    minuto = (totalSegundos % 3600) / 60;
    segundo = totalSegundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n",
           hora, minuto, segundo);

    return 0;
}
