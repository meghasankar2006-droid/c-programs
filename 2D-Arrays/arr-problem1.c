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
    int val;
    int max=arr[0][0];
    int secmax=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             val=arr[i][j];
            if(val>max){
                secmax=max;
                max=val;
            }
            else if(val>secmax && val!=max){
                secmax=val;
            }

        }
    }
    printf("%d",secmax);
}