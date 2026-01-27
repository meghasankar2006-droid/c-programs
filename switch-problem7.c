#include <stdio.h>
int main(){
    int ac,year;
    scanf("%d %d",&ac,&year);
    switch (ac)
    {
    case 1:
       printf("Interest 4% ");
        break;
    case 2:
        if(year<=3){
            printf("Interest 5%");
        }
        else if(year>3){
           printf("Interest 7%"); 
        }
        break;
    default:
        printf("Invalid option");
    }

}
