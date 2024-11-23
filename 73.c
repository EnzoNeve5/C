# include <stdio.h>
# include <stdlib.h>

void desenharCruz() {
    int L, C;
    printf("Digite o número de linhas: ");
    scanf("%d", &L);
    printf("Digite o número de colunas: ");
    scanf("%d", &C);

    int **matriz = (int **)malloc(L * sizeof(int *));
    for (int i=0;i<L;i++) {
        matriz[i] = (int *)malloc(C * sizeof(int));
    }

    for (int i=0;i<L;i++) {
        for (int j=0;j<C;j++) {
            if (i==L/2 || j==C/2) {
                matriz[i][j]=1;
            } else {
                matriz[i][j]=0;
            }
        }
    }

    for (int i=0;i<L;i++) {
        for (int j=0;j<C;j++) {
            if (i==L/2 && j==C/2) {
                printf("+");
            } else if (i==L/2) {
                printf("-");
            } else if (j==C/2) {
                printf("|");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i=0;i<L;i++) {
        free(matriz[i]);
    }
    free(matriz);
}

void desenharX() {
    int L, C;
    printf("Digite o número de linhas: ");
    scanf("%d", &L);
    printf("Digite o número de colunas: ");
    scanf("%d", &C);

    int **matriz = (int **)malloc(L * sizeof(int *));
    for (int i=0;i<L;i++) {
        matriz[i] = (int *)malloc(C * sizeof(int));
    }

    for (int i=0;i<L;i++) {
        for (int j=0;j<C;j++) {
            if (i==j || i+j==L-1) {
                matriz[i][j]=1;
            } else {
                matriz[i][j]=0;
            }
        }
    }

    for (int i=0;i<L;i++) {
        for (int j=0;j<C;j++) {
            if (i==j && i+j==L-1) {
                printf("x");
            } else if (i==j) {
                printf("\\");
            } else if (i+j==L-1) {
                printf("/");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i=0;i<L;i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    printf("Desenho de uma cruz:\n");
    desenharCruz();

    printf("\nDesenho de um X:\n");
    desenharX();

    return 0;
}
