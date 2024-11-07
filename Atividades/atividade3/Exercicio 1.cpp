#include <stdio.h>
#include <stdlib.h>

int main(){
	
    double a, b, c, delta;
    
   printf("Digite o valor de a:\n");
   scanf("%lf", &a);
   printf("Digite o valor de b:\n");
   scanf("%lf", &b);
   printf("Digite o valor de c:\n");
   scanf("%lf", &c);
   
    //calculo
   delta = b * b - 4 * a * c;
   
   //printar resultado	
   
   printf("O valor de delta: %.2lf\n", delta);

    return 0;
}

