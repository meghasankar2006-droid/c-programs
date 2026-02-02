#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=k;i<n;i++){
        printf("%d",arr[i]);
        }
    for(int i=0;i<k;i++){
        printf("%d ",arr[i]);
        }    
    }
    