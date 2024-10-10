# include <stdio.h>

int main() {
    int i;
    int Q=3;
    float nota[Q];
    printf("Digite %d notas: ", Q);
    for (i=0;i<Q;i++) {
        printf("\n Digite a %da nota: ", i+1);
        scanf("%f", &nota[i]);
    }
    printf("\n Notas Digitadas: ");
    for (i=0;i<Q;i++) {
        printf("\nNota %d = %.2f", i+1, nota[i]);
    }
    return 0;
}