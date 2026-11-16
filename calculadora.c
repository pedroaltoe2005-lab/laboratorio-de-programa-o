#include <stdio.h>

// 2 e 3. Funções matemáticas recebendo dois números e retornando o resultado
float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    // 5. Impedir a divisão por zero (retornamos 0 e tratamos a mensagem na chamada)
    if (b == 0) {
        printf("Erro: Não é possível dividir por zero!\n");
        return 0;
    }
    return a / b;
}

// 1. Função para exibir o menu
void exibirMenu() {
    printf("\n=========================\n");
    printf("   CALCULADORA SIMPLES   \n");
    printf("=========================\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("0. Sair\n");
    printf("=========================\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    float num1, num2, resultado;

    // 6. Permitir novas operações até que o usuário escolha sair
    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo da calculadora. Até mais!\n");
            break;
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);

            // 4. Utilizar switch para selecionar a operação
            switch (opcao) {
                case 1:
                    resultado = somar(num1, num2);
                    printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                    break;
                case 2:
                    resultado = subtrair(num1, num2);
                    printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                    break;
                case 3:
                    resultado = multiplicar(num1, num2);
                    printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
                    break;
                case 4:
                    // Verificação extra para não exibir resultado se houve divisão por zero
                    if (num2 != 0) {
                        resultado = dividir(num1, num2);
                        printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                    } else {
                        dividir(num1, num2); // Chama apenas para exibir a mensagem de erro
                    }
                    break;
            }
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
    
