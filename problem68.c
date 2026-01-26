#include <stdio.h>

int main() {
    int a1,a2,a3;
    scanf("%d %d %d",&a1,&a2,&a3);
    if((a1!=0 && a2!=0 && a3!=0) && (a1==a2 && a2==a3 && a3==a1)){
            printf("Equilateral triangle");
    }
    else{
        printf("Not Equilateral triangle");
    }

    
    return 0;
}
