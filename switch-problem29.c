#include<stdio.h>
int main(){
    int type,dis;
    scanf("%d %d",&type,&dis);

    switch(type){
    case 1:
        printf("Fare: %d",10*dis);
        break;
    case 2:
        printf("Fare: %d",dis*15);
        break;
    case 3:
        printf("Fare: %d",dis*20);
        break;
    default:
        printf("Invalid Input");

    }
    return 0;
}