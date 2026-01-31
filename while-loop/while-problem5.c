#include <stdio.h>
int main(){
    int wt,n,val;
    scanf("%d %d",&wt,&n);
    int sum=0,count=0;
    while(n>0){
        scanf("%d",&val);
        int sum=sum+val;
        if(sum<=wt){
            count=count+1;
        }
        n--;
    }
printf("Passengers Allowed:%d\n",count);
if(sum<=wt){
    printf("Overload: Yes");
}
else{
    printf("Overload: No");
}
}