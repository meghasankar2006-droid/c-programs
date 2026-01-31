#include <stdio.h>
int main(){
    int n,val;
    scanf("%d",&n);
    int max=0,max1=0,max2=0;
    int index=0;
    int count1=0,count2=0;
    int i=1;
    while(i<=n){
        scanf("%d",&val);
        if(val>=50000){
            count1++;
            if(val>max){
                max=val;
                count2++;
                if(count2>max1){
                    max1=count2;
                    max2=i;
                    index=max2;
                }
            }
        }
        else{
            count2=0;
            max=0;
        }
        i++;
    }
    if(max1>=3){
    printf("Fraud Triggered At Attempt: %d\n",index);
    printf("High-Value Transactions:%d",count1);
    }
    else{
       printf("Fraud Triggered At Attempt:Not Triggered\n");
    printf("High-Value Transactions:%d",count1); 
    }
}