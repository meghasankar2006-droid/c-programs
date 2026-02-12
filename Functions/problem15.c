//Print Multiplication Table Using Function
#include <stdio.h>

int multi_table(int n){
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    multi_table(num);
}