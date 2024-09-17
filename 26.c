# include <stdio.h>

int main() {
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2.0;
    if (media >= 6.0) {
        printf("Aprovado, voce tirou %.1f", media);
    }
    else if (media >= 4.5 && media < 6.0) {
        printf("Recuperacao, voce tirou %.1f", media);
    }
    else {
        printf("Reprovado, voce tirou %.1f", media);
    }
    return 0;
}