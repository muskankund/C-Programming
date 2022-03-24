#include<stdio.h>

struct basic{
    int a;
    char b;
    float c;
};

int main(){
    struct basic b1 = {1,'a',1.0};
    struct basic *p = &b1;
    printf("%d\n%c\n%f",p->a,p->b,p->c);
    return 0;
}
