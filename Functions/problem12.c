// Check Leap Year Using Function

#include <stdio.h>
void leap_year(int n){
    if(n%4==0 || (n%100==0 && n%400!=0)){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap year");
    }
}
int main(){
    int year;
    scanf("%d",&year);
    leap_year(year);
}