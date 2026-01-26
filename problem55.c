#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num%5==0){
        printf("The Number is Divisible by 5");
    }
    else{
        printf("The Number is Not Divisible by 5");
    }

    return 0;
}