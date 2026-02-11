//Check Even or Odd Using Function
#include <stdio.h>
void odd_even(int num){
    if(num%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    odd_even( num);
}