#include <cstdio>

int main() {
    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 18.5)
        printf("Abaixo do peso");
    else if (imc < 25)
        printf("Saudavel");
    else if (imc < 30)
        printf("Peso em excesso");
    else if (imc < 35)
        printf("Obesidade Grau I");
    else if (imc < 40)
        printf("Obesidade Grau II");
    else
        printf("Obesidade Grau III");

    return 0;
}