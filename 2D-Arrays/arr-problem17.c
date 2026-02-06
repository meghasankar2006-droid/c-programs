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
    int dg=0;
    int val=0;
    int count=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
         if(i==j){
            dg=arr[i][j];
         } 
         else{
            val=arr[i][j];
            sum=sum+val;
         }  
        }
        if(dg>sum){
            count=count+1;
        }
    }
    printf("%d",count);

}