//Factorial Using Function

#include <stdio.h>
int fact_fun(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",fact_fun(num));
}