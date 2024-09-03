# include <stdio.h>

int main() {
    float a = 6.0,b,c;
    printf("Digite a primeira nota: ");
    scanf("%f",&b);
    printf("Digite a segunda nota: ");
    scanf("%f",&c);
    printf("Resultado: %d \n",a <= (b + c) / 2);
    return 0;
}