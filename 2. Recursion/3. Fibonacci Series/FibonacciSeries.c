#include<stdio.h>
void fun(int);

int main(){
    int n;
    printf("Enter the Limit : ");
    scanf("%d",&n);
    printf("Fibonacci Series : \n%d %d",0,1);
    fun(n);
    return 0;
}

void fun(int n){
    static int n1=0, n2=1 , n3;
    if(n>0){
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        printf(" %d",n3);
        fun(n-1);
    }
}
