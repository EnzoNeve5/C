# include <stdio.h>

int main() {
    int i,x;
    printf("Digite o inicio do numero de repeticoes: ");
    scanf("%d",&i);
    printf("Digite o final do numero de repeticoes: ");
    scanf("%d",&x);
    while (i<x) {
        printf("\nLinha %d",i);
        i++;
    }
    while (i>=x) {
        printf("\nLinha %d",i);
        i--;
    }
    return 0;
}