#include <stdio.h>
int main(){
    int vehicle_type,age;
    scanf("%d %d",&vehicle_type,&age);
    int amt=0;
    switch(vehicle_type){
        case 1:
        if(age>0){
            if(age<=5){
             amt=1500;
             printf("Amount :%d",amt);
            }
            else{
              amt=2500;
             printf(" Amount :%d",amt);  
            }
        }
        else{
            printf("Invalid age");
        }
            break;
        case 2:
        if(age>0){
            if(age<=5){
                amt=4000;
                printf("Amount :%d",amt);
            }
            else{
                amt=6000;
                printf(" Amount :%d",amt);  
            }
        } 
        else{
            printf("Invalid age");
        }   
            break;
        default:
            printf("invalid option");
    }
}