# include <stdio.h>
# include <string.h>

int main() {
    char texto_destino[30];
    char texto_origem[4] = "USP";
    strcpy(texto_destino, texto_origem);
    printf("\n Origem : %s",texto_origem);
    printf("\n Destino: %s",texto_destino);
    return 0;
}