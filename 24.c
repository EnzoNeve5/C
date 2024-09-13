# include <stdio.h>

int main() {
    float salario;
    printf("Digite o seu salario: R$");
    scanf("%f", &salario);

    if (salario < 500) {
        printf("\nO salario passa a ser de R$%.2f", salario * 1.15);
    }
    else {
        if (salario <= 1000) {
            printf("\nO salario passa a ser de R$%.2f", salario * 1.10);
        }
        else {
            printf("\nO salario passa a ser de R$%.2f", salario * 1.05);
        }
    }
    return 0;
}