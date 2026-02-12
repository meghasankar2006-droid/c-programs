//Fibonacci Series Using Function
#include <stdio.h>
int fibo_series(int n){
    int f=0;
    int l=1;
    for(int i=1;i<=n;i++){
        printf("%d ",f);
        int c=f+l;
        f=l;
        l=c;

    }
}
int main(){
    int num;
    scanf("%d",&num);
    fibo_series(num);
}