#include <stdio.h>

struct Produto {
    int codigo;
    char descricao[50];
    float precoCompra;
    float precoVenda;
    int quantidade;
    int estoqueMinimo;
};

// Fun��o para cadastrar os produtos
void cadastrarProdutos(Produto produtos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Cadastro do Produto %d\n", i + 1);
        printf("C�digo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Descri��o: ");
        getchar(); // limpar o buffer
        fgets(produtos[i].descricao, 50, stdin);
        printf("Pre�o de compra: ");
        scanf("%f", &produtos[i].precoCompra);
        printf("Pre�o de venda: ");
        scanf("%f", &produtos[i].precoVenda);
        printf("Quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Estoque m�nimo: ");
        scanf("%d", &produtos[i].estoqueMinimo);
        printf("\n");
    }
}

// Fun��o para calcular o lucro e o percentual de lucro de um produto espec�fico
void mostrarLucro(Produto produtos[], int tamanho) {
    int codigo;
    printf("Digite o c�digo do produto para calcular o lucro: ");
    scanf("%d", &codigo);

    for (int i = 0; i < tamanho; i++) {
        if (produtos[i].codigo == codigo) {
            float lucro = produtos[i].precoVenda - produtos[i].precoCompra;
            float percentual = (lucro / produtos[i].precoCompra) * 100;
            printf("Produto: %s", produtos[i].descricao);
            printf("Lucro: R$ %.2f\n", lucro);
            printf("Percentual de Lucro: %.2f%%\n", percentual);
            return;
        }
    }
    printf("Produto com c�digo %d n�o encontrado.\n", codigo);
}

// Fun��o para exibir produtos com estoque abaixo do m�nimo
void mostrarEstoqueBaixo(Produto produtos[], int tamanho) {
    printf("Produtos com estoque abaixo do m�nimo:\n");
    for (int i = 0; i < tamanho; i++) {
        if (produtos[i].quantidade < produtos[i].estoqueMinimo) {
            printf("C�digo: %d\n", produtos[i].codigo);
            printf("Descri��o: %s", produtos[i].descricao);
            printf("Quantidade em estoque: %d\n", produtos[i].quantidade);
            printf("Estoque m�nimo: %d\n\n", produtos[i].estoqueMinimo);
        }
    }
}

int main() {
    int tamanho = 2;
    Produto produtos[tamanho];

    cadastrarProdutos(produtos, tamanho);
    mostrarLucro(produtos, tamanho);
    mostrarEstoqueBaixo(produtos, tamanho);

    return 0;
}

