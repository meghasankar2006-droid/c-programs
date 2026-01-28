#include <stdio.h>
int main(){
    int num,pow;
    scanf("%d %d",&num,&pow);
    int pro=1;
    if(pow==0){
        printf("%d",1);
    }
    else{
    for(int i=1;i<=pow;i++){
        pro=pro*num;

    }
    printf("%d",pro);
}
return 0;
}