# include <stdio.h>

int main() {
    float p, s, m;
    int i;
    s = 0;
    i = 0;
    m = 0;

    do {
        printf("Preco: R$ ");
        scanf("%f", &p);
        s = s + p;
        i++;
    } while (p != 0);

    if (i > 1) {
        m = s / (i - 1);
    }

    printf("\nQuantidade de dados digitados: %d\n", i - 1);
    printf("\nTotal: R$ %.2f\n", s);
    printf("\nMedia: R$ %.2f\n", m);

    return 0;
}