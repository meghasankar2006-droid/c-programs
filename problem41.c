
#include <stdio.h>

int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int a=n1&&n2;
    int b=n1||n2;
    int ans=a||b
    printf("%d",ans);
    return 0;
}