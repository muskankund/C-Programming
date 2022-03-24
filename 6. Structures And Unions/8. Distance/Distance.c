#include<stdio.h>

struct distance{
    int feet;
    int inch;
    float dist;
};

int main(){
    struct distance d1;
    printf("Enter Feet : ");
    scanf("%d",&d1.feet);
    printf("Enter Inches : ");
    scanf("%d",&d1.inch);
    d1.dist = d1.feet + d1.inch/12.0;
    printf("The Total Distance is : %f",d1.dist);
    return 0;
}
