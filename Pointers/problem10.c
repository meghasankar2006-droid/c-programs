#include <stdio.h>
#include <string.h>
int count_str(char *c,int *num){
    int count=1;
    for(int i=0;i<*num;i++){
        if(*(c+i)==' '){
            count++;
        }
    }
    printf("%d",count
}
int main(){
    char str[200];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    count_str(str,&n);
}
