#include <stdio.h>
#include <string.h>
void concat(char *a,char *b ,char *c,int n,int n1){
    int j=0;
    for(int i=0;i<n;i++){
        *(c+j)=*(a+i);
        j++;
    }
    for(int i=0;i<n;i++){
        *(c+j)=*(b+i);
        j++;
    }
    *(c+j)='\0';
}
int main(){
    char str1[50];
    char str2[50];
    char str3[100];
    scanf("%s %s",str1,str2);
    int n=strlen(str1);
    int n1=strlen(str2);
    concat(str1,str2,str3,n,n1);
    printf("%s",str3);
}