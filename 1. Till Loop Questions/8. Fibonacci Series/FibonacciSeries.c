#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of terms you want in Fibonacci Series : ");
    scanf("%d",&n);
    int a=0, b=1;
    for(int i=0; i<=n; i++){
        printf("%d ",a);
        int result = a+b;
        a = b;
        b = result;
    }
    return 0;
}
