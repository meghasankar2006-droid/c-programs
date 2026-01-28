#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int f=0;
    int l=1;
    int c;
    for(int i=0;i<num;i++){
        printf("%d ",f);
        c=f+l;
        f=l;
        l=c;
    }
    return 0;
}