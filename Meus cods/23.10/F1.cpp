#include<stdio.h>
#include<math.h>
#include<stdlib.h>


float calc(float x2, float x1, float y2, float y1){
	float d, r, x, y, c1, c2;
	
	c1 = x2 - x1;
	c2 = y2 - y1;
	
	x = pow(c1, 2);
	y = pow(c2, 2);
	
	r = x + y;
	
	d = sqrt(r);
	
	return d;
}


int main(){
	
	float x1, x2, y1, y2, d;
	
	printf("Digite o valor de x1: ");
	scanf("%f", &x1);
	
	printf("Digite o valor de x2: ");
	scanf("%f", &x2);
	
	printf("Digite o valor de y1: ");
	scanf("%f", &y1);
	
	printf("Digite o valor de y2: ");
	scanf("%f", &y2);
	
	d = calc(x1,x2,y1,y2);
	
	printf("A distancia entre os dois pontos e: %.0f", d);
	
	return 0;
}
