#include <stdio.h>
int main(){
    char str[200];
    char copy[200];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        copy[i]=str[i];
    }
    printf("%s",copy);
}