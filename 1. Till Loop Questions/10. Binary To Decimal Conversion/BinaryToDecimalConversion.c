#include<stdio.h>

int main(){
    int binary;
    printf("Enter the Binary Number : ");
    scanf("%d",&binary);
    int decimal = 0, weight = 1;
    while(binary!=0){
        int rem =  binary%10;
        decimal = decimal + rem*weight;
        binary = binary/10;
        weight = weight*2;
    }
    printf("The Number in Decimal is : %d", decimal);
    return 0;
}
