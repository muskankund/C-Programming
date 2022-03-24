#include<stdio.h>

struct basic{
    int a;
    char b;
    float c;
};

int main(){
    struct basic b1 = {1,'a',1.0};
    printf("%d\n%c\n%f",b1.a,b1.b,b1.c);
    return 0;
}
