#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0,count=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int avg=sum/n;
    for(int i=0;i<n;i++){
        if(arr[i]>avg){
            count=count+1;
        }
    }
    printf("%d",count);

}