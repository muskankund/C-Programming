#include<stdio.h>
int fun(int);

int main(){
    int n;
    printf("Enter the Limit : ");
    scanf("%d",&n);
    printf("The Sum is : %d", fun(n));
    return 0;
}

int fun(int n){
    int sum;
    if(n==1){
        return 1;
    }
    sum = n + fun(n-1);
    return sum;
}
