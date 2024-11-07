#include <stdio.h>
#include <stdlib.h>
#define COMBUSTIVEL 5.79


int main() {
	
	float valor, litros;
	
	printf("Digite a quantidade de combustivel abastecido: ");
	scanf("%f", &litros);


	valor = litros * COMBUSTIVEL;
	
	printf("O valor a ser pago sera: R$ %.2f\n", valor);
	


	return 0;
	
}
