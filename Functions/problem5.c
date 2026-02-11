#include <stdio.h>
int sum_digit(int num){
    int sum=0;
    while(num>0){
        int d= num%10;
        sum=sum+d;
        num=num/10;
    }
    return sum;

}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",sum_digit(num));
}