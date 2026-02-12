//GCD of Two Numbers
#include <stdio.h>
int gcd_num(int a,int b){
    int n;
    int max=0;
    if(a<b){
        n=a;
    }
    else{
        n=b;
    }
    for(int i=1;i<=n;i++){
        if(a%i==0 && b%i==0){
            if(max<i){
                max=i;
            }
        }
    }
    return max;
}
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("%d",gcd_num(n1,n2));
}