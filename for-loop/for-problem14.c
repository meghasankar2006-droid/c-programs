#include <stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    while(num>0){
        int d=num%10;
        if(d%2==0){
        count =count+1;
        }
        num=num/10;
    }
    printf("%d",count);
    
}