#include<stdio.h>

int main(){
    int x, y;
    printf("Enter two numbers you want to add : \n");
    scanf("%d %d",&x, &y);
    int sum=0, carry=0;
    while(y!=0){
        sum = x^y;
        carry = (x&y)<<1;
        x = sum;
        y = carry;
    }
    printf("The Sum of two given numbers is : %d",sum);
    return 0;
}
