# include <stdio.h>

int main() {
    int i = 0, j;
    while (i < 24) {
        j = 0;
        while (j < 60) {
            printf("\n%d:%d", i, j);
            j++;
        }
        i++;
    }
    return 0;
}
