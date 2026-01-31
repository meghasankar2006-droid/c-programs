#include<stdio.h>
int main(){
    int fuel,n,val;
    scanf("%d %d",&fuel,&n);
    int sum=0,op=0;
    int i=1;
    while(i<=n){
        scanf("%d",&val);
        sum=sum+val;
        if(sum>=fuel){
            count++;
            if(sum==fuel){
                op=i;
            }
            else if(sum<100){
                op=i+1;
            }
        }
    i++;
    }
    int ans=sum-fuel;
    printf("%d\n",ans);
    printf("%d",op);

}