#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num%3==0 && num%7==0){
        printf("Multiple of Both 3 and 7");
    }
    else{
        printf("Not the Multiple of 3 and 7");
    }
    return 0;
}