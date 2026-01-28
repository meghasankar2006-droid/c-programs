#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    for(int i=1;i<=num;i++){
        int sq=i*i;
        sum=sum+sq;
    }
    printf("%d",sum);
return 0;
}