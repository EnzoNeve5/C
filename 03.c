# include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d",&num2);
    printf("\nPrimeiro numero: %d",num1);
    printf("\nSegundo numero %d",num2);
    printf("\nSoma: %d",num1+num2);
    printf("\nSubtracao: %d",num1-num2);
    printf("\nMultiplicacao: %d",num1*num2);
    return 0;
}