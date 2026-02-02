#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    int k=0,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            arr1[k]=arr[i];
            k=k+1;
        }
        else{
            count=count+1;
        }
    }    
int min=arr1[0];
        for(int i=0;i<k;i++){
            if(arr1[i]<min){
                min=arr1[i];
            }
        }
        if(count<n){
            printf("%d",min);
        }
    
        else{
            printf("No positive");
        }
    

    }


