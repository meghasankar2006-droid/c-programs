#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxarr[r];
    int minarr[r];
    for(int i=0;i<r;i++){
        int max=0;
        int min=0;
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
        maxarr[i]=max;
        minarr[i]=min;
    }
    int p1=1,p2=1;
    int max1=0,max2=0;
    for(int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
            p1=maxarr[i]*maxarr[j];
            if(p1>max1){
                max1=p1;
            }
        }
        }
    for(int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
           p2=minarr[i]*minarr[j];
           if(p2>max2){
                max2=p2;
           }
        }
    }
    if(max2>max1){
        printf("%d",max2);
    }
    else{
        printf("%d",max1);
    }
    
    }
