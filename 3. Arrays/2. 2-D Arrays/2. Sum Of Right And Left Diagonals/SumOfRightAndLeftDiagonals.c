#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the Number of Rows/Columns : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the Elements of Matrix : ");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Matrix is : \n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int right=0, left=0, k=n-1;
    for (int i=0; i<n; i++){
        right += arr[i][i];
        left += arr[i][k];
        k--;
    }
    printf("\nThe Right Diagonal Sum is : %d",right);
    printf("\nThe Left Diagonal Sum is : %d",left);
    return 0;
}
