#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num>99 && num<1000){
        printf("Three digit number");
    }
    else{
        printf(" Not a Three digit number");
    }
    return 0;
}