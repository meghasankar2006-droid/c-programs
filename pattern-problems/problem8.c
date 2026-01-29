#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=n;
    for(int i=0;i<n;i++){
        for(int s=n;s>n-i;s--){
            printf(" ");
        }
        for(int j=1;j<=2*k-1;j++){
        printf("*");
        }
        k--;
        printf("\n");
    }
        
        return 0;
    }
