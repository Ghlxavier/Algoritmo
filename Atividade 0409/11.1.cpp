#include <stdio.h>

int main() {
    int codigo;
    float salario_atual, aumento, novo_salario;

    printf("Digite o codigo do cargo (1-5): ");
    scanf("%d", &codigo);
    printf("Digite o salario atual: ");
    scanf("%f", &salario_atual);

    if (codigo == 1) {
        aumento = salario_atual * 0.50;
        printf("Cargo: Escriturario\n");
    } else if (codigo == 2) {
        aumento = salario_atual * 0.35;
        printf("Cargo: Secretario\n");
    } else if (codigo == 3) {
        aumento = salario_atual * 0.20;
        printf("Cargo: Caixa\n");
    } else if (codigo == 4) {
        aumento = salario_atual * 0.10;
        printf("Cargo: Gerente\n");
    } else if (codigo == 5) {
        aumento = 0;
        printf("Cargo: Diretor (Nao tem aumento)\n");
    }

    novo_salario = salario_atual + aumento;
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}

