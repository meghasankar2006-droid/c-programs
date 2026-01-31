#include <stdio.h>
int main(){
    int n,val;
    scanf("%d",&n);
    int scount=0,ccount=0;
    while(n>0){
        scanf("%d",&val);
        if(val==1){
            scount++;
        }
        else{
            ccount++;
        }
        n--;
    }
    printf("Successful:%d\n",scount);
    printf("Cancelled:%d\n",ccount);
    if(scount>=ccount){
        printf("Status: safe");
    }
    else{
         printf("Status: Risk");
    }
}