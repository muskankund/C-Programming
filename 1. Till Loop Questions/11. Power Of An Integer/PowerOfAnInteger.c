#include<stdio.h>

int main(){
    int base, exponent,expo,power=1;
    double power1=1.0;
    printf("Enter the Base : ");
    scanf("%d",&base);
    printf("Enter the Exponent : ");
    scanf("%d",&exponent);
    expo = exponent;
    if(exponent<0){
        while(exponent!=0){
            power1 = power1*(1.0/base);
            exponent++;
        }
        printf("%d to the Power of %d is %.10f",base,expo,power1);
    }
    else{
        while(exponent!=0){
            power = power*base;
            exponent--;
        }
        printf("%d to the Power of %d is %d",base,expo,power);
    }
    return 0;
}
