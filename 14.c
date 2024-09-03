# include <stdio.h>

int main() {
    int numero;
    float numeroTeste;
    numero = 10;
    printf("Numero: %d\n",numero);
    numero += 10;
    printf("Numero: %d\n",numero);
    numero -= 5;
    printf("Numero: %d\n",numero);
    numero *= 5;
    printf("Numero: %d\n",numero);
    numeroTeste = 10;
    numeroTeste /= 3.0;
    printf("Numero: %.2f\n",numeroTeste);
    return 0;
}