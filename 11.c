# include <stdio.h>

int main() {
    float a, b, c;
    float panda=25.00;
    float tigre=20.00;
    float leao=21.50;
    printf("Quantidade de pandas: ");
    scanf("%f",&a);
    printf("Quantidade de tigres: ");
    scanf("%f",&b);
    printf("Quantidade de leoes:  ");
    scanf("%f",&c);
    printf("\nTotal de pandas: %.0f Valor: R$%.2f Valor da unidade: R$%.2f", a, panda * a, panda);
    printf("\nTotal de tigres: %.0f Valor: R$%.2f Valor da unidade: R$%.2f", b, tigre * b, tigre);
    printf("\nTotal de leoes:  %.0f Valor: R$%.2f Valor da unidade: R$%.2f", c, leao * c, leao);
    printf("\nTotal: R$%.2f", (panda * a) + (tigre * b) + (leao * c));
    return 0;
}