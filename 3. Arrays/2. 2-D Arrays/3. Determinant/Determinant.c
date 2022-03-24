#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[3][3];
    printf("Enter the Elements of Matrix : ");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Matrix is : \n");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int det = 0;
    for (int i=0; i<3; i++){
       det += (arr[0][i]*(arr[1][(i+1)%3]*arr[2][(i+2)%3]-arr[1][(i+2)%3]*arr[2][(i+1)%3]));
    }
    printf("The Determinant is : %d",det);
    return 0;
}
