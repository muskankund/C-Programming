#include<stdio.h>

int main(){
    int n;
    printf("Enter the number you want to check : ");
    scanf("%d",&n);
    int c=n, fact=1, result=0;
    while(c!=0){
        int remainder = c%10;
        for(int i=1; i<=remainder; i++){
            fact=fact*i;
        }
        result = result+fact;
        fact=1;
        c=c/10;
    }
    if (result == n){
        printf("%d is a Strong Number",n);
    }
    else{
        printf("%d is not a Strong Number",n);
    }
    return 0;
}
