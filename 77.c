# include <stdio.h>

void mostra_ascii() {
    for(int i=32;i<127;i++) {
        printf("%d - (%c)\n",i,i);
    }
}
int main() {
    mostra_ascii();
    return 0;
}
