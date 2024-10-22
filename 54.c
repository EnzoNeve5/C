# include <stdio.h>

int main() {
    int i, Q;
    printf("Digite um número: ");
    scanf("%d",&i);
    if (i>9999) {
        printf("ERRO! número acima de 9999");
    }
    else if (i<0) {
        printf("ERRO! número abaixo de 0");
    }
    else if (i>999) {
        printf("O número digitado foi: %d", i);
        Q = 4;
        printf("\nA quantidade de dígitos é %d", Q);
    }
    else if (i>99) {
        printf("O número digitado foi: %d", i);
        Q = 3;
        printf("\nA quantidade de dígitos é %d", Q);
    }
    else if (i>9) {
        printf("O número digitado foi: %d", i);
        Q = 2;
        printf("\nA quantidade de dígitos é %d", Q);
    }
    else {
        printf("O número digitado foi: %d", i);
        Q = 1;
        printf("\nA quantidade de dígitos é %d", Q);
    }
    return 0;
}