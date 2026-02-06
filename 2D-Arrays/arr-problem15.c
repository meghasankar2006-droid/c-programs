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
    int p=0,ans=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int count=0;
            val=arr[i][j];
            for(int k=2;k<val;k++){
                if(val%k==0){
                    count=count+1;
                }
            }
            if(count==0){
                p=p+1;
            }
        }
    ans=p;
    }
    printf("%d",ans);
}