# include <stdio.h>

int main() {
    char nome_completo[200];
    printf ("Digite o seu nome completo: ");
    fgets(nome_completo, sizeof(nome_completo), stdin);
    printf("Nome digitado: %s",nome_completo);
    puts(nome_completo);
    
    return 0;
}