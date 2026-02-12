#include <stdio.h>
int isvowel(char *c){
    int count=0;
    for(int i=0;*(c+i)!='\0';i++){
        if(*(c+i)=='a'|| *(c+i)=='e'|| *(c+i)=='i'|| *(c+i)=='o'|| *(c+i)=='u'|| *(c+i)=='A'|| *(c+i)=='E'|| *(c+i)=='O'|| *(c+i)=='U'|| *(c+i)=='I'){
            count=count+1;
        }
    }
    printf("%d",count);



}
int main(){
    char str[100];
    scanf("%s",str);
    isvowel(str);


}










