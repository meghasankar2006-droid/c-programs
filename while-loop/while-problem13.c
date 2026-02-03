#include <stdio.h>
int main(){
    int data, n,val;
    scanf("%d %d",&data,&n);
    int count=0,over=0,sum=0,index=0;
    int i=1;
    while(i<=n){
        scanf("%d",&val);
        data=data-val;
        if(data<=0){
            count++;
            sum=sum+data;
            if(count>1){
                sum=sum-data;
            }
            if(count==1){
                index=i;
            }
        }
        i++;
    }
    int ans=-sum;
    if(data>0){
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data:%d",ans);
    
    }
    if(data<=0){
    printf("Exhausted Day:%d\n",index);
    printf("Overused Data:%d",ans);
    }
}
