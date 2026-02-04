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
int arr1[n];
int k=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        arr1[k]=arr[i][j];
        k=k+1;

}

for(int i=0;i<n;i++){
    int val=0;
    for(int j=i+1;j<n;j++){
        if(arr1[i]==arr1[j]){
            val=1;
            break;
        }
    }
    if(val==1){
        printf("%d",arr1[i]);
        break;
    }
}

}
}