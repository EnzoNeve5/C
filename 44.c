# include <stdio.h>

int main() {
    int i;
    char teste[12] = {"Olá, Mundo!"};
    for (i=0;i<12;i++) {
        printf("%c",teste[i]);
    }
    return 0;
}