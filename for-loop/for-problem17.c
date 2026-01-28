#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int temp=num;
    int sum=0,fact=1;
    while(num>0){
        int d=num%10;
        fact=1;
        for(int i=1;i<=d;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(sum==temp){
        printf("Yes");
    }
    else{
        printf("No");
    }
}