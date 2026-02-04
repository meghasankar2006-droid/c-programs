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
    int a[r];
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        a[i]=sum;
    }
    int max=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            int val=a[i]-a[j];
            if(val>max){
                max=val;
            }
        }
    }
    printf("%d",max);

}