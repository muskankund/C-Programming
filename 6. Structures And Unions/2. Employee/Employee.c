#include<stdio.h>

struct Employee{
    char name[9];
    int employeeId;
    int salary;
};

int main(){
    struct Employee E1 = {"Himanshu",1,100};
    printf("%s\n%d\n%d",E1.name,E1.employeeId,E1.salary);
    return 0;
}
