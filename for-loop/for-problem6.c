#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int pro=1;
    if(num==0){
        printf("%d",1);
    }
    else{
    for(int i=1;i<=num;i++){
        pro=pro*i;

    }
    printf("%d",pro);
}

return 0;
}