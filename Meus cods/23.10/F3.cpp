#include<stdio.h>
#include<stdlib.h>
#include<math.h>

	float calcr(float d){
		
		int r = d/2;
		
		return r;
		
	}
	
	float calca(float a){
		float r, area;
		
		r=pow(r,2);
		
		area = PI * r;
		
		return area;
	}
	
	int main (){
		
		float d;
		
		printf("Defina o valor do diametro: ");
		scanf("%f", &d);
		
		calcr(d);
		
		
		
		return 0;
		
	}
