# include <stdio.h>

int main () {
    int x;
    printf("Digite um numero entre 1 e 4: ");
    scanf("%d", &x);
    switch(x) {
        case 1:
            printf("Numero um");
        break;

        case 2:
            printf("Numero dois");
        break;

        case 3:
        case 4:
            printf("Numero tres ou quatro");
        break;

        default:
            printf("Outro numero");
    }
    return 0;
}