# include <stdio.h>

int main() {
    int i;
    int Q;
    printf("Digite a quantidade de número(s) que você deseja utilizar: ");
    scanf("%d",&Q);
    int num[Q];
    printf("Digite %d número(s): ",Q);
    for (i=0;i<Q;i++) {
        printf("\n Digite o %dº número: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Número(s) digitado(s): %d",Q);
    for (i=0;i<Q;i++) {
        printf("\nNúmero %d: = %d",i+1, num[i]);
    }
    return 0;
}