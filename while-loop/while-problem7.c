#include<stdio.h>
int main(){
    int cap,n,val;
    scanf("%d %d",&cap,&n);
    int sum=0,count=0;
    int per=((cap*90)/100);
    while (n>0)
    {
        scanf("%d",&val);
        sum=sum+val;
        
        if(sum>per){
            count++;
        }
    n--;    
    }
    printf("%d\n",sum);
    printf("%d",count);
    
}