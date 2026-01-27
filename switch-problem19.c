#include <stdio.h>
int main(){
    int atmpt,mark;
    scanf("%d %d",&atmpt,&mark);
        switch (atmpt)
        {
        case 1:
            if(mark>=85){
                printf("Excellent");
            }
            else{
                printf("Not qualified");
            }
            break;
        case 2:
            if(mark>=60){
                printf("Good");
            }
            else{
                printf("Not qualified");
            }
            break;
        case 3:
            printf("Need Improvement");
        
        default:
            printf("Invalid option");
            break;
        }
    }

