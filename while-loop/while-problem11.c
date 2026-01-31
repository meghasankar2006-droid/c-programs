#include <stdio.h>
int main(){
    int n,hours;
    scanf("%d",&n);
    int sum=0,count=0;
    while(n>0){
        scanf("%d",&hours);
        sum=sum+hours; //total delay

        if(hours>0 && hours>2){  //delayed days
            count++;
        }
        n--;
    }
    printf("Total Delay:%d\n",sum);
    printf("Delayed Days:%d",count);
}