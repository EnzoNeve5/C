# include <stdio.h>

int main() {
    int i, Q;
    printf("Digite a quantidade de notas: ");
    scanf("%d",&Q);
    float soma, media, nota[Q];
    soma=0;
    printf("Digite %d notas\n",Q);
    for (i=0;i<Q;i++) { 
       do {
       printf("Digite a %dª nota: ",i+1);
       scanf("%f",&nota[i]);
            if (nota[i]<0 || nota[i]>10) {
                printf("Favor digitar um valor ente 0 e 10!\n");
            }
       }while(nota[i]<0 || nota[i]>10);
       soma+=nota[i];  
    }
    media=soma/Q;
    printf("\n Notas digitadas:\n");
    for (i=0;i<Q;i++) {
       printf("\nDigite a %dª nota: %.2f",i+1,nota[i]); 
    }
    printf("\nSua media foi: %.2f",media);
    if (media>=6) {
        printf("\nParabens, você foi Aprovado!!!");
    }
    else {
        printf("\nFoi quase, mas infelizmente você foi Reprovado!!!");  
    }
    return 0;
}