#include<stdio.h>


struct Endereco{
	char cidade[40];
	char estado[4];	
};

struct Cliente{
	char nome[100];
	char cpf[13];
	//endereço
	struct Endereco endereco;
};


int main(){
	//chamar struct
	struct Cliente cliente;
	
	printf("Cadastro de cliente\n");
	printf("Nome: ");
	fgets(cliente.nome, 100, stdin);
	printf("CPF: ");
	fgets(cliente.cpf, 100, stdin);
	
	//Cliente -> Estado
	printf("Cidade: ");
	fgets(cliente.endereco.cidade, 40, stdin);
	
	printf("Dados do cliente: \n");
	printf("Nome: %s", cliente.nome);
	
	return 0;
}
