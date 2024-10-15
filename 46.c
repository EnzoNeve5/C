# include <stdio.h>

int main (){
    int i, Q;
    printf("Digite a quantidade de notas do aluno: ");
    scanf("%d",&Q);
    int num[Q];
    printf("Digite %d notas: ",Q);
    for (i=0;i<Q;i++) {
        printf("\n Digite a %dª nota: ",i+1);
        scanf("%d",&num[i]);
    }
    for (i=0;i<Q;i++) {
        if (num[i]>10) {
            printf("\n Tivemos um problema com os dados inseridos");
        }
        else if (num[i]<0) {
            printf("\n Tivemos um problema com os dados inseridos");
        }
        else {
            printf("\n%dª Nota: = %d",i+1,num[i]);
        }
    }
    return 0;
}