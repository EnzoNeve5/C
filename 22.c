# include <stdio.h>

int main() {
    int a, b, x, r;
    printf("Digite o valor para a: ");
    scanf("%d", &a);
    printf("Digite o valor para b: ");
    scanf("%d", &b);

    x = a + b;

    if (x >= 10) {
        r = x + 5;
    }
    else {
        r = x - 7;
    }
    printf ("\nValor de r:%d", r);
    return 0;
}