# include <stdio.h>

int main() {
    int i, j;

    for (i = 0;i < 24;i++) {
        for (j = 0;j < 60;j++) {
            printf("\n%d:%d", i, j);
        }
    }

    return 0;
}