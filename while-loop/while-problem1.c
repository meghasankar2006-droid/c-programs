#include <stdio.h>
int main(){
    int n,val;
    scanf("%d",&n);
    
    int max=0,max1=0;
    int count=0,count1=0;
    int i=1;
    while(i<=n){
        scanf("%d",&val);
        if(val>70){
            count1=count1+1;
        }
        if(val>max && val>70){
            max=val;
            count=count+1;
            if(max1<count){
                max1=count;
            }
        }
        else{
            count=0;
            max=0;
        }
    i++;
    }
    printf("Noise Violations:%d\n",count1);
    printf("Longest Violation Streak:%d",max1);


}