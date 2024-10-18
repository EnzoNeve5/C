# include <stdio.h>

int main() {
    float valores[10];
    for (int i=0;i<10;i++) {
        printf("Digite o %dº valor real: ",i+1);
        scanf("%f", &valores[i]);
    }
    printf("Os valores na ordem inversa são:\n");
    for (int i=9;i>=0;i--) {
        printf("%.2f\n", valores[i]);
    }
    return 0;
}
