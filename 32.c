# include <stdio.h>

int main() {
    int x;
    printf("Digite o dia da semana [1-7]: ");
    scanf("%d", &x);
    switch(x) {
        case 1:
            printf("Domingo");
        break;
        case 2:
            printf("Segunda-feira");
        break;
        case 3:
            printf("Terca-feira");
        break;
        case 4:
            printf("Quarta-feira");
        break;
        case 5:
            printf("Quinta-feira");
        break;
        case 6:
            printf("Sexta-feira");
        break;
        case 7:
            printf("Sabado");
        break;
        default:
            printf("Nao foi possivel detectar o dia da semana!");
    }
    return 0;
}
