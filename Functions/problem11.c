//Count Digits in a Number Using Function
#include <stdio.h>
long long int digit_count(long long int n){
    int count=0;
    while(n>0){
        int d=n%10;
        count=count+1;
        n=n/10;
    }
    return count;
}
int  main(){
    long long int num;
    scanf("%lld",&num);
    printf("%lld",digit_count(num));

}