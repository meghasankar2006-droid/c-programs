#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    scanf("%s",str);
    int n=strlen(str);
    int palindrome=0;
    for(int i=0;i<=n/2;i++){
        if(str[i]!=str[n-1-i]){
            palindrome=1;
            break;
        }
        else{
            palindrome=0;
        }
    }
    if(palindrome==0){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}