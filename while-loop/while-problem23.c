#include <stdio.h>
int main(){
    int n,val;
    scanf("%d",&n);
    int count=0,count1=0,max=0,min=n,count2=0;
    int i=1,index=0;
    while(i<=n){
        scanf("%d",&val);
        if(val>70){
            count++;
            if(val>max){
                max=val;
                count1++;  
                }
            }
        else{
                if(count1>=2){
                    count2++;
                    if(count2==1 && count1<min){
                        min=count1;
                        index=i-1;
                    }
                }
                count1=0;
                max=0;
            }    
    i++;
        }
    if(min>=2){
       printf("Breakdown At Reading:%d\n",index); 
    }
    else{
        printf("Breakdown At Reading: Not Occurred\n"); 
    }
    printf("Unsafe Readings:%d",count);
}