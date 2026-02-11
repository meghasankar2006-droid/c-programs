//Calculate Simple Interest Using a Function
#include <stdio.h>
float simple_interest(int a,int b,int c){
    float total;
    total=(a*b*c)/100;
    return total;
}
int main(){
    int principle;
    int rate;
    int time;
    scanf("%d %d %d",&principle,&rate,&time);
    printf("%.2f",simple_interest(principle,rate,time));

}