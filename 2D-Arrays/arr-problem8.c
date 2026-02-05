#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int n=r*c;
    int a[n];
    int k=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[k]=arr[i][j];
            k=k+1;
        }
    }
    
    int max=0;
    for(int i=0;i<=n-r;i++){
        int sum=0;
        sum=a[i]+a[i+1]+a[i+3]+a[i+4];
        if(sum>max){
            max=sum;
        }

    }
printf("%d",max);
}