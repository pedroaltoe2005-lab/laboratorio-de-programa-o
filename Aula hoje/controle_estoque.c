#include <stdio.h>

// 2 e 3. Função dobro() que recebe a quantidade e retorna o dobro
int dobro(int quantidade) {
    return quantidade * 2;
}

int main() {
    int qtdInicial, qtdFinal;

    // 1. Solicitar a quantidade inicial
    printf("Digite a quantidade inicial em estoque: ");
    scanf("%d", &qtdInicial);

    // Chamar a função para calcular o dobro
    qtdFinal = dobro(qtdInicial);

    // 4. Exibir a quantidade inicial e final
    printf("\n--- Relatório de Estoque ---\n");
    printf("Quantidade inicial: %d\n", qtdInicial);
    printf("Quantidade final (após duplicar): %d\n", qtdFinal);

    return 0;
}
