#include<stdio.h>

int main(){
	
	int matriz [3] [4] = {{1,2,3,4},
						  {4,3,2,1}, 
						  {3,3,2,1}};
	    				  
	for(int i=0; i<3;i++) {
		for(int j=0;j<4;j++){
			printf("%2d", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
