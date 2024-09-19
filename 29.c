# include <stdio.h>

int main() {
    float leao;
    float aliquotapc = 1;
    printf("Digite a base do calculo: R$");
    scanf("%f", &leao);
    if (leao < 2259.20) {
        printf("A porcentagem da aliquota e de %.0f", aliquotapc * 0);
        printf("\nA parcela a reduzir do IR R$%.2f", leao * 0);
    }
    else if (leao > 2259.20 && leao < 2826.65) {
        printf("A porcentagem da aliquota e de %.1f", aliquotapc * 7.5);
        printf("\nA parcela a reduzir do IR R$%.2f", leao * 0.075);
    }
    else if (leao > 2826.65 && leao < 3751.06) {
        printf("A porcentagem da aliquota e de %.0f", aliquotapc * 15);
        printf("\nA parcela a reduzir do IR R$%.2f", leao * 0.15);
    }
    else if (leao > 3751.06 && leao < 4664.69) {
        printf("A porcentagem da aliquota e de %.1f", aliquotapc * 22.5);
        printf("\nA parcela a reduzir do IR R$%.2f", leao * 0.225);
    }
    else {
        printf("A porcentagem da aliquota e de %.1f", aliquotapc * 27.5);
        printf("\nA parcela a reduzir do IR R$%.2f", leao * 0.275);
    }
    return 0;
}