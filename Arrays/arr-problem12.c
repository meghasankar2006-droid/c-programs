#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum,val1,val2;
    int flag=0;
    scanf("%d",&sum);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==sum){
                val1=arr[i];
                val2=arr[j];
                flag=1;
                break;
            }    
        }
        if(flag==1){
            break;
        }    
        }
    if(flag==1){
        printf("%d\n",val1);
        printf("%d\n",val2);
    }
    else{
        printf("No pair");
    }
    }
   
