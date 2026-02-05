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
    //row minimum
    int row[r];
    int min=0;
    for( int i=0;i<r;i++){
        int val=0;
        for(int j=0;j<c;j++){
            int v=arr[i][j];
            if(v<min || val==0){
                min=v;
                val++;
            }
        }
    row[i]=min;
    }
    //column maximum
    int val;
    int col[c];
    for(int k=0;k<c;k++){
        int max=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                    val=arr[i][k];
            }
            if(val>max){
                max=val;
            }    
            }
        col[k]=max;
        }
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            if(col[i]==row[j]){
                count=count+1;
            }
        }
    }
    printf("%d",count);

    }
    