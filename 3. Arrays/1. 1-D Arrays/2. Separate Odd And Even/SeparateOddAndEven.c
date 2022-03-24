#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the Size of Array : ");
    scanf("%d",&n);
    int arr[n];
    int even=0, odd=0;
    printf("Enter the Elements of Array : ");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("The Array is : ");
    for (int j=0; j<n; j++){
        printf("%d ",arr[j]);
    }
    int evenarr[even];
    int oddarr[odd];
    int x=0, y=0;
    for (int k=0; k<n; k++){
        if(arr[k]%2==0){
            evenarr[x] = arr[k];
            x++;
        }
        else{
            oddarr[y] = arr[k];
            y++;
        }
    }
    printf("\nThe Even Array is : ");
    for (int m=0; m<even; m++){
        printf("%d ",evenarr[m]);
    }
    printf("\nThe Odd Array is : ");
    for (int m=0; m<odd; m++){
        printf("%d ",oddarr[m]);
    }
    return 0;
}
