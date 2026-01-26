#include <stdio.h>

int main() {
    int unit,total;
    scanf("%d",&unit);
    if(unit>=0 && unit<=100){
        total=unit*4;
        printf("total Amount:%d",total);
    }
    else if(unit>100 && unit<=200){
        total=unit*5;
        printf("total Amount:%d",total);
    }
    else if(unit>200){
        total=unit*6;
        printf("total Amount:%d",total);
    }
    

    
    return 0;
}
