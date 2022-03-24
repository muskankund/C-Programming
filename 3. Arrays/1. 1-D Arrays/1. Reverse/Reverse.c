#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the Size of Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements of Array : ");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The Array is : ");
    for (int j=0; j<n; j++){
        printf("%d ",arr[j]);
    }
    printf("\nThe Reverse Array is : ");
    for (int k=n-1; k>=0; k--){
        printf("%d ",arr[k]);
    }
    return 0;
}
