#include<stdio.h>

//é mais por organização de codigo. Definir uma função antes do main.
//Tem que definir antes do main para compilar corretamente.
//É possível declarar "int soma(...);" e depois de fechar int main declarar o int soma(...) = "Protótipo de Função"

	int soma(int a, int b){
		int r;
		r = a * b;
		return r;
	}
	
	int main(void){
	
	int a, b, r;
	int resultado;
	resultado = soma(3,4);
	printf("Resultado: %d\n", resultado);
	
	return 0;
}
