#include <stdio.h>
int main(){
    int tot,days,d;
    scanf("%d  %d",&tot,&days);
    int count=0;
    int sum=0;
    int rem=tot;
    int i=1;
    while(i<=days){
        scanf("%d",&d);
        
         sum=sum+d;
        if(sum<=tot){
            count=count+1;
            rem=rem-d;   
        }
        i++;
    }
    printf("Days Used:%d\n",count);
    printf("Remaining Data:%d GB",rem);
    }
    
    
