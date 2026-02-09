#include <stdio.h>
int main(){
    char str[200];
    scanf("%s",str);
    char search;
    scanf(" %c",&search);
    int val=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==search){
            printf("%d",i);
            break;
        }
        else{
            val=0;
        }
    }
    if(val==2){
        printf("-1");
    }
}