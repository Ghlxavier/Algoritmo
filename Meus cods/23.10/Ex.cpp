#include<stdio.h>

//� mais por organiza��o de codigo. Definir uma fun��o antes do main.
//Tem que definir antes do main para compilar corretamente.
//� poss�vel declarar "int soma(...);" e depois de fechar int main declarar o int soma(...) = "Prot�tipo de Fun��o"

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
