#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    int count=0,cmax=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1]){
            count++;
            if(count>cmax){
                cmax=count;
            }
        }
        else{
            count=1;
        }
    }
    printf("%d",cmax);
}