#include<stdio.h>
#include<stdlib.h>

int main(){
    int rows, columns;
    printf("Enter the Number of Rows : ");
    scanf("%d",&rows);
    printf("Enter the Number of Columns : ");
    scanf("%d",&columns);
    int arr[rows][columns];
    printf("Enter the Elements of Matrix : ");
    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Matrix is : \n");
    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int transpose[columns][rows];
    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            transpose[j][i] = arr[i][j];
        }
    }
    printf("The Transpose Matrix is : \n");
    for (int i=0; i<columns; i++){
        for (int j=0; j<rows; j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
