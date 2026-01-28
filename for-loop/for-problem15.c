#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count1=0,count2=0;
    for(int i=2 ;i<=num;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                count1=count1+1;
            }    
        }
        if(count1==0){
            count2=count2+1;
        }
        count1=0;
    }
    printf("%d",count2);
}