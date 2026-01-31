#include <stdio.h>
int main(){
    int n,days;
    scanf("%d",&n);
    int sum=0,count=0;
    while(n>0){
        scanf("%d",&days);
        sum=sum+days; 

        if(days>4){  
            count++;
        }
        n--;
    }
    printf("Total Overtime:%d\n",sum);
    printf("Burnout Days:%d",count);
}