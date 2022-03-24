#include<stdio.h>

struct party{
    float item[25];
};

int main(){
    int n;
    printf("Enter the No. Of Items : ");
    scanf("%d",&n);
    struct party p1;
    for (int i=0; i<n; i++){
        printf("Enter the Price of item %d :",i+1);
        scanf("%f",&p1.item[i]);
    }
    int fr;
    printf("Enter the No. Of Friends : ");
    scanf("%d",&fr);
    float total = 0;
    for (int i=0; i<n; i++){
        total += p1.item[i];
    }
    float contribution = total/fr;
    printf("Contribution of Each One is : Rs.%f",contribution);
    return 0;
}
