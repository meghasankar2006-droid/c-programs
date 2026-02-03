#include<stdio.h>
int main(){
    int n;
    int val;
    scanf("%d",&n);
    int min=0,val1=0,count=0,max=0,index=0;
    int i=1;
    while(i<=n){
        scanf("%d",&val);
        if(val<min || val1==0 ){
            min=val;
            val1++;
            count++;
            if(count>max){
                max=count;
                index=i;
            }

        }
        else{
            count=0;
            val1=0;
        }
    i++;
    }
    printf(" Crash Day:%d",index);
    if(max>=3){
        printf("Total Drops:%d",max);
    }
    else{
        printf("Total Drops:Not Detected");
    }
    
}
