#include <stdio.h>
int search_fuc(int arr[],int *n,int *a){
    int *p=arr;
    int val=0;
    for(int i=0;i<*n;i++){
        if(*(p+i)==*a){
            printf("%d",i+1);
            val=1;
            break;
        }
        else{
            val=0;
        }
    }
    if(val==0){
        printf("-1");
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int search;
    scanf("%d",&search);
    search_fuc(arr,&n,&search);
}