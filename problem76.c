#include <stdio.h>

int main(){
    char let;
    scanf("%c", &let); 

    switch(let){
        
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("Vowels");
            break;
        default:
            printf("Consonants");
            break;
    }

    return 0;
}
