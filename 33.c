# include <stdio.h>

int main() {
    int x;
    printf("Digite o dia da semana [1-7]: ");
    scanf("%d", &x);
    if (x == 1) {
        printf("Domingo");
    }
    else if (x == 2) {
        printf("Segunda-feira");
    }
    else if (x == 3) {
        printf("Terca-feira");
    }
    else if (x == 4) {
        printf("Quarta-feira");
    }
    else if (x == 5) {
        printf("Quinta-feira");
    }
    else if (x == 6) {
        printf("Sexta-feira");
    }
    else if (x == 7) {
        printf("Sabado");
    }
    else {
        printf("Nao foi possivel detectar o dia da semana");
    }
    return 0;
}