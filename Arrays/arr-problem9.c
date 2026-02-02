#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    int a[n];
    int k=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            a[k]=arr[i];
            k=k+1;
    }
}
    for(int i=k-1;i>=0;i--){
        printf("%d ",a[i]);
    }

}
