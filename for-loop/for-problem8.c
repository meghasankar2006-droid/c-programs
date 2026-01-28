#include <stdio.h>
int main(){
    int num,rev=0;
    scanf("%d",&num);
    for(;num>0;){
        int d=num%10;
        rev =(rev*10)+d;
        num=num/10;
    }
    printf("%d",rev);
    
}