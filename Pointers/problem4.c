#include <stdio.h>
char copy(char *p ,char *c){
    int i;
    for( i=0;*(p+i)!=0;i++){
        *(c+i)=*(p+i);
    }
    *(c+i)='\0';   
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char str1[100];
    copy(str,str1);
    printf("%s",str1);

}
