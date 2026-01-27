#include<stdio.h>
int main(){
    int vehicle,hours;
    scanf("%d %d",&vehicle,&hours);
    switch(vehicle){
        case 1:
         printf("%d",10*hours);
         break;
         case 2:
         printf("%d",20*hours);
         break;
         default:
         printf("Invalid option");
    
    }
}