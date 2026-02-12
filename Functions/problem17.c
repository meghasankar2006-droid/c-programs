//Armstrong Number Using Function
#include <stdio.h>
int amstrong_num(int n){
    int temp=n;
    int pow=1;
    int count=0;
    int sum=0;
    while(n>0){
        n=n/10;
        count++;
    }
    while(temp>0){
        int d=temp%10;
        for(int i=1;i<=count;i++){
            pow=pow*d;
        }
        sum=sum+pow;
        pow=1;
        
    }
}
int main(){
    int num;
    scanf("%d",&num);

}