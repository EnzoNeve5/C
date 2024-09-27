# include <stdio.h>

int main() {
    int i,x;
    printf("Digite o numero de repeticoes: ");
    scanf("%d",&x);
    i=0;
    while (i<=x) {
        printf("\nLinha %d",i);
        i++;
    }
    return 0;
}