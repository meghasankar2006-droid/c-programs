#include <stdio.h>

int main() {
    int mark;
    scanf("%d",&mark);
    if(mark>=90){
        printf("Grade A");
    }
    else if(mark>=75 && mark<90){
        printf("Grade B");
    }
    else{
        printf("Grade c");
    }
    
    return 0;
}
