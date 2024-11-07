#include<stdio.h>

//ponteiro para funções

//conteudo != endereço
	int soma(int a, int b){
		return a+b;
	}
	
	int sub(int a, int b){
		return a-b;
	}


void calcular(int x, int y, int (*op)(int,int)){
	int resultado = op(x,y);
	printf("Resultado: %d\n", resultado);
	
}

int main(){

	int a = 10, b = 5;
	
	calcular(a,b,soma);
	calcular(a,b,sub);
	
	
	
	
	
		
	return 0;
}
