#include <stdio.h>
int main(){
    int num1,num2;
    int max;
    int lcm=0;
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        max=num1;
    }
    else{
        max=num2;
    }
    for(int i=max ;i>0 ;i++){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
    }
    printf("%d",lcm);
}