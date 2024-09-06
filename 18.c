# include <stdio.h>

int main() {
    int valor, cedulas50, cedulas20, cedulas10;
    printf("A maquina possui cedulas de | R$50,00 | R$20,00 | R$10,00 |\n");
    printf("Qual valor voce deseja sacar: R$");
    scanf("%d", &valor);
    if (valor % 10 != 0) {
        printf("Tivemos um problema com os tipos de dados que voce digitou.\n");
        return 1;
    }
    cedulas50 = valor / 50;
    valor = valor % 50;
    cedulas20 = valor / 20;
    valor = valor % 20;
    cedulas10 = valor / 10;
    valor = valor % 10;
    printf("No saque:\n");
    if (cedulas50 > 0) {
        printf("Foi usado %d cedula(s) de R$50,00\n", cedulas50);
    }
    if (cedulas20 > 0) {
        printf("Foi usado %d cedula(s) de R$20,00\n", cedulas20);
    }
    if (cedulas10 > 0) {
        printf("Foi usado %d cedula(s) de R$10,00\n", cedulas10);
    }
    printf("O valor sacado e de R$%d,00",(cedulas50 * 50) + (cedulas20 * 20) + (cedulas10 * 10));
    return 0;
}
