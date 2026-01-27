#include <stdio.h>
int main(){
    int type;
    int bal,wd;
    scanf("%d %d %d",&type,&bal,&wd);
    switch (type)
    {
    case 1:
        if(bal>=wd){
            printf("Transaction sucessful");
        }
        else{
            printf("insufficient balance");
        }
        break;
    case 2:
        if(bal>=wd && wd<=5000){
            printf("Transaction Successful");
        }
        else if(wd>5000){
            printf("Requested amount exceeds limit,Transaction rejected.");
        }
        else{
            printf("Transaction Successful");
        }

    }
    return 0;
}