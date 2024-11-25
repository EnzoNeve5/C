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
    int k, l;
    printf("Digite o primeiro número: ");
    scanf("%d", &k);
    printf("Digite o segundo número: ");
    scanf("%d", &l);

    printf("A soma de %d + %d = %d\n", k, l, soma(k, l));
    printf("A subtração de %d - %d = %d\n", k, l, subtracao(k, l));
    printf("A multiplicação de %d * %d = %d\n", k, l, multiplicacao(k, l));

    if (l != 0) {
        printf("A divisão de %.1f / %.1f = %.1f\n", (float)k, (float)l, divisao(k, l));
        printf("O resto de %d / %d = %d\n", k, l, resto(k, l));
    } else {
        printf("Divisão e resto impossíveis: divisor é zero!\n");
    }
    printf("\n---------------------------------------\n\n");
}

int main() {
    calcular();

    int resultado_da_soma = soma(5, 3);
    int resultado_da_subtracao = subtracao(7, 4);
    int resultado_da_multiplicacao = multiplicacao(8, 9);
    float resultado_da_divisao = divisao(8.4, 0.5);
    int resto_da_divisao = resto(4, 3);

    printf("Resultados diretos das funções:\n");
    printf("A soma é: %d\n", resultado_da_soma);
    printf("A soma é: %d\n", soma(20, 30));
    printf("A subtração é: %d\n", resultado_da_subtracao);
    printf("A subtração é: %d\n", subtracao(40, 35));
    printf("A multiplicação é: %d\n", resultado_da_multiplicacao);
    printf("A multiplicação é: %d\n", multiplicacao(2, 6));
    printf("A divisão é: %.1f\n", resultado_da_divisao);
    printf("A divisão é: %.1f\n", divisao(1.7, 0.2));
    printf("O resto da divisão é: %d\n", resto_da_divisao);
    printf("O resto da divisão é: %d\n", resto(6, 4));

    return 0;
}
