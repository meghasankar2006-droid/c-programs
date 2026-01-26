#include <stdio.h>

int main() {
    char val;
    scanf("%c",&val);
    if(val>=48 && val<=57){
        printf("Digit");
    }
    else if((val>=65 && val<=90) || (val>=97 && val<=122)){
        printf("Alphabet");
    }
    else{
        printf("Special Character");
    }
    return 0;
}