#include<stdio.h>
void fun(int);

int main(){
    int n = 1;
    fun(n);
    return 0;
}

void fun(int n){
    if(n<=50){
        printf(" %d ",n);
        fun(n+1);
    }
}
