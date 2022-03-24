#include<stdio.h>

union basic{
    char a;
    int b;
    float c;
};

int main(){
    union basic b1;
    printf("Size of Union Basic : %d",sizeof(b1));
    b1.a = 'A';
    b1.b = 20;
    b1.c = 16.94;
    printf("%c\n%d\n%f",b1.a,b1.b,b1.c);
    return 0;
}
