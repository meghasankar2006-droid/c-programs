#include <stdio.h>
int main(){
    int loan,score;
    scanf("%d %d",&loan,&score);
    switch (loan)
    {
    case 1:
        if(score>=700){
            printf("Approved");
        }
        else if(score<700 && score>=650){
            printf("Manual Review");
        }
        else{
            printf("Rejected");
        }
        break;
    case 2:
        if(score>=700){
            printf("Approved");
        }
        else{
            printf("Rejected");
        }
        break;
    
    default:
        printf("Invalid Option");
        break;
    }
    return 0;
}