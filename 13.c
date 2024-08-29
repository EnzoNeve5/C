# include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    
    printf("Soma: %d + %d = %d \n",n1, n2, n1 + n2);
    printf("Soma: %d + %d = %d \n",n2, n1 + n2, n2 + n1 + n2);
    printf("Subtracao: %d - %d = %d \n",n1, n2, n1 - n2);
    printf("Multiplicacao: %d * %d = %d \n",n1, n2, n1 * n2);
    printf("Divisao: %.0f / %.0f = %.2f \n",(float)n1, (float)n2, (float)n1 / (float)n2);
    printf("Divisao: %d / %d = %d \n",n1, n2, n1 / n2);
    printf("Resto da divisao: %d / %d => %d \n",n1, n2, n1 % n2);
    
    return 0;
}