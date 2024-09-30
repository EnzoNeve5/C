# include <stdio.h>

int main() {
    int num,soma;
    soma = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    while (num >= 0) {
        soma += num;
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
    }
    printf("\nSomatorio: %d", soma);
    return 0;
}