# include <stdio.h>
# include <string.h>

int main() {
    char string[200];
    char vogais[]="aeiou";
    char consoantes[]="bcdfghjklmnpqrstvwxyz";
    char c;
    int i,j,t,vog,con;
    vog=0;con=0;
    printf("Digite um texto: ");
    fgets(string, sizeof(string),stdin);
    string[strcspn(string, "\n")] = '\0';
    t=strlen(string);
    printf("\nTexto digitado: %s",string);
    printf("\nCaracteres: %d",t);
    for(i=0;i<t;i++) {
        c=string[i];
        for(j=0;j<strlen(vogais);j++) {
            if(c==vogais[j]){vog++;}
        }
        for(j=0;j<strlen(consoantes);j++) {
            if(c==consoantes[j]){con++;}
        }
    }
    printf("\nVogais: %d",vog);
    printf("\nConsoantes: %d",con);
    return 0;
}