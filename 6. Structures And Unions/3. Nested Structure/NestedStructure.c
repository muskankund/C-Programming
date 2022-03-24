#include<stdio.h>

struct basic{
    int a;
    char b;
    float c;
    struct{
        int d;
        char e;
        float f;
    }n1;
};

int main(){
    struct basic b1 = {1,'a',1.0,{1,'a',1.0}};
    printf("%d\n%c\n%f\n%d\n%c\n%f",b1.a,b1.b,b1.c,b1.n1.d,b1.n1.e,b1.n1.f);
    return 0;
}
