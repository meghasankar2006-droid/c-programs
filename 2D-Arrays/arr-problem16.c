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
    int val=0;
    int num=0,min=0,index=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            val=arr[i][j];
            sum=sum+val;
        }
        if(sum>0){
            if(sum<min || num==0){
                min=sum;
                num++;
                index=i;
            }
        }
    }
    printf("%d",index);
}