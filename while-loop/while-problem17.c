#include <stdio.h>
int main(){
    int amt,n,val;
    scanf("%d %d",&amt,&n);
    int sum=0,count=0,rem=amt;
    while(n>0){
        scanf("%d",&val);
        sum=sum+val;
        if(sum<=amt){
            count=count+1;
            rem=rem-val;
        }
        n--;
    }
printf("Successful Purchases:%d\n",count);
printf("Final Balance:%d",rem);
}