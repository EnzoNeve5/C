# include <stdio.h>

int main() {
    const int L = 2;
    const int C = 3;
    float matriz[L][C];
    int i,j;
    for(i=0;i<L;i++) {
        for(j=0;j<C;j++) {
            printf("Digite um valor para %dx%d: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<L;i++) {
        for(j=0;j<C;j++) {
            printf("%.1f\t ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma das matrizes: %.1f", (matriz[0][0]+matriz[0][1]+matriz[0][2]+
                                         matriz[1][0]+matriz[1][1]+matriz[1][2]));
    printf("\nMédia das matrizes: %.3f", (matriz[0][0]+matriz[0][1]+matriz[0][2]+
                                          matriz[1][0]+matriz[1][1]+matriz[1][2]) / 6);
    return 0;
}
