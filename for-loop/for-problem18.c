#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int n,max=0;
        if(num1<num2){
            n=num1;
        }
        else{
            n=num2;
        }
    for(int i=1;i<=n;i++){
        if(num1%i==0 && num2%i==0){
            if(i>max){
                max=i;
            }
        }
    }
    printf("%d",max);
    
    return 0;
}