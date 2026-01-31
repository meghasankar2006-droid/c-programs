#include<stdio.h>
int main(){
    int fuel, n,val;
    scanf("%d %d",&fuel,&n);
    int rem=fuel;
    int sum=0,count=0;
    while(n>0){
        scanf("%d",&val);
        sum=sum+val;
        if(sum<=fuel){
            count=count+1;
            rem=rem-val;
        }
        n--;
    }
    printf("Completed Trips:%d\n",count);
    printf("Remaining Fuel:%d",rem);

}