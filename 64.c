# include <stdio.h>

int main() {
    int matriz[4][4] = {
        {10, 20, 30, 40},
        {70, 90, 80, 90},
        {35, 22, 11, 20},
        {97, 39, 43, 30}
    };

    int numero, encontrado = 0;

    printf("Digite um número para buscar na matriz: ");
    scanf("%d", &numero);

    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            if (matriz[i][j] == numero) {
                printf("Número encontrado na posição:\n Linha: %d\n Coluna: %d\n", i + 1, j + 1);
                encontrado++;
            }
        }
    }
    if (!encontrado) {
        printf("Valor não encontrado na matriz :(\n");
    }
    else if (encontrado == 1) {
        printf("Número encontrado %d vez\n", encontrado);
    }
    else {
        printf("Número encontrado %d vezes\n", encontrado);
    }
    return 0;
}