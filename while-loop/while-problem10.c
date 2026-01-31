#include <stdio.h>
int main(){
    int n,week;
    scanf("%d",&n);
    int count1=0,count2=0;
    while(n>0){
        scanf("%d",&week);
        if(week==0){
            count1++;
        }
        else{
            count2++;
        }
        n--;
    }
    printf("Inactive Weeks:%d",count1);
    if(count1>=count2){
        printf("Risk Status:High");
    }
    else{
        printf("Risk Status: Low");
    }
}