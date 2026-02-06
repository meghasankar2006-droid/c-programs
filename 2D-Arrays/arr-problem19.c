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
    int count=0;
    for(int i=0;i<r;i++){
        val=0;
        for(int j=0;j<c;j++){
            for(int k=j+1;k<c;k++){
                if(arr[i][j]==arr[i][k]){
                     val=1;
                    break;
                }
            }
            if(val==1){
                break;
            }
        }
        if(val==0){
            count++;
        }
    }
    printf("%d",count);
}