#include<stdio.h>

int main(){
    int n;
    printf("Enter the number you want to check : ");
    scanf("%d",&n);
    int c = n;
    int reverse = 0;
    while(c!=0){
        int remainder = c%10;
        reverse = reverse*10 + remainder;
        c = c/10;
    }
    if (reverse == n){
        printf("%d is a Palindrome Number",n);
    }
    else{
        printf("%d is not a Palindrome Number",n);
    }
    return 0;
}
