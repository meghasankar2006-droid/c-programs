#include <stdio.h>
void max_element(int arr[],int size){
    int *p=arr;
    int max=*p;
    for(int i=0;i<size;i++){
        if(max<*p){
            max=*p;
        }
        p++;
    }
    printf("%d",max);
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    max_element(arr,size);
}