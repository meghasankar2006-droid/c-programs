#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int temp=a;
    int c= a/=b;
    int d= temp%=b;
    printf("%d %d",c,d);
    

    return 0;
}