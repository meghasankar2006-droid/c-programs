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

    
    int n=c;
    int val=0,val1=0,val2=0;
    for(int i=0;i<r;i++){
        int j=0;
        int n=c-1;
        int count=0;
        while(j<n){
            val1=arr[i][j];
            val2=arr[i][n];
            if(val1!=val2){
                count=1;
                break;
            }
            j++;
            n--;
        }
        if(count==0){
            val=val+1;
        }
    }
    printf("%d",val);
}