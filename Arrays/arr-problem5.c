#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0,sum2=0;
    for(int i=1;i<=n-1;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    for(int j=1;j<=n;j++){
        sum2=sum2+j;
    }
    int missing=sum2-sum;
    printf("%d",missing);

}