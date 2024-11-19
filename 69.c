# include <stdio.h>
# include <string.h>

int main() {
    int tam;
    char texto[50] = "Amanhã a aula vai ser de: ";
    printf("%s", texto);
    tam=strlen(texto);
    printf("\nQuantidade de caracteres: %d",tam);
    strcat(texto, "Linux");
    printf("\n%s", texto);
    tam=strlen(texto);
    printf("\nQuantidade de caracteres: %d",tam);
    return 0;
}