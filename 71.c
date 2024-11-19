# include <stdio.h>

int main() {
    char texto[30];
    printf("Digite uma palavra: ");
    fgets(texto, sizeof(texto), stdin);
    for(int i=0;texto[i]!='\0';i++) {
        printf("%c \n",texto[i]);
    }
    return 0;
}