#include <stdio.h>
#define BONIFICACAO = 0

int main() {
    float salario, bonificacao, auxilio;


    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);


    if (salario <= 500) {
        bonificacao = salario * 0.05;
    } else if (salario <= 1200) {
        bonificacao = salario * 0.12;
    } else {
        bonificacao = 0;
    }


    if (salario <= 600) {
        auxilio = 150;
    } else {
        auxilio = 100;
    }


    float novo_salario = salario + bonificacao + auxilio;
    printf("Bonificacao: R$ %.2f\n", bonificacao);
    printf("Auxilio-Escola: R$ %.2f\n", auxilio);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}

