#include <stdio.h>
int main(){
    int amt ,speed;
    scanf("%d %d",&amt,&speed);
    switch(speed){
        case 1:
            printf("Delivery charge ₹50");
        break;
        case 2:
            if(amt<1000){
                printf("Delivery charge ₹%d",100);
            }
            else if(amt>=1000){
                printf("Free Delivery");
            }
            break;
        default:
            printf("Invalid Option");
    }
}