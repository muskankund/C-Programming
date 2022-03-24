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
    int min=arr[0], max=arr[0], a=0, b=0;
    for (int m=0; m<n; m++){
        if (arr[m] > max){
            max = arr[m];
            a=m;
        }
        if (arr[m] < min){
            min = arr[m];
            b=m;
        }
    }
    int max2=min, min2=max;
    for (int m=0; m<n; m++){
        if (arr[m] > max2 && arr[m]!=max){
            max2 = arr[m];
        }
        if (arr[m] < min2 && arr[m]!=min){
            min2 = arr[m];
        }
    }
    printf("\nThe Second Largest Element is : %d",max2);
    printf("\nThe Second Smallest Element is : %d",min2);
    return 0;
}
