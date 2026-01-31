#include <stdio.h>
int main(){
    int cap,n,val;
    scanf("%d %d",&cap,&n);
    int count1=0,count2=0;
    while(n>0){
        scanf("%d",&val);
        if(val>cap){
            count1++;
        }
        else{
            count2++;
        }
        n--;
    }
    printf("Safe Hours:%d",count2);
    printf("Failure Count:%d",count1);
    
}