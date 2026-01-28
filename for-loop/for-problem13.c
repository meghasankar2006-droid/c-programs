#include <stdio.h>
int main(){
    int num,mul;
    scanf("%d %d",&num,&mul);
    int sum = 0;
    for(int i=1;i<=mul;i++){
        if(i%num==0){
            sum=sum+i;
        }
      
    }
    printf("%d",sum);
}