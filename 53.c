# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    srand(time(0));
    int numero = (rand() % 75) + 1;
    printf("Número sorteado: %d\n", numero);
    return 0;
}