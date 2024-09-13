# include <stdio.h>

int main() {
    int n, res;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    res = n % 2;

    if (res == 0) {
        printf("\n O numero %d e par", n);
    }
    else {
        printf("\n O numero %d e impar", n);
    }
    return 0;
}