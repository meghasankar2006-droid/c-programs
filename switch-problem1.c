#include <stdio.h>
int main(){
    int type,unit;
    scanf("%d %d",&type,&unit);
    int total;
    switch(type){
        case 1:
        if(unit>0){
            if(unit<=100){
                total=unit*3;
                printf("%d",total);
            }
            else if(unit>100 && unit<=200){
                total=(100*3)+((unit-100)*5);
                total=total-80;
                printf("%d",total);
            }
            else{
               total=(100*3)+(100*5)+((unit-200)*7);
                total=total-80;
                printf("%d",total); 
            }
        }
        break;
        case 2:
            if(unit>0){
                if(unit<=100){
                    total=unit*7;
                    printf("%d",total);
                }
                else if(unit>100){
                    total=(100*7)+((unit-100)*10);
                    printf("%d",total);
                }
            }
    }

}