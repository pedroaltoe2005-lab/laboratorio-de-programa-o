#include <stdio.h>

// 2, 3 e 4. Função calcularFatorial usando o loop 'for' e retornando o resultado
long long calcularFatorial(int n) {
    long long fatorial = 1;
    
    // Tratamento especial para o fatorial de 0 (que é 1)
    if (n == 0) {
        return 1;
    }

    // Utilizando o 'for' para realizar o cálculo acumulativo
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    
    return fatorial;
}

int main() {
    int num;

    // 1. Solicitar um número entre 0 e 12 (com validação)
    do {
        printf("Digite um número inteiro entre 0 e 12: ");
        scanf("%d", &num);

        if (num < 0 || num > 12) {
            printf("Valor inválido! O número deve estar entre 0 e 12.\n");
        }
    } while (num < 0 || num > 12);

    // Chamar a função
    long long resultado = calcularFatorial(num);

    // 5. Apresentar o fatorial calculado
    printf("O fatorial de %d! é: %lld\n", num, resultado);

    return 0;
}
