# include <stdio.h>

int main() {
    int a,b,c,d,e;
    a=50;
    a%=2;
    b=120;
    c=200;
    d=!(!(a>=b)||!(a<=c));
    e=!(a>=b)&&(a<=c);
    printf("\n d = %d",d);
    printf("\n e = %d",e);
    return 0;
}