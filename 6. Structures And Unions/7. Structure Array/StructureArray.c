#include<stdio.h>

struct basic{
    int a[5];
    char b;
    float c;
};

int main(){
    struct basic b1;
    b1.b = 'A';
    b1.c = 7.96;
    for(int i=0; i<5; i++){
        b1.a[i] = i;
    }
    printf("Elements of Array is : ");
    for(int i=0; i<5; i++){
        printf("%d ",b1.a[i]);
    }
    printf("\nB and C are : %c and %f",b1.b,b1.c);
    return 0;
}
