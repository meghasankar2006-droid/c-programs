#include <stdio.h>
int main(){
    int num,val;
    scanf("%d",&num);
    int count=0,max=0;
    while(num>0){
        scanf("%d",&val);
        if(val==0){
            count=count+1;
            if(count>max){
                max=count;
            }
        }
        else{
            count=0;
        }
    num--;
    }
    printf("Longest Failure Streak:%d",max);
}