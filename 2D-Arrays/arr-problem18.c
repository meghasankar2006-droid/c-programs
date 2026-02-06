#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int n=r*c;
    int k=0;
    int a[n];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                scanf("%d",&arr[i][j]);
                a[k]=arr[i][j];
                k=k+1;
            }
        }
        int max=0;
        for(int i=0;i<r;i++){
            int dif=0;
            for(int j=0;j<c;j++){
                for(int s=0;s<k;s++){
                    dif=arr[i][j]-a[s];
                    if(dif>max){
                        max=dif;
                    }
                }
            }
        }
        printf("%d",max);
        
}