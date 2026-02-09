#include <stdio.h>
int main()
{
    char str[200];
    scanf("%s",str);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(!(str[i]>='a'&& str[i]<='z') &&!(str[i]>='A'&& str[i]<='Z') && !(str[i]>='0'&& str[i]<='9') ){
            count++;
        }
    }
    printf("%d",count);

}