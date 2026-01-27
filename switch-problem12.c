#include <stdio.h>
int main(){
    int vehicle_type,trip;
    scanf("%d %d",&vehicle_type,&trip);
    int amt=0;
    switch(vehicle_type){
        case 1:
            if(trip==1){
             amt=100;
             printf("Amount :%d",amt);
            }
            else{
              amt=800;
             printf(" Amount :%d",amt);  
            }
            break;
        case 2:
            amt =240*trip;
            printf(" Amount :%d",amt); 
            break;
        default:
            printf("invalid option");
    }
}