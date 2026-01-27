#include<stdio.h>
int main(){
    int doctor;
    scanf("%d",&doctor);
    switch(doctor){
    case 1:
        printf("Consultation Fee ₹500");
        break;
    case 2:
        printf("Consultation Fee ₹1200");
        break;
    
    default:
        printf("Invalid Input");

    }
    return 0;
}