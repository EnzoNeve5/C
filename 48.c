# include <stdio.h>

int main() {
    int A[5], B[5];
    for (int i=0;i<5;i++) {
        printf("Digite o %dº número inteiro: ",i+1);
        scanf("%d", &A[i]);
    }
    for (int i=0;i<5;i++) {
        B[i] = A[i] * 3;
    }
    printf("Os valores do vetor B são:\n");
    for (int i=0;i<5;i++) {
        printf("%d\n", B[i]);
    }
    return 0;
}