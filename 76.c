# include <stdio.h>

int multiplicacao(int a, int b) {
    return a * b;
}

int main() {
    int resultado = multiplicacao(15, 30);
    printf("A multiplicação é: %d\n", resultado);
    printf("A multiplicação é: %d\n", multiplicacao(200,400));
    return 0;
}