#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    int pro;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            pro=arr[i]*arr[j];
            if(pro>max){
                max=pro;
            }
        }
    }
    printf("%d",max);
}