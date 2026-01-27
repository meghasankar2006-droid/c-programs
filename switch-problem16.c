#include <stdio.h>
int main(){
int charge,kg;
scanf("%d %d",&charge,&kg);
int amt;
switch (charge)
{
case 1:
    amt=300*kg;
    printf(" amount :%d",amt);
    break;
case 2:
    if(kg<=3){
        printf("Free");
    }
    else{
    amt=300*kg;
    printf(" amount :%d",amt);
    }
    break;
default:
    printf("Invalid option");
}
}