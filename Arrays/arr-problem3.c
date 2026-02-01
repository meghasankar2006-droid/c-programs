#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>arr[i+1] && i<n-i){
            count++;
        }
    }
    if(count==0){
        printf("Yes");
    }
    else{
        printf("No");
    }

}