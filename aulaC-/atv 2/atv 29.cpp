#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
    int a, b, resposta, acertos = 0;

    srand(time(0));

    for (int i = 1; i <= 5; i++) {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;

        printf("\nQuestao %d\n", i);
        printf("Qual e a soma de %d + %d? ", a, b);
        scanf("%d", &resposta);

        if (resposta == a + b) {
            printf("Resposta correta!\n");
            acertos++;
        } else {
            printf("Resposta incorreta. A resposta era: %d\n", a + b);
        }
    }

    printf("\nVoce acertou %d de 5 questoes.", acertos);

    return 0;
}