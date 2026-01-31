#include <stdio.h>
int main(){
    int n,hours;
    scanf("%d",&n);
    int count=0,max=0;
    while(n>0){
        scanf("%d",&hours);
        if(hours>max){
            max=hours;
        }

        if(hours>5){ 
            count++;
        }
        n--;
    }
    printf("Max Usage:%d\n",max);
    printf("Surge Hours:%d",count);
}