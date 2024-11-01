# include <stdio.h>

int main() {
    int matriz_original[3][3];
    int matriz_transposta[3][3];

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("Elemento %dx%d: ", i, j);
            scanf("%d", &matriz_original[i][j]);
        }
    }

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            matriz_transposta[i][j] = matriz_original[j][i];
        }
    }

    printf("\nMatriz original:\n");
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("%d ", matriz_original[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("%d ", matriz_transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
