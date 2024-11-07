#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int opcaoPrato, opcaoAcompanhamento;
    int continuar = 1;

    while (continuar) {
        printf("Menu de Pratos Principais:\n");
        printf("1. Frango Grelhado\n");
        printf("2. Carne Assada\n");
        printf("3. Peixe ao Molho\n");
        printf("4. Sair\n");
        printf("Escolha um prato principal (1-4): ");
        scanf("%d", &opcaoPrato);

        if (opcaoPrato == 4) {
            continuar = 0; 
            break;
        }

        switch (opcaoPrato) {
            case 1:
                printf("Você escolheu Frango Grelhado.\n");
                break;
            case 2:
                printf("Você escolheu Carne Assada.\n");
                break;
            case 3:
                printf("Você escolheu Peixe ao Molho.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                continue;
        }

        printf("Escolha um acompanhamento:\n");
        printf("1. Arroz\n");
        printf("2. Batata Frita\n");
        printf("3. Salada\n");
        printf("Escolha um acompanhamento (1-3): ");
        scanf("%d", &opcaoAcompanhamento);

        switch (opcaoAcompanhamento) {
            case 1:
                printf("Você escolheu Arroz como acompanhamento.\n");
                break;
            case 2:
                printf("Você escolheu Batata Frita como acompanhamento.\n");
                break;
            case 3:
                printf("Você escolheu Salada como acompanhamento.\n");
                break;
            default:
                printf("Opção inválida. Nenhum acompanhamento selecionado.\n");
        }

        printf("\n"); 
    }

    printf("Obrigado por usar o menu do restaurante! Até mais!\n");
    return 0;
}
