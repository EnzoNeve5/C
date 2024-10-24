# include <stdio.h>

int contar_digitos(int numero) {
    int contador = 0;
    do {
        contador++;
        numero /= 10;
    } while (numero > 0);
    return contador;
}

int main() {
    int numeros[100];
    int i = 0;
    int numero;

    printf("Digite um número entre 1 e 9999 (ou -1 para encerrar):\n");

    while (1) {
        scanf("%d", &numero);
        if (numero == -1) {
            break;
        }
        else if (numero >= 1 && numero <= 9999) {
            numeros[i] = numero;
            i++;
        } 
        else {
            printf("Por favor, digite um número entre 1 e 9999.\n");
        }
    }

    printf("\nNúmeros digitados:\n");

    for (int j=0;j<i;j++) {
        if (numeros[j] >= 1 && numeros[j] <= 9) {
            int quantidade_digitos = snprintf(NULL, 0, "%d", numeros[j]);
            printf("%-4d - %d dígito\n", numeros[j], quantidade_digitos);
        }
        else {
            int quantidade_digitos = snprintf(NULL, 0, "%d", numeros[j]);
            printf("%-4d - %d dígitos\n", numeros[j], quantidade_digitos);
        }
    }
    return 0;
}
