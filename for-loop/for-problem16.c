#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        printf("Yes");
    }
    else{
        printf("No");
    }
}