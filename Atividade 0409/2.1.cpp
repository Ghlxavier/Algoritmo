#include<stdio.h>

int main(){
	
	int x;
	int y;
	
	printf("Digite um numero x:");
	scanf("%d", &x);
	
	printf("Digite um numero y:");
	scanf("%d", &y);
	
	if(x>y){
		printf("O maior numero e: %d\n", x);
	} else if(y>x){
		printf("O maior numero e: %d\n", y);
	}
	
	
	
	return 0;
}
