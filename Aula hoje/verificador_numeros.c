#include <stdio.h>

// 2 e 3. Função verificarPar() que retorna 1 para par e 0 para ímpar
int verificarPar(int numero) {
    if (numero % 2 == 0) {
        return 1; // 1 para par
    } else {
        return 0; // 0 para ímpar
    }
}

int main() {
    int num;

    // 1. Solicitar um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Chamar a função
    int resultado = verificarPar(num);

    // 4. Apresentar o resultado no programa principal
    if (resultado == 1) {
        printf("O número %d é PAR.\n", num);
    } else {
        printf("O número %d é ÍMPAR.\n", num);
    }

    return 0;
}
