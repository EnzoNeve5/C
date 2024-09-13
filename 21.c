# include <stdio.h>

int main() {
    int a, b, x;
    printf("Digite o valor para a: ");
    scanf("%d", &a);
    printf("Digite o valor para b: ");
    scanf("%d", &b);

    x = a + b;

    if (x > 10) {
        printf ("\n Valor de X: %d", x);
    }
    printf ("\n Valor de X: %d", x);
    return 0;
}