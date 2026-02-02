#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int dup=0;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                dup=1;
                break;
            }
        }
        if(dup==1){
            printf("%d",arr[i]);
            break;
        }
        else{
            dup=0;
        }
    }
 if(dup==0){
 printf("%d",-1);
 }
}