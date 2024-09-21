# include <stdio.h>

int main() {
    int n1, n2, n3, aux;
    printf("Digite o valor para n1: ");
    scanf("%d",&n1);
    printf("Digite o valor para n2: ");
    scanf("%d",&n2);
    printf("Digite o valor para n3: ");
    scanf("%d",&n3);
    
    printf("\nOs valores digitados sao: %d, %d, %d",n1 ,n2 ,n3);
    
    if(n1 > n2) {
        aux=n1;
        n1=n2;
        n2=aux;
        printf("\nTrocou n1 com n2 : %d, %d, %d ",n1 ,n2 ,n3);
    }
    if(n2 > n3) {
        aux=n2;
        n2=n3;
        n3=aux;
        printf("\nTrocou n2 com n3 : %d, %d, %d ",n1 ,n2 ,n3);
    }
    if(n1 > n2) {
        aux=n1;
        n1=n2;
        n2=aux;
        printf("\nTrocou n1 com n2 : %d, %d, %d ",n1 ,n2 ,n3);
    }
    
    printf("\nOs valores em ordem crescente sao: %d, %d, %d ",n1 ,n2 ,n3);
    
    return 0;
}
