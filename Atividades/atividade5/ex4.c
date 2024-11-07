#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	float valor, valorConvertido;
    int opcao;

    const float taxaDolar = 5.47; 
    const float taxaEuro = 6.09;  
    const float taxaPeso = 0.0057;  

    printf("Digite o valor em moeda local: ");
    scanf("%f", &valor);

    printf("Escolha a moeda de destino:\n");
    printf("1. Dólar\n");
    printf("2. Euro\n");
    printf("3. Peso\n");
    printf("Digite sua opção (1, 2 ou 3): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valorConvertido = valor / taxaDolar;
            printf("Valor em Dólares: %.2f\n", valorConvertido);
            break;
        case 2:
            valorConvertido = valor / taxaEuro;
            printf("Valor em Euros: %.2f\n", valorConvertido);
            break;
        case 3:
            valorConvertido = valor / taxaPeso;
            printf("Valor em Pesos: %.2f\n", valorConvertido);
            break;
        default:
            printf("Opção inválida. Por favor, escolha 1, 2 ou 3.\n");
    }

    return 0;
}
