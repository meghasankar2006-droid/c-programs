#include <stdio.h>
int main(){
    int maxwt,n,pwt;
    scanf("%d %d",&maxwt,&n);
    int sum=0,count=0;
    while(n>0){
        scanf("%d",&pwt);
        int sum=sum+pwt;
        if(sum<=maxwt){
            count=count+1;
        }
        n--;
    }
printf("Passengers Allowed:%d\n",count);
if(sum<=maxwt){
    printf("Overload: Yes");
}
else{
    printf("Overload: No");
}
}