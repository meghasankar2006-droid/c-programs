#include<stdio.h>
int main(){
    int seat,age;
    scanf("%d %d",&seat,&age);
    switch(seat){
    case 1:
        if(age>=18){
            printf("Ticket Price:%d",150+50);
        }
        else{
            printf("Ticket Price:%d",150);
        }
        break;
    case 2:
        if(age>=18){
            printf("Ticket Price:%d",250+50);
        }
        else{
            printf("Ticket Price:%d",250);
        }
        break;
    

    }
    return 0;
}