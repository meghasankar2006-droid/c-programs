#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int nmin=-1000000;
    int pmin=1000000;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(arr[i]>nmin){
                nmin=arr[i];
            }
        }
        else{
            if(arr[i]<pmin){
                pmin=arr[i];
            }
        }
    }
    int count1=0,count2=0;
    for(int i=nmin;i<0;i++){
        count1++;
    }
    for(int i=pmin;i>0;i--){
        count2++;
    }
    if(count1>count2){
        printf("%d",pmin);
    }
    else if(-(nmin)==pmin || nmin==-(pmin) ){
        if(nmin<0){
            printf("%d",pmin);
        }
        else if(pmin<0){
            printf("%d",nmin);
    }

    }
    else{
        printf("%d",nmin);
    }
}