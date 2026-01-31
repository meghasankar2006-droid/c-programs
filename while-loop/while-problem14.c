#include <stdio.h>
int main(){
    int amt,n,val;
    scanf("%d %d",&amt,&n);
    int sum=0,count=0;;
        while(n>0){
            scanf("%d",&val);
            sum=sum+val;
            if(sum<=amt){
                count=count+1;
            }
        n--;
        }
        int rem=sum-amt;
        printf("Successful Withdrawals:%d",count);
        printf("Remaining Cash:%d",rem);
    }
