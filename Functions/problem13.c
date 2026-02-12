// Find Power of a Number Using Function (Loop)

#include <stdio.h>
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int num,pow;
    scanf("%d %d",&num,&pow);
    printf("%d",power(num,pow));

}