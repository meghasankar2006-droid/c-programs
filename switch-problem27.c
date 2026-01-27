#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    switch(day){
    case 1:
        printf("Delivery Charge : ₹40");
        break;
    case 2:
        printf("Delivery Charge : ₹120");
        break;
    case 3:
        printf("Delivery Charge :0");
        break;
    default:
        printf("Invalid Input");

    }
    return 0;
}