#include<stdio.h>

int main(){
    int number;
    printf("Enter the number you want to check : ");
    scanf("%d",&number);
    int i, rem, sum=0;
    for(i=1; i<number; i++){
        rem = number%i;
        if(rem==0){
            sum = sum+i;
        }
    }
    if (sum == number){
        printf("%d is a Perfect Number",number);
    }
    else{
        printf("%d is not a Perfect Number",number);
    }
    return 0;
}
