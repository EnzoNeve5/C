# include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtracao(int c, int d) {
    return c - d;
}

int multiplicacao(int e, int f) {
    return e * f;
}

float divisao(float g, float h) {
    return h != 0 ? g / h : 0;
}

int resto(int i, int j) {
    return j != 0 ? i % j : 0;
}

void calcular() {
    char operacao;
    int num1, num2;

    printf("Digite a operação matemática desejada (+, -, *, / ou %%): ");
    scanf("%c", &operacao);

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    switch (operacao) {
        case '+':
            printf("Resultado: %d + %d = %d\n", num1, num2, soma(num1, num2));
            break;
        case '-':
            printf("Resultado: %d - %d = %d\n", num1, num2, subtracao(num1, num2));
            break;
        case '*':
            printf("Resultado: %d * %d = %d\n", num1, num2, multiplicacao(num1, num2));
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultado: %.1f / %.1f = %.1f\n", (float)num1, (float)num2, divisao(num1, num2));
            }
            else {
                printf("Erro: Divisão por zero não é permitida!\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Resultado: %d %% %d = %d\n", num1, num2, resto(num1, num2));
            }
            else {
                printf("Erro: Resto de divisão por zero não é permitido!\n");
            }
            break;
        default:
            printf("Operação inválida! Por favor, escolha uma operação válida (+, -, *, / ou %%).\n");
    }
}

int main() {
    calcular();
    return 0;
}
