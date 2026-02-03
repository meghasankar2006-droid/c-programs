#include <stdio.h>
int main(){
    int num,val;
    scanf("%d",&num);
    int count=0,max=0;
    int count1=0;
    int atm;
    int i=1;
    while(i<=num){
        scanf("%d",&val);
        if(val==0){
            count1++;
            count=count+1;
            if(count>max){
                max=count;
                if(max==3){
                    atm=i;
                }
            }
        }
        else{
            count=0;
        }
    i++;
    }
     if(max>=3){
       printf("Total Failed Attempts:%d\n",atm); 
    }
    else{
        max=0;
        printf("Total Failed Attempts: Not Locked\n"); 
    }
    printf("Lock Triggered At Attempt:%d",count1); 
   
}
    