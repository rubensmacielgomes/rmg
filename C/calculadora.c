#include <stdio.h>

int main() {
    char operacao;
    double num1, num2, resultado;

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite a primeira operacao: ");
    scanf("%lf", &num1);

    printf("Digite a segunda operacao: ");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro! Divisao por zero.\n");
                return 1;
            }
            resultado = num1 / num2;
            break;
        default:
            printf("Operacao invalida.\n");
            return 1;
    }

    printf("Resultado: %.2lf\n", resultado);
    return 0;
}
