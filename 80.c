# include <stdio.h>

int main() {
    int x = 10;
    int vetor[] = {1, 2, 3, 4, 5};
    int *ponteirodovetor = vetor;
    int *ponteiro = &x;
    int **ponteirodoponteiro = &ponteiro;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", x);
    printf("Valor do ponteiro: %d\n", *ponteiro);
    printf("Endereço do ponteiro: %p\n", *ponteiro);
    printf("Valor apontado pelo ponteiro: %d\n", **ponteirodoponteiro);
    printf("Endereço apontado pelo ponteiro: %p\n", **ponteirodoponteiro);
    *ponteiro = 50;
    printf("Valor de x: %d\n", x);
    for (int i=0;i<5;i++) {
        printf("Elemento %d: %d\n", i, *(ponteirodovetor + i));
    }
    return 0;
}
