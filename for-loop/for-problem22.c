#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count=count+1;
        }
    }
    if(count==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

}