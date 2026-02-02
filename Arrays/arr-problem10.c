#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    int a[n];
    for(int i=n-1;i>0;i--){
        if(arr[i]>max){
            max=arr[i];
            a[i]=arr[i];
        }
        else{
            a[i]=max;
            
        }

    }
    for(int i=1;i<=n-1;i++){
        printf("%d ",a[i]);
    }
    printf("%d ",-1);
    // for(int i=n-1;i>=0;i--){
    //     if(i==0){
    //         a[i]=-1;
    //     }
    //     printf("%d ",a[i]);
    // }
}