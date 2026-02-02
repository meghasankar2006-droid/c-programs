#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp[n];
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[k]=arr[i];
            k=k+1;
        }
       }
    while(k<n){
        temp[k]=0;
        k++;
    }


for(int i=0;i<n;i++){
    printf("%d ",temp[i]);
}
}

