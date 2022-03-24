#include <stdio.h>
int main(){
    char s[300];
    printf("Enter String : ");
    gets(s);
    printf("String is : %s\n",s);
    printf("The Characters are : \n");
    for(int i=0; s[i]!='\0'; i++){
        printf("%c ",s[i]);
    }
    return 0;
}
