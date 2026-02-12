//Check Perfect Number Using Function
#include <stdio.h>
int perfect_num(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    return sum;
}
int main(){
    int num;
    scanf("%d",&num);
    int sum=perfect_num(num);
    if(sum==num){
        printf("Perfect Number");
    }
    else{
        printf("Not perfect Number");
    }

}