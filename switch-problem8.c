#include <stdio.h>
int main(){
    int mark,at;
    scanf("%d %d",&at,&mark);
    if(at<75 || mark<50){
        printf("fail");
    }
    else{
        if(mark>=75){
            printf("Distinction");
        }
        else if(mark<75 && mark>=50){
            printf("Pass");
        }
    }

}