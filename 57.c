# include <stdio.h>

int main() {
    int matriz[3][4] = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {1, 9, 2, 6}
    };
    printf("Soma das matrizes: %d", matriz[0][0]+matriz[0][1]+matriz[0][2]+matriz[0][3]+
                                    matriz[1][0]+matriz[1][1]+matriz[1][2]+matriz[1][3]+
                                    matriz[2][0]+matriz[2][1]+matriz[2][2]+matriz[2][3]);
    printf("\nMédia das matrizes: %.2f", (float)(matriz[0][0]+matriz[0][1]+matriz[0][2]+matriz[0][3]+
                                                 matriz[1][0]+matriz[1][1]+matriz[1][2]+matriz[1][3]+
                                                 matriz[2][0]+matriz[2][1]+matriz[2][2]+matriz[2][3]) / 12);
    printf("\nMatrizes: \n %d %d %d %d \n %d %d %d %d \n %d %d %d %d", matriz[0][0],matriz[0][1],matriz[0][2],matriz[0][3],
                                                                       matriz[1][0],matriz[1][1],matriz[1][2],matriz[1][3],
                                                                       matriz[2][0],matriz[2][1],matriz[2][2],matriz[2][3]);
    return 0;
}