#include<stdio.h>

int main(){
    int n;
    printf("Enter the number you want to check : ");
    scanf("%d",&n);
    int val1, count=0;
    val1 = ceil(sqrt(n));
    for(int i=2; i<=val1; i++){
        if(n%i == 0){
            count = 1;
            break;
        }
    }
    if((count == 0 && n!=1) || n==2 || n==3){
         printf("%d is a Prime Number",n);
    }
    else{
         printf("%d is not a Prime Number",n);
    }
    return 0;
}
