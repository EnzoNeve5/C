# include <stdio.h>
# include <stdlib.h>

int main() {
    int *ponteiro = (int *)malloc(sizeof(int));

    if (ponteiro == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    *ponteiro = 100;
    printf("Valor: %d\n", *ponteiro);

    free(ponteiro);
    ponteiro = NULL;
    printf("Valor: %d\n", ponteiro);

    return 0;
}
