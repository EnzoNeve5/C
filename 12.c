# include <stdio.h>

int main() {
    float h, kmporh, kmporl=12.0;
    printf("Quantas horas durou a viagem: ");
    scanf("%f",&h);
    printf("Qual e a velocidade media em km/h: ");
    scanf("%f",&kmporh);
    printf("\nA quantidade de litros necessarios para realizar a viagem e de:  %.3f", h / kmporl * kmporh);
    return 0;
}