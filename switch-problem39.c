#include<stdio.h>
int main(){
    int distance;
    scanf("%d",&distance);
    switch(distance){
    case 1:
        printf("Transport Fee ₹800");
        break;
    case 2:
        printf("Transport Fee ₹1200");
        break;
    case 3:
        printf("Transport Fee ₹1800");
        break;
    default:
        printf("Invalid Input");

    }
    return 0;
}