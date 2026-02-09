#include <stdio.h>
int main(){
    char str[200];
    scanf("%s",str);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>'A'&& str[i]<'Z'){
            count++;
        }
    }
    if(count>=1){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}