#include<stdio.h>

int main(){
    int n;
    printf("Enter the number you want to check : ");
    scanf("%d",&n);
    int c = n, count=0;
    while(c!=0){
        c = c/10;
        count++;
    }
    int result = 0;
    int mul = 1;
    c = n;
    int cnt=count;
    while(c!=0){
        int remainder = c%10;
        while(cnt!=0){
            mul = mul*remainder;
            cnt--;
        }
        result = result+mul;
        cnt=count;
        c=c/10;
        mul=1;
    }
    if (result == n){
        printf("%d is an Armstrong Number",n);
    }
    else{
        printf("%d is not an Armstrong Number",n);
    }
    return 0;
}
