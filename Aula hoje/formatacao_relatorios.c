#include <stdio.h>

// 1 e 2. Função exibirLinha() sem parâmetros e sem retorno (void), imprimindo dez asteriscos
void exibirLinha() {
    printf("**********\n");
}

int main() {
    // 3. Chamar a função antes e depois do título de um relatório
    printf("\n");
    
    exibirLinha();
    printf("RELATORIO DE ESTOQUE\n");
    exibirLinha();

    return 0;
}
