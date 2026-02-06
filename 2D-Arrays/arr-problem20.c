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
    int val=1;
    for(int i=0;i<n;i++){
        val=1;
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
                if(count>1){
                    val=0;
                    break;
                }
            }
            else{
                val=1;
            }
        }
        if(val==1){
            printf("%d",a[i]);
            break;
        }
    }
}