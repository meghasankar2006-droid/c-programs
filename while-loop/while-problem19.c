#include <stdio.h>
int main(){
    int tot,n,hour;
    scanf("%d %d",&tot,&n);
    int sum=0;
    while(n>0){
        scanf("%d",&hour);
        sum=sum+hour;
        n--;
    }
    if(sum>tot){
        int rem=sum-tot;
        printf("Treated Patients:%d",tot);
        printf("Rejected Patients:%d",rem);
    }
    if(sum<tot){
        printf("Treated Patients:%d\n",tot);
        printf("Rejected Patients:%d",0);
    
    }
    }
