#include <stdio.h>
#include<string.h>
int palindrome(char *p){
    int n=strlen(p)-1;
    for(int i=0;i<n;i++){
        if(*(p+i)!=*(p+n)){
        return 0;
        break;
        }
    else{
        return 1;
    }
    n--;
    }
}
int main(){
    char str[100];
    scanf("%s",str);
    if(palindrome(str)==1){
        printf("palindrome");
    }
    else{
        printf("Not palindrome");
    }


}