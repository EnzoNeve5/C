# include <stdio.h>

int main() {
    int a,b,c,d;
    a=10;
    b=2;
    a+=b;
    b-=5;
    printf("a = %d",a);
    printf("\nb = %d",b);
    c=11;
    d=6;
    c%=d;
    d+=a;
    printf("\nc = %d",c);
    printf("\nd = %d",d);
    return 0;
}