#include<stdio.h>

struct User{ //nome
	int idReporter;  //variáveis
	char Name[100];
	float salary;
	
	
};

int main(){
	
	struct User user; //chamar a struct
	
	printf("Cadastro\n");
	printf("RA: ");
	scanf("%d", &user.idReporter);
	
	getchar();
	
	printf("Name: ");
	fgets(user.Name, 100, stdin);
	
	printf("\n");
	
	printf("Salary: ");
	scanf("%f", &user.salary);	

	printf("\n\nDados> \n");
	printf("RA: %d", user.idReporter);
	printf("Name: %s", user.Name);
	printf("Salary: R$%.2f", user.salary);
	
		
	return 0;
}
