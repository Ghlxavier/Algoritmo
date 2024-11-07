#include<stdio.h>

int main(){
	
	float x;
	float y;
	float z;
	
	printf("Digite um lado x do triangulo :");
	scanf("%f", &x);
	
	printf("Digite um lado y do triangulo:");
	scanf("%f", &y);
	
	printf("Digite lado z do triangulo:");
	scanf("%f", &z);
	
	if(x+y > z && x+z > y && y+z > x){
		if(x == y && y == z){
			printf("O triangulo e equilatero.\n");
	}else if (x == y || x == z || z == x){
				printf("O triangulo e isoceles.\n");
		} else{
			printf("O triangulo e escaleno. \n");
			}
	
	}
	
	
	
	return 0;
}
