# include <stdio.h>

int main() {
    int A[] = {1, 3, 4, 2, 5, 8, 7, 6, 9, 12, 15};
    int B[11];
    int tamanho = sizeof(A) / sizeof(A[0]);
    for (int i=0;i<tamanho;i++) {
        if (A[i] % 2 != 0) {
            B[i] = A[i] * 2;
        } else {
            B[i] = A[i];
        }
    }
    printf("Vetor A:\n");
    for (int i=0;i<tamanho;i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Vetor B:\n");
    for (int i=0;i<tamanho;i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    return 0;
}
