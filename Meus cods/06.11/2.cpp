#include<stdio.h>


 //int main(){
	
//	int var = 15;
	
//	int *ptr = &var;
	
//	printf("Conteudo de var: %d\n", var);
//	printf("Endereco de var: %p \n", &var);
//	
//	printf("Conteudo de ptr: %d\n", *ptr);
//	printf("Endereco de ptr: %p \n", &ptr);
//	printf("Endereco de ptr: %p \n", ptr);
	
	
	//int **pptr;
	//pptr = &ptr;
	
//	printf("Endereco de pptr: %p\n", &pptr);
//	printf("Conteudo de pptr: %d\n", **pptr);
	
//	return 0;
//}

//p
//temos duas variaveis de queremos trocas os valores delas

void trocar(int *i, int *j){
	int temp;
	temp=*i;
	*i=*j;
	*j=temp;
	
	
}

int main(){
	
	int a=5, b=10, temp;
	
	printf("%d %d\n", a, b);
	
	
	
//	temp = a;
//	a=b;
//	b=temp;
	trocar(&a, &b);
	printf("%d %d\n", a, b);
	
	return 0;
}
