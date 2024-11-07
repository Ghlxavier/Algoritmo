#include<stdio.h>
#include<string.h>

//strings = vetores de caracteres.
int main(){

	char nome[7] {'G', 'u', 's', 't', 'a', 'v', 'o'};
	printf("%s\n", nome);
	
	char nome1[] = "Gustavo Xavier";	
	printf("%s", nome1);
	
	//scanf: Gustavo Xavier
	
	//fgets - leitura
	char string3[15];
	printf("\nFrase: ");
	fgets(string3, 15, stdin);
	printf("Frase: %s\n", string3);
	
	//funções - bilbioteca
	char string4[] = "Porraseioqueescrevernao";
	int tam = strlen(string4); //tamanho da string
	printf("Tamanho : %d", tam);
	
	
	//cópia
	char strcopia [15];
	strcpy(strcopia, string3);
	printf("\nCopia: %s", strcopia);
	
	//concatenar - juntar 2 strings
	
	char string5[] = "Voce e gay baitola e marmota";
	char string6[] = " nao e nao, estou brincando";
	strcat(string5, string6);
	printf("\n\nConcatenacao: %s", string5);
	
	//string5 + string6
	
	char stringA[12] = "Test";
	char stringB[12] = "Teste";
	printf("\n\nString A: %s\n", stringA);
	printf("String B: %s\n", stringB);
	printf("Valor da primeira comparacao: %d \n\n", strcmp(stringA, stringB));
	
	//Se retorna 1 a stringA é maior a stringB
	//Se retorna 0 a stringA é igual a stringB
	//Se retorna -1 a stringA é menor a stringB
	
	
	
	return 0;
}
