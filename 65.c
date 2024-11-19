# include <stdio.h>

int main() {
    char nome[40];
    char sobrenome[50];
    printf("Digite o seu nome: ");
    scanf("%s",nome);
    printf("Digite o seu sobrenome: ");
    scanf("%s",sobrenome);
    printf("\nNome digitado: %s %s",nome, sobrenome);
    printf("\nPrimeira letra do nome digitado: %c",nome[0]);
    printf("\nPrimeira letra do sobrenome digitado: %c",sobrenome[0]);
    return 0;
}