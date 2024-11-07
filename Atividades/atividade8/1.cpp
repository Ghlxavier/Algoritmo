#include <stdio.h>


typedef struct {
    char nome[50];
    float vendasMensais[3];
    float pontuacaoMensal[3]; 
    float pontuacaoTotal;
} Funcionario;

int main() {
    Funcionario f[2];
    int i, j;
    float totalVendido = 0;

    
    for (i = 0; i < 2; i++) {
        printf("Digite o nome do funcionario %d: ", i + 1);
        scanf("%s", f[i].nome);
        f[i].pontuacaoTotal = 0;

        for (j = 0; j < 3; j++) {
            printf("Digite as vendas do mes %d do funcionario %s: ", j + 1, f[i].nome);
            scanf("%f", &f[i].vendasMensais[j]);
            f[i].pontuacaoMensal[j] = f[i].vendasMensais[j] / 1000.0; 
            f[i].pontuacaoTotal += f[i].pontuacaoMensal[j];
            totalVendido += f[i].vendasMensais[j];
        }
    }


    for (i = 0; i < 2; i++) {
        printf("\nPontuacao mensal do funcionario %s:\n", f[i].nome);
        for (j = 0; j < 3; j++) {
            printf("Mes %d: %.2f pontos\n", j + 1, f[i].pontuacaoMensal[j]);
        }
    }


    int indiceMaior = 0;
    for (i = 1; i < 2; i++) {
        if (f[i].pontuacaoTotal > f[indiceMaior].pontuacaoTotal) {
            indiceMaior = i;
        }
    }
    printf("\nFuncionario com maior pontuacao total: %s\n", f[indiceMaior].nome);
    printf("Valor total vendido por todos os funcionarios: R$ %.2f\n", totalVendido);

    return 0;
}
