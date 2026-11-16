#include <stdio.h>

// 2. Função maiorPreco() que recebe os valores e retorna o maior
float maiorPreco(float preco1, float preco2) {
    if (preco1 > preco2) {
        return preco1;
    } else {
        return preco2;
    }
}

int main() {
    float preco1, preco2;

    // 1. Solicitar dois preços ao usuário
    printf("Digite o preço do primeiro produto: R$ ");
    scanf("%f", &preco1);

    printf("Digite o preço do segundo produto: R$ ");
    scanf("%f", &preco2);

    // 4. Informar quando os preços forem iguais
    if (preco1 == preco2) {
        printf("\nOs dois produtos possuem o mesmo preço: R$ %.2f\n", preco1);
    } else {
        // 2 e 3. Chamar a função e apresentar o resultado no programa principal
        float maior = maiorPreco(preco1, preco2);
        printf("\nO maior preço entre os produtos é: R$ %.2f\n", maior);
    }

    return 0;
}
