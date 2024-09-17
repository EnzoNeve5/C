# include <stdio.h>

int main() {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    switch(x) {
        case 1:
        case 2:
            printf("\nSai correndo, nao da para enfrentar!");
        break;

        case 3:
        case 4:
            printf("\nSe esconda e aguarde os reforcos!!");
        break;

        case 5:
        case 6:
            printf("\nBora enfrentar o Boss!!!");
        break;

        default:
            printf("\nTivemos um problema com os tipos de dados que voce digitou :(");
    }
    return 0;
}
