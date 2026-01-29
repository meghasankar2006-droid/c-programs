#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",j+64);
        }
        for(int k=i-1;k>0;k--){
            printf("%c",k+64);
        }
        printf("\n");
    }
    return 0;
}