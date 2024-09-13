# include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n == 5 || n == 6) {
        printf ("\nBora enfrentar o Boss!!!");
    }
    else {
        if (n == 3 || n == 4) {
            printf ("\nSe esconda e aguarde os reforcos!!");
        }
        else if (n == 1 || n == 2) {
            printf ("\nSai correndo, nao da para enfrentar!");
        }
        else {
            printf ("\nTivemos um problema com os tipos de dados que voce digitou :(");
        }
    }
    return 0;
}