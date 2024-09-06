#include<stdio.h>

int main(){
	
	int x;
	
	printf("Digite um numero x:");
	scanf("%d", &x);
	
	if(x % 2 == 0){
		printf("O %d e par!");
	} else{
		printf("O %d e impar!");
	}
	
	
	
	return 0;
}
