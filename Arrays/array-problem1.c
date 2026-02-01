#include <stdio.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<=n/2;i++){
       for(int j=0;j<=n;j++){
        if(arr[j]<arr[i]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       }
    }
    int j=n-1;
    for(int i=n-2;i>0;i--){
        if(arr[i]<arr[j]){
        printf("%d",arr[i]);
        break;
        }
}
}