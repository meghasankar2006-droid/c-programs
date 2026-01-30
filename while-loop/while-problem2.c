#include <stdio.h>
int main(){
    int days,bal,amt;
    scanf("%d %d",&days,&bal);
    int count=0;
    int i=1;
    while(i<=days){
        scanf("%d",&amt);
        bal=bal+amt;
        if(bal<2000 && i<days){
            count=count+1;
        }
        i++;
    }
    printf("Final Balance:%d\n",bal);
    printf("Low Balance Days:%d",count);


}