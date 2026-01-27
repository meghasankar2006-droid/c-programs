#include<stdio.h>
int main(){
    int plan;
    int m;
    scanf("%d",&plan);
    printf("payment method:1.UPI ,2.Wallet");
    scanf("%d",&m);
    int amt;
    switch(plan){
        case 1:
            if(m==1){
              amt=199-20;
              printf("Rs %d",amt);  
            }
            else{
                printf("Rs 199");
            }
            break;
        case 2:
            if(m==1){
               amt=399-20;
              printf("Rs %d",amt);  
            }
            else{
              printf("Rs 399");  
            }
            break;
        default:
        printf("Invalid Option");
    }

}