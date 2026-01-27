#include <stdio.h>
int main(){
    int role,ex;
    scanf("%d %d",&role,&ex);
    int salary;
    switch (role)
    {
    case 1:
        if(ex>=3){
            salary=50000+(ex*5000);
                printf("%d",salary);   
        }
        else{
            salary=50000;
            printf("%d",salary); 
        }
        break;
    case 2:
        if(ex>=3){
            salary=35000+(ex*5000);
                printf("%d",salary);   
        }
        else{
            salary=35000;
            printf("%d",salary); 
        }
        break;
    
    default:
        break;
    }

}