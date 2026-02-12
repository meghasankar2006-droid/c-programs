#include <stdio.h>
int power_num(int a,int b){
    if(b>0 && a>=0){
        return a*power_num(a,b-1);
    }
    else{ 
        return 1;
    }
}
int main(){
    int num,pow;
    scanf("%d %d",&num,&pow);
    printf("%d",power_num(num,pow));
}