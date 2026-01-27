#include<stdio.h>
int main(){
    int type,unit;
    scanf("%d %d",&type,&unit);
    int amt;
    switch(type){
    case 1:
        if(unit<=30){
            printf("Bill:%d",unit*5);
        }
        else{
            amt=(30*5)+((unit-30)*8)-10;
            printf("Bill:%d",amt);
        }
        break;
    case 2:
        
            printf("Ticket Price:%d",unit*10);
        break;
    default:
    printf("Invalid option");

    }
    return 0;
}