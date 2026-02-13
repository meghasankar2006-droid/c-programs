#include <stdio.h>
int reverse(int arr[],int n){
    int *p=arr;
    int a=0;
    int temp=0;
    int num=n-1;
    while(a<num){
        temp=*(p+a);
        *(p+a)=*(p+num);
        *(p+num)=temp;
        a++;
        num--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
   
}