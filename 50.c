# include <stdio.h>

int main() {
    int numeros[5];
    int pares[5];
    int quantidade_pares = 0;
    printf("Digite 5 números inteiros:\n");
    for (int i=0;i<5;i++) {
        scanf("%d", &numeros[i]);
    }
    for (int i=0;i<5;i++) {
        if (numeros[i] % 2 == 0) {
            pares[quantidade_pares] = numeros[i];
            quantidade_pares++;
        }
    }
    printf("Quantidade de números pares: %d\n", quantidade_pares);
    if (quantidade_pares > 0) {
        printf("Números pares:\n");
        for (int i=0;i<quantidade_pares; i++) {
            printf("%d\n", pares[i]);
        }
    } else {
        printf("Nenhum número par encontrado.\n");
    }
    return 0;
}
