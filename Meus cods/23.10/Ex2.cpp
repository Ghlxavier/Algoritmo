#include <stdio.h>

//encontrar o menor Numero
//função com retorno

int menorNumero(int a, int b){ //função pra achar o menor.
	
	if(a < b){
		return a;
	} else if(b < a){
		return b;
	} else{
		return 0;
	}
		
}
	
	
	int main(){ //função principal.
		
		int n1, n2, n3, n4;
		
		n1=10;
		n2=20;
		
		n3=10;
		n4=4;
		
		int r = menorNumero(n1, n2);
		
		if(r == 0){
			printf("Iguais");
		}else{
			printf("O menor numero e: %d", r);
		}
		
		return 0;
	}
	
