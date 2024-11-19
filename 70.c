# include <stdio.h>

int main() {
    int i,j,k,linhas;
    printf("Digite a quantidade de linhas: ");
    scanf("%d",&linhas);
    printf("\nPirâmide invertida com %d linhas \n",linhas);
    for(i=0;i<linhas;i++) {
        for(j=0;j<i;j++) {
            printf(" ");
        }
        for(k=0;k<2*linhas-1-i-j;k++) {
            printf("*");    
        }
        printf("\n");
    }
    return 0;
}