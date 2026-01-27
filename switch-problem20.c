#include <stdio.h>
int main(){
    int c,dis;
    scanf("%d %d",&c,&dis);
    switch(c){
        case 1:
            if(dis<=30){
                printf("eligible");
            }
            else if(dis>30){
                printf("Eligible with Extra Fee");
            }
            break;
        case 2:
            if(dis<=30){
                printf("eligible");
            }
            else if(dis>30){
                printf("Not Eligible");
            }
            break;
        default:
            printf("Invalid option");
    }
    return 0;
}