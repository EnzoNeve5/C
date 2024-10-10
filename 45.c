# include <stdio.h>

 int main() {
    int q,i,l, maior, menor;
    char teste[33] = {"Digite a quantidade de números: "};
    char teste2[7] = {"Maior: "};
    char teste3[7] = {"Menor: "};
    for (l=0;l<33;l++) {
        printf("%c",teste[l]);
    }
    scanf("%d",&q);
    int num[q];
    for (i=0;i<q;i++) {
        printf("Digite o número %d: ",i+1);
        scanf("%d",&num[i]);
    }
    menor=num[0];
    maior=num[0];
    for (i=1;i<q;i++) {
        if (num[i]<menor) {
            menor=num[i];
        }
        if (num[i]>maior) {
            maior=num[i];
        }
    }
    printf("Saída: \n");
    for (i=0;i<q;i++) {
        printf("Número %d: %d\n",i+1,num[i]);
    }
    for (l=0;l<7;l++) {
        printf("%c",teste2[l]);
    }
    printf("%d | ", maior);
    for (l=0;l<7;l++) {
        printf("%c",teste3[l]);
    }
    printf("%d", menor);
    return 0;
}