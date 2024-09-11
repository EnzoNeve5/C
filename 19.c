# include <stdio.h>

int main() {
    printf("Operador nao\n");
    printf("Nao %d = %d\n", 1, !1);
    printf("Nao %d = %d\n", 0, !0);
    printf("\nOperador E\n");
    printf("%d E %d = %d\n", 1, 1, 1 && 1);
    printf("%d E %d = %d\n", 1, 0, 1 && 0);
    printf("%d E %d = %d\n", 0, 1, 0 && 1);
    printf("%d E %d = %d\n", 0, 0, 0 && 0);
    printf("\nOperador OU\n");
    printf("%d OU %d = %d\n", 1, 1, 1 || 1);
    printf("%d OU %d = %d\n", 1, 0, 1 || 0);
    printf("%d OU %d = %d\n", 0, 1, 0 || 1);
    printf("%d OU %d = %d\n", 0, 0, 0 || 0);
    return 0;
}
