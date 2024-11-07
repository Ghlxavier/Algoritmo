#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int opcao;
    float numero;

    while (1) {
        printf("Menu:\n");
        printf("1. Exibir mensagem\n");
        printf("2. Calcular quadrado de um número\n");
        printf("3. Calcular cubo de um número\n");
        printf("4. Sair\n");
        printf("Escolha uma opção (1-4): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Olá! Esta é uma mensagem do programa.\n");
                break;
            case 2:
                printf("Digite um número: ");
                scanf("%f", &numero);
                printf("O quadrado de %.2f é %.2f.\n", numero, numero * numero);
                break;
            case 3:
                printf("Digite um número: ");
                scanf("%f", &numero);
                printf("O cubo de %.2f é %.2f.\n", numero, numero * numero * numero);
                break;
            case 4:
                printf("Saindo do programa. Até mais!\n");
                return 0; 
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
