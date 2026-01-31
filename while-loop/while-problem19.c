#include <stdio.h>
int main(){
    int mcap,n,hour;
    scanf("%d %d",&mcap,&n);
    int sum=0,count=0,rem=0;
        while(n>0){
            scanf("%d",&hour);
            
            if(mcap>=hour){
                count=count+hour;
                mcap=mcap-hour;
            }
            else{
                rem=rem+hour;
            }
        n--;
        }
        printf("Treated Patients:%d\n",count);
        printf("Rejected Patients:%d",rem);
    }
