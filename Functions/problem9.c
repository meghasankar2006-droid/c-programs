//Check Palindrome Number Using Function
#include <stdio.h>
int palindrome(int n){
    int rev=0;
    while(n>0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
int main(){
    int num;
    int rev=0;
    scanf("%d",&num);
    int t=num;
    int ans=palindrome(num);
    if(ans==t){
        printf("palindrome");
    }
    else{
        printf("Not palindrome");
    }
}