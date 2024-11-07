#include<stdio.h>

int main(){
	
	int x;
	int y;
	int z;
	
	printf("Digite um numero x:");
	scanf("%d", &x);
	
	printf("Digite um numero y:");
	scanf("%d", &y);
	
	printf("Digite um numero z:");
	scanf("%d", &z);
	
	if(x>=y && x>=z ){
		printf("O maior numero e: %d\n", x);
	} else if(y>=x && y>=z){
		printf("O maior numero e: %d\n", y);
	} else {
		printf("O maior numero e: %d\n", z);
	}
	
	
	
	return 0;
}
