#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int col[c];
    int val=0;
    int max=0;
    int index=0;
    for(int k=0;k<c;k++){
        int sum=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<1;j++){
                val=arr[i][k];
                sum=sum+val;
            }
        }
        if(sum>max){
            max=sum;
            index=k;

        }
    }
printf("%d",index);

}