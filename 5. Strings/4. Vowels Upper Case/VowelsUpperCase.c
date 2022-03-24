#include <stdio.h>
int main(){
    char s[300];
    printf("Enter String : ");
    gets(s);
    printf("String is : %s",s);
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            s[i] = toupper(s[i]);
        }
    }
    printf("\nString After Vowel Upper is : %s",s);
    return 0;
}
