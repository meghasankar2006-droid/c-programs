#include<stdio.h>
int main(){
    int call,min;
    scanf("%d %d",&call,&min);
    int dis;
    switch(call){
    case 1:
        printf(" Call Charge:%d",min*1);
        break;
    case 2:
        printf(" Call Charge:%d",min*3);
        break;
    case 3:
        printf(" Call Charge:%d",min*10);
        break;
    default:
        printf("Invalid Input");

    }
    return 0;
}