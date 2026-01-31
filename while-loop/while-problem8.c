#include<stdio.h>
int main(){
    int n,val;
    scanf("%d",&n);
    int count=0,max=0;
    while(n>0){
        scanf("%d",&val);
        if(val==0){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            count=0;
        }
        n--;
    }
    printf("Longest Default Streak:%d",max);
}