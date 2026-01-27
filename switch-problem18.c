#include<stdio.h>
int main(){
    int role,time;
    scanf("%d %d",&role,&time);
    switch(role){
        case 1:
            printf("full access");
         break;
         case 2:
        if(time<=20){
            printf("Limited Access");
        }
        else{
            printf("access denied");
        }
         
         break;
         default:
         printf("Invalid option");
    
    }
}