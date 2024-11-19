# include <stdio.h>
# include <string.h>

int main() {
    char nome1[20], nome2[20]="Uninove";
    printf("Digite um texto: ");
    fgets(nome1,sizeof(nome1),stdin);
    scanf("%s",nome1);
    if(strcmp(nome1, nome2) == 0) {
        printf("\n As Strings sao Iguais\n");
    }
    else {
        printf("\n As Strings sao Diferentes\n");
    }
    strcat(nome1, " Linguagem C ");
    printf("%s", nome1);
    strcat(nome2, " Linguagem C ");
    printf("%s", nome2);
    return 0;
}