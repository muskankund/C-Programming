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
    int *ptr = &arr;
    int sum = 0;
    for (int i=0;i<n;i++){
        sum += *ptr;
        *ptr++;
    }
    printf("\nThe Sum of Elements of Array is : %d",sum);
    return 0;
}
