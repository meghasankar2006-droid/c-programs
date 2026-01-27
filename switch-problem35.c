#include<stdio.h>
int main(){
    int fuel,qan;
    scanf("%d %d",&fuel,&qan);

    switch(fuel){
    case 1:
        printf("Fuel Cost : %d",qan*105);
        break;
    case 2:
         printf("Fuel Cost : %d",qan*92);
        break;
    case 3:
         printf("Fuel Cost : %d",qan*85);
        break;
    default:
        printf("Invalid Input");

    }
    return 0;
}