#include <stdio.h>

int main() {
    char let;
    scanf("%c",&let);
    if((let>=65 && let<=90) || (let>=97 && let<=122)){
    if(let>=65 && let<=90){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    }
    
    return 0;
}
