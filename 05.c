# include <stdio.h>

int main() {
    float vlgas;
    printf("Digite o valor atual da gasolina: R$");
    scanf("%f",&vlgas);
    printf("O valor da gasolina com quinze por cento de aumento e de R$%.2f", vlgas*1.15);
    return 0;
}