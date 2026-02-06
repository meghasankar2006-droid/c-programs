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
    int count=0;
    for(int i=0;i<r;i++){
        int prime=0;
        for(int j=0;j<c;j++){
            int val=arr[i][j];
            for(int i=2;i<val;i++){
                if(val%i==0){
                    prime=1;
                    break;
                }
            }
            if(prime==1){
                break;
            }
        }
        if(prime==0){
            count=count+1;
        }
    }
    printf("%d",count);
}