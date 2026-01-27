#include<stdio.h>
int main(){
    int type,amt;
    scanf("%d %d",&type,&amt);
    int dis;
    switch(type){
    case 1:
        dis=amt-((amt/100)*5);
        printf(" Pay :%d",dis);
        break;
    case 2:
       dis=amt-((amt/100)*15);
        printf(" Pay :%d",dis);
        break;
    default:
        printf("Invalid Input");

    }
    return 0;
}