#include <stdio.h>

int main() {
	
	float peso, altura, imc;
	
	printf("Digite seu peso em kg: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura em metros: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\nSeu IMC e: %.2f\n", imc);
	
	return 0;
	
}