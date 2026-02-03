#include <stdio.h>
int main(){
    int n,val;
    scanf("%d",&n);
    
    int max=0,max1=0;
    int count=0,count1=0;
    while(n>0){
        scanf("%d",&val);
        if(val>20){
            count1=count1+1;
         if(val>max){
            max=val;
            count=count+1;
            if(count>max){
                max1=count;
            }
            }
        else{
            count=0;
            max=0;
        }
    }
    n--;
    }
    printf("Congestion Minutes:%d\n",count1);
    printf("Longest Congestion Streak:%d",max1);


}