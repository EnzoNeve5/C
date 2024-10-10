# include <stdio.h>

 int main() {
    int q,i, maior, menor;
    printf("Digite a quantidade de números: ");
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
    printf("\nSaída: \n");
    for (i=0;i<q;i++) {
        printf("\nNúmero %d: %d",i+1,num[i]);
    }
    printf("\nMaior: %d | Menor: %d", maior, menor);
    return 0;
}