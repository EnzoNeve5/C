# include <stdio.h>

int main() {
    const int L = 7;
    const int C = 7;
   
    int matriz[L][C], i,j;
   
    for(i=0;i<L;i++) {
        for(j=0;j<C;j++) {
            // if(i>=1 && i<=3 && j>=1 && j<=3) {
            if(i+j==L-1 || i==j || i==L/2 || j==L/2) {    
                matriz[i][j]=1;
                // matriz[2][2]=0;
            }
            else {
                matriz[i][j]=0;
            }
        }
    }
   
    for(i=0;i<L;i++) {
        for(j=0;j<C;j++) {
            printf("|%d|   ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}