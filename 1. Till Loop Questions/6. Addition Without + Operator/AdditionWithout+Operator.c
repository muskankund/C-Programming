#include<stdio.h>

int main(){
    int x, y;
    printf("Enter two numbers you want to add : \n");
    scanf("%d %d",&x, &y);
    if(y>0){
        while(y != 0){
        x++;
        y--;
    }
    }
    else{
        while(y != 0){
        x--;
        y++;
    }
    }
    printf("The Sum of two given numbers is : %d",x);
    return 0;
}
