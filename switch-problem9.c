#include <stdio.h>
int main(){
    int type;
    char season;
    scanf("%d %c",&type,&season);
    switch (type)
    {
    case 1:
        if(season=='A'|| season=='a'){
            printf("₹2500");
        }
        else if(season=='B'|| season=='b'){
           printf("₹2000"); 
        }
        else{
            printf("Invalid Input");
        }
        break;
    case 2:
        if(season=='A'|| season=='a'){
            printf("₹4000");
        }
        else if(season=='B'|| season=='b'){
           printf("₹3000"); 
        }
        else{
            printf("Invalid Input");
        }
    }
    return 0;
}