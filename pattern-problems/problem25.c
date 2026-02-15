#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int size=2*n-1;
    int num=n-1;
    int l=num,r=num;
    for(int i=0;i<n;i++){
        for(int j=0;j<size;j++){
            if((i==0 && j==num) || (j==l)||( j==r)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        l--;
        r++;
        printf("\n");
    }
    int a=1,b=size-2;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<size;j++){
            if((i==n-1 && j==num)||(j==a)||(j==b)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
            a++;
            b--;
            printf("\n");
    }
}