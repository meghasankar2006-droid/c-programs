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
    int n=r*c;
    int a[n];
    int k=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[k]=arr[i][j];
            k=k+1;
        }
    }
    int max=0;
    int val=0;
    for(int i=0;i<k;i++){
        int count=0;
        for(int j=0;j<k;j++){
            if(a[i]==a[j]){
                count=count+1;
            }
        }
        if(count>max){
            max=count;
            val=a[i];
        }
    }
    printf("%d",val);
}