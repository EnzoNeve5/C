# include <stdio.h>

int main() {
    float prod, porc;
    printf("O valor do produto e de: R$");
    scanf("%f",&prod);
    printf("O valor da porcentagem e: ");
    scanf("%f",&porc);
    printf("\nA porcentagem do valor e de: R$%.2f", porc / 100 * prod);
    printf("\nA soma do valor da porcentagem e de: R$%.2f", porc / 100 * prod + prod);
    printf("\nA subtracao do valor da porcentagem e de: R$%.2f", (porc / 100 * prod - prod) - (porc / 100 * prod - prod) - (porc / 100 * prod - prod));
    return 0;
}