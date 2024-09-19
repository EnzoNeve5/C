# include <stdio.h>

int main() {
    int brasil, argentina;
    printf("Digite a quantidade de gols do Brasil: ");
    scanf("%d", &brasil);
    printf("Digite a quantidade de gols da Argentina: ");
    scanf("%d", &argentina);
    if (brasil > argentina) {
        printf("O Brasil ganhou!!! :)");
    }
    else if (argentina > brasil) {
        printf("A Argentina ganhou!!! :(");
    }
    else {
        printf("Houve um empate!!! :|");
    }
    return 0;
}