//Sum of N Natural Numbers Using Function

#include <stdio.h>
int natural_num(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",natural_num(num));

}