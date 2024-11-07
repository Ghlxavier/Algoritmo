#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nome[50];
	int idade;

	
	printf("Digite seu nome completo:\n");
	fgets(nome, sizeof(nome), stdin);
	printf("Digite sua idade:\n");
	scanf("%d", &idade);


	printf("Ola %s, seja bem-vindo ao curso de Algoritmos e Programacao Estruturada. Voce tem %d anos de idade!", nome, idade);

	return 0;
	
}
