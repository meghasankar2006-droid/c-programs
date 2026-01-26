#include <stdio.h>

int main() {
    int a1,a2,a3;
    scanf("%d %d %d",&a1,&a2,&a3);
    if((a1!=0 && a2!=0 && a3!=0) && (a1+a2+a3==180)){
            printf("Valid Triangle");
    }
    else{
        printf("Not a Valid triangle");
    }

    
    return 0;
}
