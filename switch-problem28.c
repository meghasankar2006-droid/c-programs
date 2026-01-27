#include<stdio.h>
int main(){
    int room;
    scanf("%d",&room);
    switch(room){
    case 1:
        printf("Hostal Fees:80000");
        break;
    case 2:
        printf("Hostal Fees:60000");
        break;
    case 3:
        printf("Hostal Fees:45000");
        break;
    default:
        printf("Invalid Input");

    }
    return 0;
}