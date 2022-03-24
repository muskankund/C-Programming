#include<stdio.h>

struct basic{
    int a;
    char b;
    float c;
};

struct basic fun(struct basic b1){
    struct basic b2;
    b2.a = b1.a*2;
    b2.b = 'C';
    b2.c = 2.5*b1.c;
    return b2;
};

int main(){
    struct basic b1 = {1,'a',1.0};
    struct basic b3 = fun(b1);
    printf("%d\n%c\n%f",b3.a,b3.b,b3.c);
    return 0;
}
