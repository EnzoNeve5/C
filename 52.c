# include <stdio.h>

int main() {
    int Q = 4;
    int arr[Q], i, j, temp;
    printf("Digite %d números\n",Q);
    for(i=0; i<Q; i++){
        printf("Digite o número %d: ",i+1);
        scanf("%d",&arr[i]);
    }  
    for(i=0;i<Q;i++){
        for(j=i+1;j<Q;j++) {
            if(arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nOs %d números em ordem crescente\n",Q);
    for(i=0;i<Q;i++) {
        printf("número %d: %d\n",i+1,arr[i]);     
    }  
    return 0;
}