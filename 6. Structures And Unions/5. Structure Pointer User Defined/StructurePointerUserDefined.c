#include<stdio.h>

struct basic{
    int a;
    float b;
    float c;
};

void input(struct basic *b1){
    printf("Enter a : ");
    scanf("%d",&b1->a);
    printf("Enter b : ");
    scanf("%f",&b1->b);
    printf("Enter c : ");
    scanf("%f",&b1->c);
}

void print(struct basic *b1){
    printf("The Output is : \n%d\n%f\n%f",b1->a,b1->b,b1->c);
}

int main(){
    struct basic b;
    struct basic *p = &b;
    input(p);
    print(p);
    return 0;
}
