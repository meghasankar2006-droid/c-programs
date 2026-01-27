#include <stdio.h>
int main(){
    int cls,age;
    scanf("%d %d",&cls,&age);
    int cost;
    switch(cls){
        case 1:
            if(age<12){
                cost=300-((300/100)*50);
                printf("%d",cost);
            }
            else if(age>=60){
                cost=300-((300/100)*33);
                printf("%d",cost);
            }
            else{
                printf("300");
            }
            break;
        case 2:
            if(age<12){
                cost=1000-((1000/100)*50);
                printf("%d",cost);
            }
            else{
                printf("1000");
            }
    }
}