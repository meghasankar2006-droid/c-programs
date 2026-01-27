#include<stdio.h>
int main(){
    int months;
    scanf("%d",&months);
    switch(months){
    case 1:
        printf("Membership Fee:RS 1500");
        break;
    case 2:
        printf("Membership Fee:RS 4000");
        break;
    case 3:
        printf("Membership Fee:RS 7000");
        break;
    default:
        printf("Invalid Input");

    }
    return 0;
}