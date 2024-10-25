# include <stdio.h>

int main() {
    int matriz[4][4] = {
        {1, 8, 2, 9},
        {1, 5, 3, 6},
        {7, 1, 9, 2},
        {9, 3, 0, 1}
    };

    int soma_linha[4] = {0};
    int soma_coluna[4] = {0};

    printf("Matriz 4x4:\n");
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            printf("%d ", matriz[i][j]);
            soma_linha[i] += matriz[i][j];
            soma_coluna[j] += matriz[i][j];
        }
        printf("\n");
    }

    printf("\nSoma das linhas:\n");
    for (int i=0;i<4;i++) {
        printf("Soma da linha %d = %d\n", i, soma_linha[i]);
    }
    printf("\nSoma das colunas:\n");
    for (int j=0;j<4;j++) {
        printf("Soma da coluna %d = %d\n", j, soma_coluna[j]);
    }
    return 0;
}
