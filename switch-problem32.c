#include<stdio.h>
int main(){
    int traffic;
    scanf("%d",&traffic);
    switch(traffic){
    case 1:
        printf("Fine : 1000");
        break;
    case 2:
        printf("Fine : 1500");
        break;
    case 3:
        printf("Fine : 2000");
        break;
    default:
        printf("Invalid Input");

    }
    return 0;
}