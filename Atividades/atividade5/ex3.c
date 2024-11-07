#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int n, i = 1;
    float soma = 0.0, media;

    printf("Quantos números você deseja inserir? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um número maior que zero.\n");
        return 1;
    }

    while (i <= n) {
        float numero;
        printf("Digite o número %d: ", i);
        scanf("%f", &numero);
        soma += numero; 
        i++;
    }

    media = soma / n; 

    printf("A média dos números inseridos é: %.2f\n", media);

    return 0;
}
