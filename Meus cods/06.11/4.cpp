#include<stdio.h>


int soma(int a, int b){

	return a+b;
}

int sub(int a, int b){
	
	return a-b;
}


int main(){
	
	int a = 10, b = 5;
	
	int (*op)(int,int);
	
	op = soma;
	
	printf("Soma: %d\n", op(a,b));
	
	op = sub;
	
	printf("Subtracao: %d\n", op(a,b));
	
	
	return 0;
}

