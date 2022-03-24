#include <stdio.h>
int main(){
    char s[300];
    printf("Enter String : ");
    gets(s);
    printf("String is : %s",s);
    int len = 0;
    for(int i=0; s[i]!='\0'; i++){
        len++;
    }
    printf("\nThe Length is : %d",len);
    return 0;
}
