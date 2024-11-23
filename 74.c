# include <stdio.h>

int quilometro() {
    return 1 * 150000000;
}

int main() {
    int unidadeAstronomica = quilometro();
    printf("1 UA = %dkm\n", unidadeAstronomica);
    return 0;
}